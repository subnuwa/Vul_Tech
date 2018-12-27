import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata
import copy 
import math


# leave marks in the nodes which is in dataflow
# for the dataflow nodes except the last node in dataflow, insert the function call mark  e.g. Path/function_a/2
# for the node which is the last dataflow node, insert the vulnerability mark   e.g. Vul/KeyStatement
# parameters:
#    allCFV -> all function nodes
#    weight -> nested if block weights of vul path
#    path -> vul path
def markDataflow(allCFV,weight,path):
    for i in range(0,len(path)):
        cur_weight = 0
        if weight[i] == 0:  # if the nested if block weight equals 0, the function call or vulnerability mark will be inserted at the beginning 
            mark = ""
            if i != len(path)-1:
                mark = "Path/"+allCFV[path[i+1]]["name"]+"/"+str(path[i+1])
            else:
                mark = "Vul/KeyStatement"
            allCFV[path[i]]["cfv"].insert(1,mark)
        else:
            for j in range(0,len(allCFV[path[i]]["cfv"])):
                # -------- find the position to leave mark --------
                if "if" in allCFV[path[i]]["cfv"][j] or "else" in allCFV[path[i]]["cfv"][j]:  
                    cur_weight += 1
                else:
                    if allCFV[path[i]]["cfv"][j] == "}":
                        if cur_weight > 0:
                            cur_weight = cur_weight - 1
                # -------- find the position to leave mark ends --------

                if cur_weight == weight[i]:
                    if "{" in allCFV[path[i]]["cfv"][j+1]:
                        mark = ""
                        if i != len(path)-1:
                            mark = "Path/"+allCFV[path[i+1]]["name"]+"/"+str(path[i+1])
                        else:
                            mark = "Vul/KeyStatement"
                        allCFV[path[i]]["cfv"].insert(j+2,mark)
                    break
    return allCFV

# add an unique number parameter into the definition of functions which are in dataflow
# parameters:
#    nodeSet -> the function calls
#    vul_path -> vul path
def changeDefinitions(nodeSet,vul_path):
    vul_path_func_name = []
    
    # except the main node, add a new parameter into definition
    for vul in vul_path[1:]:
        nodeSet[vul]["full_definition"] += ",controller4unique"
        vul_path_func_name.append(nodeSet[vul]["name"])
    
    # add the unique parameter into the "refDef" of each function node
    for index in range(0,len(nodeSet)):
        for i in range(0,len(nodeSet[index]["refDef"])):
            if nodeSet[index]["refDef"][i][0] in vul_path_func_name:
                temp = (nodeSet[index]["refDef"][i][0],nodeSet[vul_path[vul_path_func_name.index(nodeSet[index]["refDef"][i][0])+1]]["full_definition"])
                nodeSet[index]["refDef"][i] = temp
            
    return nodeSet


