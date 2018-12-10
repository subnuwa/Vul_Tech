import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata
import copy

# add the scope mark into the cfv
# parameter:
#    CFV -> the function node cfv
def addScopeIntoCFV(CFV):
    cfv = CFV
    i=0
    scope = []
    deep = 0
    while i < len(cfv):
        if cfv[i]=="{":   # if find a '{'
            deep+=1    # deepth + 1
            scope.append(0)
            scope[deep-1] +=1
            postfix =""
            for j in range(deep):
                postfix += str(scope[j])+"_" 
            cfv[i] = cfv[i]+"-"+ postfix[:-1] +"-"  # add the scope mark 
            
        if cfv[i]=="}":  # if find a '}'
            deep-=1    #  deepth -1
            
        if cfv[i]==';':   # if find a ';'
            postfix =""
            for j in range(deep):
                postfix += str(scope[j])+"_" 
            cfv[i] = cfv[i]+"-"+ postfix[:-1]  # add the scope mark 
        i=i+1
    return cfv

# get the children nodes from targeted node
# parameters:
#    node -> the targeted node
def getChildrenNode(node):
    nodeList = []
    childList = node.childNodes
    for child in childList:
        if child.nodeName != "#text":
            nodeList.append(child)
    
    return nodeList

# get all scopes name
# parameter:
#    cfv -> the function node cfv
def getAllScope(cfv):
    allScope = []
    for item in cfv:
        line = item.split('-')
        if len(line)>1:
            if line[1] not in allScope:
                allScope.append(line[1])
    return allScope

# find the parent list of targeted scope
# parameter:
#    targetScope -> targeted scope
def findParentScope(targetScope):
    parentScope = []
    scope = targetScope
    while(scope!="1"):
        parentScope.append(scope)
        scope = findLastScope(scope)
    parentScope.append(scope)
    return parentScope
        
# find the children of targeted scope in scope list
# parameter:
#    targetScope -> targeted scope
#    scopes -> scope list
def findSubScope(targetScope,scopes):
    subScope = []
    for item in scopes:
        if item.startswith(targetScope):
            subScope.append(item)
    return subScope

# randomly pick a scope from the list
# parameter:
#    scopes -> scope list
def randomPickScope(scopes):
    return scopes[random.randint(0,len(scopes)-1)]

# find the last scope of targeted scope
# parameter:
#    scope -> targeted scope
def findLastScope(scope):
    if scope == "1":
        return "1"
    else:
        return scope[:-2]
    
# find the scope of line at index position
# parameter:
#    cfv -> the function node cfv
#    index -> the index of line in cfv
def findScopeByIndex(cfv,index):
    scope = "1"
    for i in range(index,-1,-1):
        if cfv[i][0] == "{":
            scope = cfv[i].split("-")[1]
            break
    return scope


# get the targeted vulnerability node in xml file
# parameters:
#    vul_id -> the vulnerability class name in xml file
#    VulLib -> the xml file path
def getVulNode(vul_id,VulLib):
    try:
        DOMtree=xml.dom.minidom.parse(VulLib)
    except BaseException:
        print("parsing error in ",VulLib)

    vulLib = DOMtree.documentElement
    root = vulLib.getElementsByTagName("root")[0]
    vul = root

    for item in getChildrenNode(root):
        if item.hasAttribute("id"):
            if item.getAttribute("id") == vul_id:
                vul = item
                
    return vul


# get the vulnerability variable claims from the xml node
# parameters:
#    vul_node -> the vulnerability node in xml file
def getVulDefinition(vul_node):
    vul_definition = []
    index = 0
    for item in getChildrenNode(vul_node):
        if item.nodeName=="define":
            for line in getChildrenNode(item):
                vul_definition.append(line.childNodes[0].data.strip())
                
    return vul_definition

# get the vulnerability statements from the xml node
# parameters:
#    vul_node -> the vulnerability node in xml file
def getVulStatement(vul_node):
    vul_statement = []
    index = 0
    for item in getChildrenNode(vul_node):
        if item.nodeName=="statements":
            for line in getChildrenNode(item):
                key = ""
                if line.hasAttribute("key"):  # add a special mark in the statements` key line
                    key="###"
                    key_index = len(vul_statement)
                vul_statement.append(key+line.childNodes[0].data.strip())
                
    return vul_statement,key_index

