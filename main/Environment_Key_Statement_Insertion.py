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
    
    def __init__(self,node,loop_times_min,loop_times_max,magic_number_list,magic_number_length_min,magic_number_length_max,checksum_type,checksum_div,func_flag):
        
        self.loop_times_min = loop_times_min
        self.loop_times_max = loop_times_max
        
        self.magic_number_length_min = magic_number_length_min
        self.magic_number_length_max = magic_number_length_max
        
        self.magic_number_list = magic_number_list
        self.checksum_type = checksum_type
        self.checksum_div = checksum_div
        
        self.node = node
        self.cfv = self.node["cfv"]
        
        self.control_operators = [">","<"]
        
        self.keyWords = ["if","while","for","switch","else","else if","case"]
        
        self.control_var_pool = []
        self.looper_pool = []
        self.keyWordLocation = []

        self.locateKeyWord()
        self.statementInsertion()
        
        if func_flag ==1:
            #self.startPostion = self.scan4PossibleFuncCallPlace()
            self.functionCallInsertion()
            
        
        
        
        
    def chooseLooper(self):
        #  e.g. looper_as
        prefix = "looper_"
        for i in range(1,10000):
            if prefix+str(i) not in self.looper_pool:
                self.looper_pool.append(prefix+str(i))
                return prefix+str(i)
            
    def chooseController(self): 
        # controller_a
        #print(self.control_var_pool)
        prefix = "controller_"
        for i in range(1,10000):
            if prefix+str(i) not in self.control_var_pool:
                self.control_var_pool.append(prefix+str(i))
                return prefix+str(i)

    def randomlyPickOperator(self):
        return self.control_operators[random.randint(0,1)]

    def randomlyPickASCII(self,length):
        string = ""
        for i in range(0,length):
            char = chr(random.randint(32,126))
            while char in ['"',"\\","'"]:
                char = chr(random.randint(32,126))
            string+= char
        return string
    
    def locateKeyWord(self):
        for index in range(0,len(self.cfv)):
            if True in [self.cfv[index].startswith(x) for x in self.keyWords]:
                self.keyWordLocation.append(index)
                
                
    def statementInsertion(self):
        temp=0
        magic_index = 0
        for index in self.keyWordLocation:
            #  " FOR "
            if self.cfv[index+temp].startswith("for"):
                loop = random.randint(self.loop_times_min,self.loop_times_max)
                if '/' in self.cfv[index]:
                    loop = int(self.cfv[index].split("/")[1])
                var_looper = self.chooseLooper()

                self.cfv[index+temp] = "for(int "+var_looper+"=0; "+var_looper+"<"+str(loop)+";"+var_looper+"++)"
                #print(self.cfv[index+temp])
            
            #  " WHILE "
            if self.cfv[index+temp].startswith("while"):
                loop = loop = random.randint(self.loop_times_min,self.loop_times_max)
                if '/' in self.cfv[index]:
                    loop = int(self.cfv[index].split("/")[1])
                var_looper = self.chooseLooper()

                assign_statement = "int "+var_looper+" = 0;"
                self.cfv.insert(index+temp,assign_statement)
                temp+=1
                #print(assign_statement)

                self.cfv[index+temp] = "while("+var_looper+" < "+ str(loop) +")"
                #print(self.cfv[index+temp])

                step_statement = var_looper+" += 1;"
                self.cfv.insert(index+temp+2,step_statement)
                temp+=1
                #print(step_statement)
            
            #  " IF "-LIKE
            if self.cfv[index+temp] == "if" or self.cfv[index+temp] == "else if":
                var = self.chooseController()
                length = random.randint(self.magic_number_length_min,self.magic_number_length_max)
                
                if self.magic_number_list[magic_index] == 0:   #   controller without inputs
                    statement = "if(1)"
                else:
                    #print(var)
                    definition = "char "+var+"["+str(length+1)+"];"
                    self.cfv.insert(index+temp,definition)
                    temp+=1
                    self.cfv.insert(index+temp,"fgets("+str(var)+" ,"+str(length+1)+" ,stdin);")
                    #self.cfv.insert(index+temp,'scanf("%'+str(length+1)+'s", '+str(var)+");")
                    temp+=1
                    if self.magic_number_list[magic_index] == 1:  # normal input controller
                        operator = self.randomlyPickOperator()
                        statement = "if( strcmp( " + str(var) + ', "' + str(self.randomlyPickASCII(length)) + '") '+self.randomlyPickOperator()+' 0)'

                    else:
                        if self.magic_number_list[magic_index] == 2:  # magic number
                            statement = "if( strcmp( " + str(var) + ', "' + str(self.randomlyPickASCII(length)) + '") == 0)'
                        else:   #   checksum
                            statement = self.swithForChecksum(self.checksum_type,var,self.checksum_div,length)
                
                self.cfv[index+temp] = statement
                magic_index+=1
                #print(self.cfv[index+temp])

    def swithForChecksum(self,checksum_type,var,checksum_div,length):
        switch = {
            1 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))",
            0 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))"
        }

        return switch.get(checksum_type,0)
    
    def scan4PossibleFuncCallPlace(self):
        positions = [len(self.cfv)-1]
        for index in range(0,len(self.cfv)):
            if self.cfv[index].startswith(";"):
                positions.append(index)
                    
        return positions
    
    
    def functionCallInsertion(self):
        definitions = self.node["refDef"]
        func_list = []
        position = self.scan4PossibleFuncCallPlace()
        
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
        #print(func_list)
        
        for func in func_list:
            index = random.randint(0,len(position)-1)
            self.cfv.insert(position[index],func)
            for i in range(0,len(position)):
                if position[i]>=position[index]:
                    position[i]+=1
    
    
    def getCFV(self):
        return self.cfv
