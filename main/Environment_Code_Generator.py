#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata


class CodeGenerator:
    
    
    
    def __init__(self,GrammarTree,nodeSet,index,vul_path,unique_number):
        
        # Definitions
    
        self.GrammarTree = GrammarTree # the grammar tree path
        self.typeTable = [    # refelction table
            ["short","char"],
            ["int"],
            ["unsigned int"],
            ["long","float"],
            ["double"]
        ]
        #'int', 'float', 'double', 'long', 'short', 'char', 'short', 'long', 'unsigned int', 'void'
        self.varPool = [
            [["New_Var"],["New_Var"]],
            [["New_Var"]],
            [["New_Var"]],
            [["New_Var"],["New_Var"]],
            [["New_Var"]]
        ]
        self.varTrack = {}  # variable track
        
        try:
             self.DOMtree=xml.dom.minidom.parse(self.GrammarTree)
        except BaseException:
             print("parsing error in ",self.GrammarTree)
        #DOMtree=xml.dom.minidom.parse(GrammarTree)
        self.GT = self.DOMtree.documentElement
        # get the root node
        self.root = self.GT.getElementsByTagName("root")[0]
        self.XMLoperator = self.GT.getElementsByTagName("operator")[0]
        
        self.vul_path = vul_path
        self.unique_number = unique_number
        
        self.nodeSet = nodeSet
        self.nodeIndex = index
        self.node = self.nodeSet[self.nodeIndex]
        self.node["cfv"] = self.addScopeIntoCFV(nodeSet[index]["cfv"])
        self.cfv = self.node["cfv"]
        
        self.insertCodeToCFV(self.node)
        self.assignVar(self.varTrack)
        self.node["cfv"] = self.assignment(self.cfv)
        
        
        
    
    # Switches 
    # Switch for the leave node type
    def switcherForNodeType(self,nodeType):

        switch = {
            "expression" : self.expressionNode,
            "function"   : self.functionNode,
            "default"    : lambda: print("Not a node type")
        }

        return switch.get(nodeType,"default")


    # Random Pick a var type for whole LNR expression
    def RandomPickLNRType(self,opt):

        switch = {
            "+" : 0,
            "-" : 0,
            "*" : 0,
            "/" : 0,
            "=" : 0,
            "default" : lambda: print("Not a operator type")
        }

        return switch.get(opt,"default")
    
    # Path related methods

    # Get the children nodes from target node
    def getChildrenNode(self,node):

        nodeList = []
        childList = node.childNodes
        for child in childList:
            if child.nodeName != "#text":
                nodeList.append(child)

        return nodeList


    # recursion method
    # find a leave node from the root
    def selectPath(self,node):
        if node.hasAttribute("child"): 
            # get the number of children node
            childNumber =  int(node.getAttribute("child"))
            # get the children from 'node'
            childList = self.getChildrenNode(node)
            # Randomly select the child node
            index = random.randint(0,childNumber-1)

            return self.selectPath(childList[index])
        # if the node doesn`t have the attribute 'child', that means the node is the leave node

        return node

    # choose a leave node from root
    def RandomPickPathFromGT(self,root):
        pathNode = root
        pathNode = self.selectPath(root)
        return pathNode

    # generate the expressions
    def generateExpression(self,num,scope):
        expressions = []
        for i in range(num):
            node = self.RandomPickPathFromGT(self.root)
            # print(node.nodeName)
            if node.hasAttribute("type"):
                nodeType = node.getAttribute("type")
                decision = self.switcherForNodeType(nodeType)
                expression = decision(node,scope)
                expressions.append(expression)
    #             print(expression)
        return expressions

    # insert code into the cfv
    def insertCodeToCFV(self,node):
        i = 0
        self.cfv = node["cfv"]
        while i<len(self.cfv):
            # it starts with a digit
            #if cfv[i][0].isdigit():
            if self.cfv[i][0]==';':
                expressions = self.generateExpression(1 ,self.cfv[i].split("-")[1])
                self.cfv[i] = expressions

            # function call
            #double  = WacomOpenTablet(#char,#char,#int)
            if self.cfv[i][0]=="#":
                line = self.cfv[i]
                ret = ""
                body = line
                if "=" in line:
                    #print(line)
                    ret = self.chooseVar(line.split("=")[0].strip()[1:],"1")
                    if ret == "void":
                        ret = ""
                    else:
                        ret += " = "
                    body = line.split("=")[1].strip()
                
                funcName = body.split("(")[0].strip("#")
                varStr = body.split("(")[1][:-1]
                body = funcName + "("
                for var in varStr.split(","):
                    #print(var)
                    if var == "#controller4unique":    #  unique path check
                        func_index = 0
                        for index in range(0,len(self.nodeSet)):
                            if self.nodeSet[index]["name"] == funcName:
                                func_index = index
                                break
                        #print(self.vul_path.index(func_index))
                        #print(self.vul_path.index(self.nodeIndex))
                        if self.nodeIndex in self.vul_path:
                            if self.vul_path.index(func_index) == self.vul_path.index(self.nodeIndex)+1:
                                body += "uni_para"+","
                            else:
                                not_unique_number = random.randint(0,1000)
                                while not_unique_number == self.unique_number:
                                    not_unique_number = random.randint(0,1000)
                                body += str(not_unique_number)+","
                        else:
                            not_unique_number = random.randint(0,1000)
                            while not_unique_number == self.unique_number:
                                not_unique_number = random.randint(0,1000)
                            body += str(not_unique_number)+","
                    else:
                        if var != "#void":
                            body += self.chooseVar(var[1:],"1")+","
                if body[-1]=="(":
                    self.cfv[i] = ret+body+");\n"
                else:
                    self.cfv[i] = ret+body[:-1]+");\n"
                #print(cfv[i])
                
            # return statement
            if "return" in self.cfv[i]:
                ret_var = self.chooseVar(node["full_definition"].split(node["name"])[0].strip(),"1")
                if ret_var == "void":
                    del self.cfv[i]
                    i-=1
                else:
                    self.cfv[i] = "return "+ret_var+";"
                    
                
            i+=1
        return True


    def findCommonScope(self,scopes):
        scopeList = scopes.split("/")
        common = scopeList[0].split("_")
        for item in scopeList:
            itemS = item.split("_")
            i = 0
            temp=[]
            while i< len(common) and i< len(itemS):
                if common[i] == itemS[i]:
                    temp.append(common[i])
                else:
                    break
                i+=1
            common = temp
        return common



    # add the assignment to the cfv for each variable
    def assignVar(self,track):
        for key in track.keys():
            common = self.findCommonScope(track[key])
            scope = ""
            for item in common:
                scope+=item +"_"
            scope = scope[:-1]
            # insert the assignment into cfv
            i = 0
            for i in range(len(self.cfv)):
                if self.cfv[i][0]=='{' and self.cfv[i].split("-")[1] == scope:
                    # can be impoved to sava computing resource
                    self.cfv[i] = self.cfv[i]+key+"/"

    # add the scope information into the cfv
    def addScopeIntoCFV(self,CFV):
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
            #if isinstance(cfv[i],int):
            if cfv[i]==';':
                postfix =""
                for j in range(deep):
                    postfix += str(scope[j])+"_" 
                #cfv[i] = str(cfv[i])+"-"+ postfix[:-1]
                cfv[i] = cfv[i]+"-"+ postfix[:-1]
            i=i+1
        #print(cfv)
        return cfv
    
    
    # Variable related methods

    # add the variable track in varTrack
    def addTrack(self,var,scope):
        if var not in self.varTrack.keys():
            self.varTrack[var] = scope
        else:
            self.varTrack[var] = self.varTrack[var]+ "/" + scope

    # create a variable
    def createVar(self,varType,index_i,index_j,scope):
        #print(varType+"_"+chr(97))
        for i in range(1,10000):
            if varType+"_"+str(i) not in self.varPool[index_i][index_j]:
                self.varPool[index_i][index_j].append(varType+"_"+str(i))
                var = varType+"_"+str(i)
                return var
        return "var_error"

    # choose a var with type parameter
    def chooseVar(self,varType,scope):
        index_i = 0
        index_j = 0
        var = ""
        varType = varType.strip("!#")
        if varType == "void":
            return "void"
        
        for i in range(0,len(self.typeTable)):
            if varType in self.typeTable[i]:
                index_i = i
                break
        for j in range(0,len(self.typeTable[index_i])):
            if varType == self.typeTable[i][j]:
                index_j = j
                break
        if varType == "unsigned int":
            varType = "unsigned_int"

        index = random.randint(0,len(self.varPool[index_i][index_j])-1)
        if self.varPool[index_i][index_j][index] == "New_Var":
            var = self.createVar(varType,index_i,index_j,scope)
        else:
            var = self.varPool[index_i][index_j][index]

        # add the var into var Track    
        self.addTrack(var,scope)   
        return var    

    
    # expression node handler

    # if the leave node is in expression type
    def expressionNode(self,node,scope):
        content = node.childNodes[0].data.strip().split("-")
        exp = node.childNodes[0].data.strip().split("-")

        index = self.findLNR(content)
        while index!=-1 :
            ret = self.generateLNR(index,content,exp,scope)
            exp = ret[1]
            content = ret[0]
            index = self.findLNR(content)

        return exp[0]

    # get the 'left var - operator - right var' mode key word`s index and return the index of the operator
    def findLNR(self,content):
        i = len(content)-1
        for i in range(len(content)-1,-1,-1):
            if content[i][0] == "$":
                return i
        return -1

    # get the 'left var - operator - right var' mode key words and turn it into expression
    def generateLNR(self,index,content,exp,scope):
        lv = ""
        rv = ""
        operator = ""

        opts = self.XMLoperator.childNodes
        for opt in opts:
            if opt.nodeName == content[index][1:]:
                operator = opt.childNodes[0].data.strip()

        # if the right var`s type is not decided 
        if content[index+1][0] != "%":
            expTypeList = self.typeTable[random.randint(self.RandomPickLNRType(operator),len(self.typeTable)-1)]
            expType = expTypeList[random.randint(0,len(expTypeList)-1)]
        else:
            expType = content[index+1].split("_")[1]

        # test code ||   --》》支线可选任务

        if content[index-1][0] =="%":
            lv = exp[index-1]
        else:
            lv = self.chooseVar(expType,scope)

        if content[index+1][0] == "%":
            rv = exp[index+1]
        else:
            rv = self.chooseVar(expType,scope)

        del exp[index-1:index+2]

        exp.insert(index-1,lv+" "+operator+" "+rv)

        del content[index-1:index+2]

        content.insert(index-1,"%r_"+expType)

        # test code ||

        ret = [content,exp]
        return ret
    
    # function related methods

    # generate a function 
    def generateFunction(self,content,scope):
        exp = ""
        for i in range(0,len(content)):
            if content[i][0] == "#":
                exp += self.chooseVar(content[i][1:],scope) + " "
            if content[i][0] == "%":
                exp += content[i][1:] + " "
            if content[i][0] == "$":
                opts = self.XMLoperator.childNodes
                for opt in opts:
                    if opt.nodeName == content[i][1:]:
                        exp += opt.childNodes[0].data.strip() + " "

        return exp

    # if the leave node is in function type
    def functionNode(self,node,scope):
        content = node.childNodes[0].data.strip().split("-")
        exp = self.generateFunction(content,scope)
        #print(content)
        return exp

    
    def assignment(self,cfv):
        location = []
        assignList = []
        for i in range(0,len(cfv)):
            if cfv[i][0]=="{" and len(cfv[i].split("-"))>2:
                if len(cfv[i].split("-")[2])>0:
                    location.append(i)
        temp = 0
        for index in location:
            assigns = cfv[index+temp].split("-")[2][:-1].split("/")
            #print(assigns)
            for var in assigns:
                varType = var.split("_")[0]
                if varType == "unsigned":
                    varType = "unsigned int"
                statement = varType+" "+var+" = 0"
                assignList.append(statement)
            cfv.insert(index+temp+1,assignList)
            temp+=1
        return cfv

    
    # get the result cfv
    def getCFV(self):
        return self.cfv
    
    # get the result node
    def getNode(self):
        return self.node
