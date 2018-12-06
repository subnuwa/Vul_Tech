import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata
import copy


keyWords = ["if","while","for","switch","else","else if"]
ifWords = ["if","else","else if"]
loopers = ["for","while"]
control_var_pool = []
control_operators = [">","<"]

# ================ Function Call Insertion ===================

def insertFunctionCall(nodeSet,vul_path,unique_magic_number):
    for index in vul_path:
        for i in range(0,len(nodeSet[index]["cfv"])):
            if "Path" in nodeSet[index]["cfv"][i]:
                func = nodeSet[index]["cfv"][i].split("/")[1]
                ind = int(nodeSet[index]["cfv"][i].split("/")[2])
                nodeSet[index]["cfv"][i] =  parseDefinition(nodeSet[ind]["full_definition"],func,unique_magic_number)
                break
            # delete the return statement in dataflow path
            if "return" in nodeSet[index]["cfv"][i]:
                nodeSet[index]["cfv"][i] = ";"
    
    return nodeSet

def parseDefinition(definition,name,unique_magic_number):
    
    retType = definition.split(name)[0]
    params_str = definition.split(name)[1]
    params_types = [s.strip() for s in params_str.split(',')]
    
    #print(definition)
    #print(retType)
    #print(params_types)
    line = ""
    if retType!="void":
        line = "#"+retType+" = "
        
    line += name+"("
    for item in params_types:
        line+="#"+item+","
    line = line[:-1]+")"
    #print(line)
    return line

def insertEnvironmentFunctionCall(nodeSet,vul_path,node_index):
    mark_lable = ""
    if node_index!=len(vul_path)-1:
        mark_lable = nodeSet[vul_path[node_index+1]]["name"]
    else:
        mark_lable = "Vul/KeyStatement"
    cfv = nodeSet[vul_path[node_index]]["cfv"]
    
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
            
    definitions = nodeSet[vul_path[node_index]]["refDef"]
    func_list = []
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
        
    position = scan4PossibleFuncCallPlace(cfv,start_line)
    
    for func in func_list:
        index = random.randint(0,len(position)-1)
        cfv.insert(position[index],func)
        for i in range(0,len(position)):
            if position[i]>=position[index]:
                position[i]+=1
    
    return cfv
    
    
def scan4PossibleFuncCallPlace(cfv,start_line):
    positions = [len(cfv)-1]
    for index in range(start_line,len(cfv)):
        if self.cfv[index].startswith(";"):
            positions.append(index)
    return positions
        


# ================ End Function Call Insertion ===================

# ================ Controller Insertion ===================

def uselessIfInsertion(cfv):
    start_index = len(cfv)
    location = []
    for i in range(len(cfv)-1,-1,-1):
        if "controller4vul_" in cfv[i]:
            start_index = i
            break
            
    for i in range(start_index-1,-1,-1):
        if cfv[i] in ifWords:
            cfv[i]="if(1)"
    
    return cfv

def locateController(cfv):
    record = []
    position = []
    for i in range(0,len(cfv)):
        if cfv[i] in keyWords:
            record.append(cfv[i])
            #if cfv[i] in ifWords:
            position.append(i)
        else:
            if cfv[i] == "}" and len(record)>0:
                #if record[-1] in ifWords:
                position.pop()
                record.pop()
        if cfv[i].startswith("#") or "Vul" in cfv[i]:
            break
    return position


def randomlyPickOperator():
    return control_operators[random.randint(0,1)]

def randomlyPickASCII(length):
    string = ""
    for i in range(0,length):
        char = chr(random.randint(32,126))
        while char in ['"',"\\","'"]:
            char = chr(random.randint(32,126))
        string+= char
    return string

def chooseController(): 
    # controller_a
    prefix = "controller4vul_"
    for i in range(1,10000):
        if prefix+str(i) not in control_var_pool:
            control_var_pool.append(prefix+str(i))
            return prefix+str(i)
        
        
def insertController(cfv,controllerLocation,length_min,length_max,magic_number_list,checksum_type,checksum_div):
    temp = 0
    length = len(magic_number_list)
    magic_number_temp = 0
    for location in controllerLocation:
        # if branch 
        if cfv["cfv"][location+temp] in ifWords:
            var = chooseController()
            length = random.randint(length_min,length_max)
            definition = "char "+var+"["+str(length)+"];"
            cfv["cfv"].insert(location+temp,definition)
            temp+=1
            cfv["cfv"].insert(location+temp,'scanf("%'+str(length)+'s", '+var+");")
            temp+=1
            if magic_number_list[magic_number_temp] == 0: # normal controller
                operator = randomlyPickOperator()
                statement = "if( strcmp( " + var + ', "' + randomlyPickASCII(length) + '") '+operator+' 0)'
                
            else:  
                if magic_number_list[magic_number_temp] == 1:   # magic number
                    statement = "if( strcmp( " + var + ', "' + randomlyPickASCII(length) + '") == 0)'
                else:  # checksum
                    statement = swithForChecksum(checksum_type,var,checksum_div,length)
                    
            cfv["cfv"][location+temp] = statement       
            magic_number_temp+=1
                 

        # looper - for & while - mark to make sure only loop once
        if cfv["cfv"][location+temp] in ["for","while"]:
            cfv["cfv"][location+temp] += "/1" 
            #print(location+temp)
            #print(cfv["cfv"][location+temp])
            
    return cfv


def swithForChecksum(checksum_type,var,checksum_div,length):
    
    switch = {
        1 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))",
        0 :  "if(remainder_check("+var+","+str(checksum_div)+","+str(length)+"))"
    }

    return switch.get(checksum_type,0)
    
    
    

            
# ================ End Controller Insertion ===================
