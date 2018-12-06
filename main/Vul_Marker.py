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



def markDataflow(allCFV,weight,path):
    for i in range(0,len(path)):
        cur_weight = 0
        if weight[i] == 0:
            mark = ""
            if i != len(path)-1:
                mark = "Path/"+allCFV[path[i+1]]["name"]+"/"+str(path[i+1])
            else:
                mark = "Vul/KeyStatement"
            allCFV[path[i]]["cfv"].insert(1,mark)
        else:
            for j in range(0,len(allCFV[path[i]]["cfv"])):
                if "if" in allCFV[path[i]]["cfv"][j] or "else" in allCFV[path[i]]["cfv"][j]:
                    cur_weight += 1
                else:
                    if allCFV[path[i]]["cfv"][j] == "}":
                        if cur_weight > 0:
                            cur_weight = cur_weight - 1

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

def markDefinition(node):
    node["full_definition"] = "!!!"+node["full_definition"]
    return node

def changeDefinitions(nodeSet,vul_path):
    vul_path_func_name = []
    
    for vul in vul_path[1:]:
        nodeSet[vul]["full_definition"] += ",controller4unique"
        #print(nodeSet[vul]["full_definition"])
        vul_path_func_name.append(nodeSet[vul]["full_definition"].split(" ")[1])
    
    for index in range(0,len(nodeSet)):
        for i in range(0,len(nodeSet[index]["refDef"])):
            #print(nodeSet[index]["refDef"][i])
            if nodeSet[index]["refDef"][i][0] in vul_path_func_name:
                #print("found")
                #print(nodeSet[vul_path[vul_path_func_name.index(nodeSet[index]["refDef"][i][0])+1]]["full_definition"])
                temp = (nodeSet[index]["refDef"][i][0],nodeSet[vul_path[vul_path_func_name.index(nodeSet[index]["refDef"][i][0])+1]]["full_definition"])
                nodeSet[index]["refDef"][i] = temp
                #print(nodeSet[index]["refDef"][i])
            
    return nodeSet


