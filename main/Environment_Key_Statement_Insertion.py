import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata
import copy


class StatementInserter:
    
    # init for the class and insert the key statements into th targeted node
    # parameters:
    #    node -> the targeted node
    #    loop_time -> the loop time for each looper in enviroment 
    #    magic_number_list -> the list which record all if block status in the targeted node
    #    magic_number_length_min -> the min of magic number length
    #    magic_number_length_max -> the max of magic number length
    #    checksum_type -> the checksum type
    #    checksum_div -> the checksum dividend
    #    func_flag -> the flag to record the function node is in dataflow or not
    def __init__(self,node,loop_time,magic_number_list,magic_number_length_min,magic_number_length_max,checksum_type,checksum_div,func_flag):
        
        self.loop_time = loop_time
        
        self.magic_number_length_min = magic_number_length_min
        self.magic_number_length_max = magic_number_length_max
        
        self.magic_number_list = magic_number_list
        self.checksum_type = checksum_type
        self.checksum_div = checksum_div
        
        self.node = node
        self.cfv = self.node["cfv"]
        
        self.control_operators = [">","<"]  # the operator for if input conditions
        
        self.keyWords = ["if","while","for","switch","else","else if","case"]  # the key word for statements
        
        self.control_var_pool = []  # the pool to store the control variables for if blocks
        self.looper_pool = []     # the pool to store the looper varibales
        self.keyWordLocation = []  # record the key words` position

        self.locateKeyWord()     # get the key words` position
        self.statementInsertion()  # insert the key statements
        
        if func_flag ==1:  # if the function node is not in dataflow
            self.functionCallInsertion()
            
       
    # generate a new looper variable 
    def chooseLooper(self):
        #  e.g. looper_as
        prefix = "looper_"
        for i in range(1,10000):
            if prefix+str(i) not in self.looper_pool:
                self.looper_pool.append(prefix+str(i))
                return prefix+str(i)
            
    # generate a new controller variable 
    def chooseController(self): 
        # controller_a
        #print(self.control_var_pool)
        prefix = "controller_"
        for i in range(1,10000):
            if prefix+str(i) not in self.control_var_pool:
                self.control_var_pool.append(prefix+str(i))
                return prefix+str(i)

    # ramdomly pick a operator from the ">" and "<"
    def randomlyPickOperator(self):
        return self.control_operators[random.randint(0,1)]
    

    # randomly generate a string with ascii character
    # parameters:
    #    length -> the length of 
    def randomlyPickASCII(self,length):
        string = ""
        for i in range(0,length):
            char = chr(random.randint(32,126))
            while char in ['"',"\\","'"]:   # make sure there are special ascii character
                char = chr(random.randint(32,126))
            string+= char
        return string
    
    # ======================== key statement insertion =======================
    
    # record the positions of the key words
    def locateKeyWord(self):
        for index in range(0,len(self.cfv)):
            if True in [self.cfv[index].startswith(x) for x in self.keyWords]:
                self.keyWordLocation.append(index)
                
    # insert the key statements   
    def statementInsertion(self):
        temp=0   # the offset for insert lines
        magic_index = 0  # record the index of if block
        for index in self.keyWordLocation:
            
            #  " FOR "
            if self.cfv[index+temp].startswith("for"):
                loop = self.loop_time
                if '/' in self.cfv[index]:  # if the looper has been marked in FuncCall_Controller_Insertion
                    loop = int(self.cfv[index].split("/")[1])
                var_looper = self.chooseLooper()

                # insert the for statement
                self.cfv[index+temp] = "for(int "+var_looper+"=0; "+var_looper+"<"+str(loop)+";"+var_looper+"++)"
            
            #  " WHILE "
            if self.cfv[index+temp].startswith("while"):
                loop = self.loop_time
                if '/' in self.cfv[index]:  # if the looper has been marked in FuncCall_Controller_Insertion
                    loop = int(self.cfv[index].split("/")[1])
                var_looper = self.chooseLooper()

                # generate the variable for looper and claim it
                assign_statement = "int "+var_looper+" = 0;"
                self.cfv.insert(index+temp,assign_statement)
                temp+=1

                # insert the while statement
                self.cfv[index+temp] = "while("+var_looper+" < "+ str(loop) +")"

                # inert the looper statement
                step_statement = var_looper+" += 1;"
                self.cfv.insert(index+temp+2,step_statement)
                temp+=1
            
            #  " IF "-LIKE
            if self.cfv[index+temp] == "if" or self.cfv[index+temp] == "else if":
                var = self.chooseController()
                length = random.randint(self.magic_number_length_min,self.magic_number_length_max)
                
                # according to the if block status, add the if statement
                if self.magic_number_list[magic_index] == 0:   # controller without inputs
                    statement = "if(1)" 
                else:
                    # add the controller claim
                    definition = "char "+var+"["+str(length+1)+"];"
                    self.cfv.insert(index+temp,definition)
                    temp+=1
                    # add the input for controller
                    self.cfv.insert(index+temp,"fgets("+str(var)+" ,"+str(length+1)+" ,stdin);")
                    temp+=1
                    if self.magic_number_list[magic_index] == 1:  # normal input controller
                        operator = self.randomlyPickOperator()
                        statement = "if( strcmp( " + str(var) + ', "' + str(self.randomlyPickASCII(length)) + '") '+self.randomlyPickOperator()+' 0)'

                    else:
                        if self.magic_number_list[magic_index] == 2:  # magic number
                            statement = "if( strcmp( " + str(var) + ', "' + str(self.randomlyPickASCII(length)) + '") == 0)'
                        else:   #   checksum
                            statement = self.switchForChecksum(self.checksum_type,var,self.checksum_div,length)
                
                # insert the if statement
                self.cfv[index+temp] = statement
                magic_index+=1

    # switcher for the checksum 
    # parameters:
    #    checksum_type -> the checksum type
    #    var -> the controller
    #    checksum_div -> the checksum dividend 
    #    length -> the length of controller
    def switchForChecksum(self,checksum_type,var,checksum_div,length):
        
        # please see Formalization.py for more detail about checksum
        switch = {
            1 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))",
            0 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))"
        }

        return switch.get(checksum_type,0)
    
    # ======================== key statement insertion ends =======================
    
    # ======================= function call insertion =========================
    
    # scan the possible place which can be inserted a function call
    def scan4PossibleFuncCallPlace(self):
        positions = [len(self.cfv)-1] # make sure there will be one possible position
        for index in range(0,len(self.cfv)):
            if self.cfv[index].startswith(";"):
                positions.append(index)
        return positions
    
    
    # insert the function calls
    def functionCallInsertion(self):
        definitions = self.node["refDef"]  # get the function call list from the "refDef"
        func_list = []        # to store the function name of function calls
        position = self.scan4PossibleFuncCallPlace()  # get the possible postions for fucntion calss
        
        # parse the function call in "refDef" then store them in func_list
        for definition in definitions:
            func_name = definition[0]
            ret = definition[1].split(func_name)[0].strip()
            if ret == "void":
                ret = "#"
            else:
                ret ="#"+ret+" = "
            parameters = definition[1].split(func_name)[1].strip()
            para_list = parameters.split(",")
            para_content = ""
            for para in para_list:
                para_content += "#"+para+","
            para_content = para_content[:-1]
            func_list.append(ret+func_name+"("+para_content+")")
        
        # according the possible position, insert the function calls
        for func in func_list:
            index = random.randint(0,len(position)-1)   # randomly pick a possible position
            self.cfv.insert(position[index],func)
            for i in range(0,len(position)):
                if position[i]>=position[index]:
                    position[i]+=1
    
    # ======================= function call insertion ends =========================
    
    # get the cfv
    def getCFV(self):
        return self.cfv
