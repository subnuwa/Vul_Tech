import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata
import copy


keyWords = ["if","while","for","switch","else","else if"]   # the statement key words 
ifWords = ["if","else","else if"]                   # the if related key words
loopers = ["for","while"]                         # the loop related key words
control_var_pool = []                            # the pool to store the variables
control_operators = [">","<"]                       # the operators which can be selected by if conditions     

# ================ Function Call Insertion ===================

# insert the function call, which is used to keep the dataflow works, into the vul path
# Parameter:
#    nodeSet -> all function nodes
#    vul_path -> the vulnerability path which is a list including the dataflow
#    unique_magic_number -> the unique magic number which is used to keep the dataflow unique
def insertFunctionCall(nodeSet,vul_path,unique_magic_number):
    for index in vul_path:
        for i in range(0,len(nodeSet[index]["cfv"])):
            if "Path" in nodeSet[index]["cfv"][i]:  # find the line which is marked by Vul_Marker
                func = nodeSet[index]["cfv"][i].split("/")[1]
                ind = int(nodeSet[index]["cfv"][i].split("/")[2])
                nodeSet[index]["cfv"][i] =  parseDefinition(nodeSet[ind]["full_definition"],func,unique_magic_number) # insert the function call
                break
            # delete the return statement in dataflow path
            if "return" in nodeSet[index]["cfv"][i]:
                nodeSet[index]["cfv"][i] = ";"
    
    return nodeSet

# parse the function definition which is formated by Vul_Marker
# Parameter:
#    definition -> the function definitiion string
#    name -> function name
#    unique -> the unique magic number which is used to keep the dataflow unique
def parseDefinition(definition,name,unique_magic_number):
    
    retType = definition.split(name)[0]       # get the return type
    params_str = definition.split(name)[1]     # get the parameter string
    params_types = [s.strip() for s in params_str.split(',')]  # get the parameter list
    
    # generate the function call line
    line = ""
    if retType!="void":
        line = "#"+retType+" = "
        
    line += name+"("
    for item in params_types:
        line+="#"+item+","
    line = line[:-1]+")"
    
    return line

# insert the environment function calls in the nodes which are in the vul path
# make sure the environment function calls are inserted after the function call in dataflow
# parameters:
#    nodeSet -> all function nodes
#    vul_path -> the node list which is in dataflow
#    node_index -> current node index
def insertEnvironmentFunctionCall(nodeSet,vul_path,node_index):
    mark_lable = ""
    # get the mark_lable 
    if node_index!=len(vul_path)-1:
        mark_lable = nodeSet[vul_path[node_index+1]]["name"]
    else:
        mark_lable = "Vul/KeyStatement"
    cfv = nodeSet[vul_path[node_index]]["cfv"]
    
    # find the start line for inserting the environment function call
    start_line = len(cfv)-1
    for i in range(0,len(cfv)):
        if mark_lable in cfv[i]:
            for j in range(i,len(cfv)):
                if cfv[j] == "}":
                    if j == len(cfv)-1:
                        start_line = j-1
                    else:
                        start_line = j
                    break
            break
            
    # get the defintions of environment function calls
    definitions = nodeSet[vul_path[node_index]]["refDef"]
    func_list = []
    
    # parse the definitions
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
        
    # scan the possible position for inserting the environment function calls
    position = scan4PossibleFuncCallPlace(cfv,start_line)
    
    # randomly pick a position in the list and insert the function call
    for func in func_list:
        index = random.randint(0,len(position)-1)
        cfv.insert(position[index],func)
        for i in range(0,len(position)):
            if position[i]>=position[index]:
                position[i]+=1
    
    return cfv
    
# scan the possible position for inserting the environment function calls
# parameters:
#    cfv -> the node cfv
#    start_line -> the start line which is used for inserting the function call
def scan4PossibleFuncCallPlace(cfv,start_line):
    positions = [len(cfv)-1]
    for index in range(start_line,len(cfv)):
        if self.cfv[index].startswith(";"):
            positions.append(index)
    return positions
        

# ================ End Function Call Insertion ===================

# ================ Controller Insertion ===================

