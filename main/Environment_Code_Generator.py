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
    
    # init for the class and insert the environment code 
    # parameters:
    #    GrammarTree -> the GrammarTree xml file
    #    nodeSet -> all function nodes
    #    index -> the funtion index of all function nodes
    #    vul_path -> the vulnerability dataflow path
    #    unique_number -> the number is used to keep the dataflow unique
    def __init__(self,GrammarTree,nodeSet,index,vul_path,unique_number):
        
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
        self.varTrack = {}  # a record which stores all variables` positions 
        
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
        self.node["cfv"] = self.addScopeIntoCFV(nodeSet[index]["cfv"])  # add the scopes into the function node cfv
        self.cfv = self.node["cfv"]
        
        self.insertCodeToCFV(self.node)    # add the environment code into the cfv
        self.assignVar(self.varTrack)      # add the assignment for variables in varTrack
        self.node["cfv"] = self.assignment(self.cfv)
        
    # ==================== Switches ===========================
    
    # Switch for the leave node type
    # parameters:
    #    nodeType -> the node type
    def switcherForNodeType(self,nodeType):

        switch = {
            "expression" : self.expressionNode,   # the method to process a expression
            "function"   : self.functionNode,   # the method to process a function
            "default"    : lambda: print("Not a node type")
        }

        return switch.get(nodeType,"default")


    # Random Pick a var type for whole LNR expression
    # parameter:
    #    opt = the operator type
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
    
    # ==================== Switches ends ===========================
    
    # ==================== Path related methods =========================

    # Get the children nodes from target node
    # parameters:
    #    node -> the class node in the GrammarTree xml file
    def getChildrenNode(self,node):
        nodeList = []
        childList = node.childNodes
        for child in childList:
            if child.nodeName != "#text":
                nodeList.append(child)
        return nodeList


    # recursion method
    # find a leave node from the root
    # parameters:
    #    node -> the class node in the GrammarTree xml file
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
    # parameter:
    #    root -> the root node of the GrammarTree xml file
    def RandomPickPathFromGT(self,root):
        pathNode = root
        pathNode = self.selectPath(root)
        return pathNode

    # generate the expressions
    # parameters:
    #    num -> the number of code line 
    #    scope -> the current scope
    def generateExpression(self,num,scope):
        expressions = []
        for i in range(num):  # usually the num == 1, which means only need to insert one line of code
            node = self.RandomPickPathFromGT(self.root)   # randomly pick a leave node from the GrammarTree xml file to decide the expression
            if node.hasAttribute("type"):     # make sure it`s a leave node
                nodeType = node.getAttribute("type")  # get the type of the code need to be generated
                decision = self.switcherForNodeType(nodeType)  # get the generating method by the type
                expression = decision(node,scope)      # generate the code
                expressions.append(expression)
        return expressions

    # ==================== Path related methods ends =========================
    
    # ==================== insert code ==========================
    
    # insert code into the cfv
    # parameters:
    #    node -> the class node in the GrammarTree xml file
    def insertCodeToCFV(self,node):
        i = 0  # the index of current line in the node cfv
        self.cfv = node["cfv"]
        
        while i<len(self.cfv):
            
            # if find a ';' which means "need to insert code here"
            if self.cfv[i][0]==';':
                expressions = self.generateExpression(1 ,self.cfv[i].split("-")[1])  # generate code 
                self.cfv[i] = expressions

            # if find a "#" which means "need to finish the function call here"
            # e.g. ' #double  = WacomOpenTablet(#char,#char,#int) '
            # parse the function call string then fill the function call with variables from the var pool
            if self.cfv[i][0]=="#":
                line = self.cfv[i]
                ret = ""
                body = line
                if "=" in line:  # if the function call has ' return '
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
                for var in varStr.split(","):  # parse the parameter from the function call string
                    if var == "#controller4unique":    #  unique path check
                        func_index = 0
                        for index in range(0,len(self.nodeSet)):
                            if self.nodeSet[index]["name"] == funcName:
                                func_index = index
                                break
                        if self.nodeIndex in self.vul_path:  # if the function is in the dataflow
                            if self.vul_path.index(func_index) == self.vul_path.index(self.nodeIndex)+1: # if the function is next node to this node in dataflow
                                body += "uni_para"+","  # pass the uni_para to keep the dataflow unique
                            else:    # if the funtion is not the next node to this node
                                # randomly pick a number which doesn`t equal to unique number
                                not_unique_number = random.randint(0,1000)
                                while not_unique_number == self.unique_number:
                                    not_unique_number = random.randint(0,1000)
                                # pass the random number then the path cannot pass the unique number check which is around vulnerability
                                body += str(not_unique_number)+","
                        else:  # if the funtion is not in dataflow
                            # randomly pick a number which doesn`t equal to unique number
                            not_unique_number = random.randint(0,1000)
                            while not_unique_number == self.unique_number:
                                not_unique_number = random.randint(0,1000)
                            # pass the random number then the path cannot pass the unique number check which is around vulnerability
                            body += str(not_unique_number)+","
                    else:
                        if var != "#void":  # if the function doesn`t have parameters
                            body += self.chooseVar(var[1:],"1")+","
                if body[-1]=="(":
                    self.cfv[i] = ret+body+");\n"
                else:
                    self.cfv[i] = ret+body[:-1]+");\n"
                
            # return statement
            if "return" in self.cfv[i]:
                # according to this function node`s return type, choose a var for the return
                ret_var = self.chooseVar(node["full_definition"].split(node["name"])[0].strip(),"1")
                if ret_var == "void":
                    del self.cfv[i]
                    i-=1
                else:
                    self.cfv[i] = "return "+ret_var+";"
                    
                
            i+=1
        return True


    # according to the variable track, find the common scope for a variable
    # parameters:
    #    scopes -> the scopes where the variable has been used
    def findCommonScope(self,scopes):
        scopeList = scopes.split("/")  # get the scopes in list
        common = scopeList[0].split("_") 
        # compare with each scope to find the common scope
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
    # parameters:
    #    track -> the track records the positions where the variables have been used
    def assignVar(self,track):
        for key in track.keys():   # for each variables
            common = self.findCommonScope(track[key]) # find the common scope for the scopes
            scope = ""
            for item in common:
                scope+=item +"_"
            scope = scope[:-1]
            # insert the assignment into cfv
            i = 0
            for i in range(len(self.cfv)):
                if self.cfv[i][0]=='{' and self.cfv[i].split("-")[1] == scope:
                    self.cfv[i] = self.cfv[i]+key+"/"
                    break

    # add the scope information into the cfv
    # parameters:
    #    CFV -> the cfv
    def addScopeIntoCFV(self,CFV):
        cfv = CFV
        i=0
        scope = []
        deep = 0
        while i < len(cfv):
            if cfv[i]=="{":  # if find a '{'
                deep+=1    # the deepth of scope + 1
                scope.append(0)
                scope[deep-1] +=1
                postfix =""
                for j in range(deep):
                    postfix += str(scope[j])+"_" 
                cfv[i] = cfv[i]+"-"+ postfix[:-1] +"-"  # leave the scope mark 
                
            if cfv[i]=="}":  # if find a '{'
                deep-=1    # the deepth of scope -1
                
            if cfv[i]==';':   # if find a ';'
                postfix =""
                for j in range(deep):
                    postfix += str(scope[j])+"_" 
                cfv[i] = cfv[i]+"-"+ postfix[:-1]  # leave the scope mark 
            i=i+1
        return cfv
    
    # ==================== insert code ends ==========================
    
    # =================== Variable related methods =======================

    # record the scope where the variable has been used
    # parameter:
    #    var -> the variable
    #    scope -> the current scope
    def addTrack(self,var,scope):
        if var not in self.varTrack.keys(): # if the variable was not used before
            self.varTrack[var] = scope
        else:
            self.varTrack[var] = self.varTrack[var]+ "/" + scope

    # create a new variable then put it into var pool
    # parameters:
    #    varType -> the data type the variable
    #    index_i -> the first dimension of the var pool
    #    index_j -> the second dimension of the var pool
    #    scope -> the current scope
    def createVar(self,varType,index_i,index_j):
        # generate a new variable
        for i in range(1,10000):
            if varType+"_"+str(i) not in self.varPool[index_i][index_j]:
                self.varPool[index_i][index_j].append(varType+"_"+str(i))
                var = varType+"_"+str(i)
                return var
        return "var_error"

    # choose a var with type parameter
    # parameters:
    #    varType -> the data type the variable
    #    scope -> the current scope
    def chooseVar(self,varType,scope):
        index_i = 0
        index_j = 0
        var = ""
        varType = varType.strip("!#")
        # if the data type is 'void'
        if varType == "void":
            return "void"
        
        # find the index of data type
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

        # find a variable from the corresponding type variable pool
        index = random.randint(0,len(self.varPool[index_i][index_j])-1)
        if self.varPool[index_i][index_j][index] == "New_Var":  # if pick "New_Var"
            # generate a new variable with this data type
            var = self.createVar(varType,index_i,index_j)
        else:  # if pick a variable 
            var = self.varPool[index_i][index_j][index]

        # add the var into var Track    
        self.addTrack(var,scope)   
        
        return var    
 
    # =================== Variable related methods ends =======================
    
    # ================= expression node handler ======================

    # if the leave node is in expression type, generate an expression code
    # parameters:
    #    node -> the node which is read from the GrammarTree xml file
    #    scope -> the current scope
    def expressionNode(self,node,scope):
        content = node.childNodes[0].data.strip().split("-")  # parse the content 
        exp = node.childNodes[0].data.strip().split("-")

        index = self.findLNR(content)  # find the first LNR`s position
        while index!=-1 :    # find the LNR and generate it 
            ret = self.generateLNR(index,content,exp,scope) # generate the LNR
            exp = ret[1]
            content = ret[0]
            index = self.findLNR(content) # find the next LNR position

        return exp[0]

    # get the 'left var - operator - right var' mode key word`s index and return the index of the operator
    # parameters:
    #    content -> the content which is read from GrammarTree xml file
    def findLNR(self,content):
        # find a LNR`s operator position
        i = len(content)-1
        for i in range(len(content)-1,-1,-1):
            if content[i][0] == "$":
                return i
        return -1

    # get the 'left var - operator - right var' mode key words and turn it into expression
    # parameters:
    #    index -> the current index of char in the content
    #    content -> the content which is read from GrammarTree xml file
    #    exp -> the expression
    #    scope -> the current scope
    def generateLNR(self,index,content,exp,scope):
        lv = ""   # left variable
        rv = ""   # right variable
        operator = ""  # the operator between two variables

        # from the GrammarTree, read the operator
        opts = self.XMLoperator.childNodes  
        for opt in opts:
            if opt.nodeName == content[index][1:]:
                operator = opt.childNodes[0].data.strip()

        # if the right var`s type is not decided, decide the data type for the LNR
        if content[index+1][0] != "%":
            expTypeList = self.typeTable[random.randint(self.RandomPickLNRType(operator),len(self.typeTable)-1)]
            expType = expTypeList[random.randint(0,len(expTypeList)-1)]
        else:
            expType = content[index+1].split("_")[1]

        # test code || 
        
        if content[index-1][0] =="%":   # if the left variable is decided 
            lv = exp[index-1]       # keep the left variable 
        else:                   # if the lef variable is not decided
            lv = self.chooseVar(expType,scope)  # according to the operator, choose a variable and mark it with current scope

        if content[index+1][0] == "%":  # if the right variable is decided 
            rv = exp[index+1]       # keep the right variable 
        else:                   # if the right variable is not decided
            rv = self.chooseVar(expType,scope)  # according to the operator, choose a variable and mark it with current scope

        del exp[index-1:index+2]

        exp.insert(index-1,lv+" "+operator+" "+rv)  # insert the new LNR into expression

        del content[index-1:index+2]

        content.insert(index-1,"%r_"+expType)      # insert the new LNR string into the content 

        # test code || ends

        ret = [content,exp]
        return ret
    
    # ================= expression node handler ends ======================
    
    
    #  =================== function related methods ==========================

    # generate a function 
    # parameters:
    #    content -> the content which is read from the function node in GrammarTree xml file
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
    # parameters:
    #    node -> the function node in GrammarTree xml file
    #    scope -> the current scope
    def functionNode(self,node,scope):
        content = node.childNodes[0].data.strip().split("-")  # get the function node`s content from GrammarTree xml file
        exp = self.generateFunction(content,scope)         # generate the function call expression
        return exp

    #  =================== function related methods ends ==========================
    
    
    # add the asignments into the cfv
    # parameters:
    #    cfv -> the function node cfv
    def assignment(self,cfv):
        location = []
        assignList = []
        # get all claims from the cfv
        for i in range(0,len(cfv)):
            if cfv[i][0]=="{" and len(cfv[i].split("-"))>2:
                if len(cfv[i].split("-")[2])>0:
                    location.append(i)
        temp = 0
        # insert all the claims 
        for index in location:
            assigns = cfv[index+temp].split("-")[2][:-1].split("/")
            for var in assigns:
                varType = var.split("_")[0]
                if varType == "unsigned":  # if the type is 'unsigned', change it to 'unsigned int'
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