# get the vulnerability track from the cfv
# parameters:
#    CFV -> the function node cfv
#    vul_statement -> the vulnerability statements 
#    key_index -> the key line index in the vulnerability statements
def getVulTrack(CFV,vul_statement,key_index):
    cfv = copy.copy(CFV)
    cfv = addScopeIntoCFV(cfv) # add the scopes into the whole cfv
    mark = "Vul/KeyStatement"  # the vulnerability mark
    targetScope = findScopeByIndex(cfv,cfv.index(mark))  # get the scope of mark line
    pre_statement_scopes = findParentScope(targetScope)  # find the parent scopes (the statements before key line can be inserted at these)
    post_statement_scopes = findSubScope(targetScope,getAllScope(cfv))  # find the child scopes (the statements after key line can be inserted at these)
    
    curScope = "1"  # initialize the current scope
    vul_track = []  # the vul track
    
    # record the statements before key line
    for i in range(0,key_index):  
        if i==0:
            curScope = randomPickScope(pre_statement_scopes)
        else:
            curScope = randomPickScope(findSubScope(curScope,pre_statement_scopes))
        temp = {"statement":vul_statement[i],"scope":curScope}
        vul_track.append(temp)

    # record the key line
    vul_track.insert(key_index,{"statement":vul_statement[key_index],"scope":targetScope})
        
    # record the statements after key line
    for i in range(key_index+1,len(vul_statement)):
        if i == len(vul_statement)-1:
            curScope = randomPickScope(post_statement_scopes)
        else:
            curScope = randomPickScope(findSubScope(curScope,pre_statement_scopes))
        temp = {"statement":vul_statement[i],"scope":curScope}
        vul_track.append(temp)
        
    return vul_track

# insert the vulnerability statements by the vul_track
# parameter:
#    vul_track -> the vulnerability track which contains the vulnerability statements and the position of each statement at
#    CFV -> the function node
#    unique_magic_number -> the unique magic number which is used to keep the dataflow unique
def insertStatementByTrack(vul_track,CFV,unique_magic_number):
    cfv = copy.copy(CFV)
    cfv = addScopeIntoCFV(cfv) # add the scopes into the cfv
    
    #insert the vulnerability statements via vul track
    for i in range(len(vul_track)-1,-1,-1):
        for index in range(0,len(cfv)):
            if cfv[index][2:].startswith(vul_track[i]["scope"]):
                cfv.insert(index+1,vul_track[i]["statement"]+";")
                break
  
    cfv = cleanScopes(cfv)   # delete the scope marks 
    cfv = insertUniqueCheck(cfv,unique_magic_number) # insert the unique check around key line
    cfv = cleanKeyStatement(cfv)  # clean the key statement mark 
    return cfv

# delete the scopes in the cfv
# 
def cleanScopes(cfv):
    for i in range(0,len(cfv)):
        if cfv[i].startswith("{") or cfv[i].startswith(";"):
            cfv[i] = cfv[i][0]
    return cfv
    
# insert the unique check around the vulnerability key line
# parameters:
#    cfv -> the function node cfv
#    unique_magic_number -> the unique number which is used to keep the dataflow unique
def insertUniqueCheck(cfv,unique_magic_number):
    index = 0
    # find the vulnerability key line
    for i in range(0,len(cfv)):
        if cfv[i].startswith("###"):
            index = i
            break
            
    # insert the unique path check
    cfv.insert(index,"if(uni_para == "+str(unique_magic_number)+")")
    cfv.insert(index+1,"{")
    cfv.insert(index+3,"}")
    return cfv
    
# insert the claim of variables which are used in vulnerability statements
# parameters:
#    cfv -> the function node
#    definitions -> the claims of variable
def insertDefinitions(cfv,definitions):
    index = 1
    for definition in definitions:
        cfv.insert(index,definition+";")
        index+=1
    return cfv
    
# find the vulnerability key statement then delete the key-line mark
# parameters:
#    cfv -> the function node cfv
def cleanKeyStatement(cfv):
    index = 0
    for i in range(0,len(cfv)):
        if cfv[i].startswith("###"):
            cfv[i] = cfv[i][3:]
            break
    return cfv
           