# change the if blocks which is in front of dataflow if check to useless if block
# the if blocks which is in front of the dataflow will change the dataflow inputs 
# parameters:
#    cfv -> the function node cfv
def uselessIfInsertion(cfv):
    end_index = len(cfv)
    location = []
    # find the end position of the useless if block 
    for i in range(len(cfv)-1,-1,-1):
        if "controller4vul_" in cfv[i]:
            end_index = i
            break
            
    # change the if blocks which is in front of dataflow 
    for i in range(end_index-1,-1,-1):
        if cfv[i] in ifWords:
            cfv[i]="if(1)"
    
    return cfv

# locate the positions of if block which is in dataflow 
def locateController(cfv):
    record = []
    position = []
    for i in range(0,len(cfv)):
        if cfv[i] in keyWords:   # if find a key word
            record.append(cfv[i])  # record the key word
            position.append(i)    # record the key word`s position
        else:
            if cfv[i] == "}" and len(record)>0: # if find a '}'
                position.pop()   # pop a position
                record.pop()    # pop a record
                
        if "uni_para" in cfv[i]:    # if find the uni_para variable 
            record.append(cfv[i])  # record the variable 
            position.append(i)    # record the position
            
        if cfv[i].startswith("#") or "Vul/KeyStatement" == cfv[i]:  # if find the mark
            break     # end the locating
    return position


# randomly pick a operator form "<" and ">"
def randomlyPickOperator():
    return control_operators[random.randint(0,1)]

# randomly pick a ascii with length
# parameter:
#    length -> the length of ascii string
def randomlyPickASCII(length):
    string = ""
    for i in range(0,length):
        char = chr(random.randint(32,126))
        while char in ['"',"\\","'"]:   # delete the special ascii which has special meaning in C language
            char = chr(random.randint(32,126))
        string+= char
    return string

# choose a new variable for if block 
def chooseController(): 
    # controller_a
    prefix = "controller4vul_"
    for i in range(1,10000):
        if prefix+str(i) not in control_var_pool:
            control_var_pool.append(prefix+str(i))
            return prefix+str(i)
        
# insert the input checks into the cfv
# parameters:
#    cfv -> the function node cfv
#    controllerLocation -> the position which is need to be inserted key word statements
#    length_min -> the min of magic number length
#    length_max -> the max of magic number length
#    magic_number_list -> the if block status list
#    checksum_type -> the checksum type
#    checksum_div -> the checksum dividend
def insertController(cfv,controllerLocation,length_min,length_max,magic_number_list,checksum_type,checksum_div):
    temp = 0
    magic_number_temp = 0
    
    for location in controllerLocation:
        # if branch 
        if cfv["cfv"][location+temp] in ifWords:
            var = chooseController()      # choose a varibale for controller
            length = random.randint(length_min,length_max)  # randomly generate a length from length_min to length_max 
            # insert the varibale claim statement 
            definition = "char "+var+"["+str(length)+"];"
            cfv["cfv"].insert(location+temp,definition)
            temp+=1
            # insert the read statement 
            cfv["cfv"].insert(location+temp,"fgets("+str(var)+" ,"+str(length+1)+" ,stdin);")
            temp+=1
            
            # normal controller
            if magic_number_list[magic_number_temp] == 0: 
                operator = randomlyPickOperator()
                statement = "if( strcmp( " + var + ', "' + randomlyPickASCII(length) + '") '+operator+' 0)'
                
            else:  
                # magic number
                if magic_number_list[magic_number_temp] == 1:   
                    statement = "if( strcmp( " + var + ', "' + randomlyPickASCII(length) + '") == 0)'
                # checksum
                else:  
                    statement = swithForChecksum(checksum_type,var,checksum_div,length)
            # insert the if check
            cfv["cfv"][location+temp] = statement       
            magic_number_temp+=1
                 
        # looper - for & while - mark to make sure only loop once
        if cfv["cfv"][location+temp] in ["for","while"]:
            cfv["cfv"][location+temp] += "/1" 
            
    return cfv

# swith for the checksum type
def swithForChecksum(checksum_type,var,checksum_div,length):
    
    # more detail about the checksum type, please see Formalization
    switch = {
        1 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))",
        0 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))"
    }

    return switch.get(checksum_type,0)
    
    
    

            
# ================ End Controller Insertion ===================
