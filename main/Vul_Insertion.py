import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata
import copy


def addScopeIntoCFV(CFV):
    cfv = CFV
    i=0
    scope = []
    deep = 0
    while i < len(cfv):
        if cfv[i]=="{":
            deep+=1
            scope.append(0)
            scope[deep-1] +=1
            postfix =""
            for j in range(deep):
                postfix += str(scope[j])+"_" 
            cfv[i] = cfv[i]+"-"+ postfix[:-1] +"-"
        if cfv[i]=="}":
            deep-=1
        if cfv[i]==';':
            postfix =""
            for j in range(deep):
                postfix += str(scope[j])+"_" 
            #cfv[i] = str(cfv[i])+"-"+ postfix[:-1]
            cfv[i] = cfv[i]+"-"+ postfix[:-1]
        i=i+1
    return cfv

def getChildrenNode(node):
    nodeList = []
    childList = node.childNodes
    for child in childList:
        if child.nodeName != "#text":
            nodeList.append(child)
    
    return nodeList

def getAllScope(cfv):
    allScope = []
    for item in cfv:
        line = item.split('-')
        if len(line)>1:
            if line[1] not in allScope:
                allScope.append(line[1])
    return allScope

def findParentScope(targetScope):
    parentScope = []
    scope = targetScope
    while(scope!="1"):
        parentScope.append(scope)
        scope = findLastScope(scope)
    parentScope.append(scope)
    return parentScope
        
    
def findSubScope(targetScope,scopes):
    subScope = []
    for item in scopes:
        if item.startswith(targetScope):
            subScope.append(item)
    return subScope

def randomPickScope(scopes):
    return scopes[random.randint(0,len(scopes)-1)]

def findKeyWordByScope(scope):
    if scope == "1":
        return "main"
    else:
        for index in range(0,len(cfv)):
            if cfv[index][2:].startswith(scope):
                cfv.insert(index+1,vul_track[i]["statement"])
                return cfv[index-1]
    return "no result"

def findLastScope(scope):
    if scope == "1":
        return "1"
    else:
        return scope[:-2]
    
def findScopeByIndex(cfv,index):
    scope = "1"
    for i in range(index,-1,-1):
        if cfv[i][0] == "{":
            scope = cfv[i].split("-")[1]
            break
    return scope


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



def getVulDefinition(vul_node):
    vul_definition = []
    mark = "Vul/KeyStatement"
    index = 0
    for item in getChildrenNode(vul_node):
        if item.nodeName=="define":
            for line in getChildrenNode(item):
                vul_definition.append(line.childNodes[0].data.strip())
                
    return vul_definition

def getVulStatement(vul_node):
    vul_statement = []
    mark = "Vul/KeyStatement"
    index = 0
    for item in getChildrenNode(vul_node):
        if item.nodeName=="statements":
            for line in getChildrenNode(item):
                key = ""
                if line.hasAttribute("key"):
                    key="###"
                    key_index = len(vul_statement)
                vul_statement.append(key+line.childNodes[0].data.strip())
                
    return vul_statement,key_index

def getVulTrack(CFV,vul_statement,key_index):
    cfv = copy.copy(CFV)
    cfv = addScopeIntoCFV(cfv)
    mark = "Vul/KeyStatement"
    targetScope = findScopeByIndex(cfv,cfv.index(mark))
    pre_statement_scopes = findParentScope(targetScope)
    post_statement_scopes = findSubScope(targetScope,getAllScope(cfv))
    
    
    curScope = "1"
    vul_track = []
    for i in range(0,key_index):
        if i==0:
            curScope = randomPickScope(pre_statement_scopes)
        else:
            curScope = randomPickScope(findSubScope(curScope,pre_statement_scopes))
        temp = {"statement":vul_statement[i],"scope":curScope}
        vul_track.append(temp)

    for i in range(key_index+1,len(vul_statement)):
        if i == len(vul_statement)-1:
            curScope = randomPickScope(post_statement_scopes)
        else:
            curScope = randomPickScope(findSubScope(curScope,pre_statement_scopes))
        temp = {"statement":vul_statement[i],"scope":curScope}
        vul_track.append(temp)

    vul_track.insert(key_index,{"statement":vul_statement[key_index],"scope":targetScope})
    return vul_track

    
def insertStatementByTrack(vul_track,CFV,unique_magic_number):
    cfv = copy.copy(CFV)
    cfv = addScopeIntoCFV(cfv)
    for i in range(len(vul_track)-1,-1,-1):
        for index in range(0,len(cfv)):
            if cfv[index][2:].startswith(vul_track[i]["scope"]):
                cfv.insert(index+1,vul_track[i]["statement"]+";")
                break
    cfv = cleanScopes(cfv)
    cfv = insertUniqueCheck(cfv,unique_magic_number)
    cfv = cleanKeyStatement(cfv)
    return cfv

def cleanScopes(cfv):
    for i in range(0,len(cfv)):
        if cfv[i].startswith("{") or cfv[i].startswith(";"):
            cfv[i] = cfv[i][0]
    return cfv
    
def insertUniqueCheck(cfv,unique_magic_number):
    index = 0
    for i in range(0,len(cfv)):
        if cfv[i].startswith("###"):
            index = i
            break
            
    cfv.insert(index,"if(uni_para == "+str(unique_magic_number)+")")
    cfv.insert(index+1,"{")
    cfv.insert(index+3,"}")
    return cfv
    
def insertDefinitions(cfv,definitions):
    index = 1
    for definition in definitions:
        cfv.insert(index,definition+";")
        index+=1
    return cfv
    
def cleanKeyStatement(cfv):
    index = 0
    for i in range(0,len(cfv)):
        if cfv[i].startswith("###"):
            cfv[i] = cfv[i][3:]
            break
    return cfv
           
