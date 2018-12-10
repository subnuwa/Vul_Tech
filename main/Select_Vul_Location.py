#路径不唯一

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

class Select_Vul_Location:
    
    # init for the class
    # Parameters:
    #    extractor -> the instance of CFV_Extractor 
    #    input_parameter ->  dataflow_parameter_input_number 
    #    magic_number ->  dataflow_parameter_magic_number
    #    check_sum ->  dataflow_parameter_checksum
    def __init__(self,extractor,input_parameter,magic_number,check_sum):
        
        self.keyWords = ["if","while","for","else","else if"]   # the key words
        self.ifWords = ["if","else","else if"]             # if-related key words
        
        self.cfvWeight = []           # the nested if block weight of the all funtion nodes
        self.allPath = []            # all paths that from main node to other nodes
        self.possible_path = []        # the paths that meet the hyper parameters 
        
        self.extractor = extractor
        self.dataflow_input = input_parameter
        self.magic_number = magic_number
        self.check_sum = check_sum
        
        self.cfvSet = self.extractor.getAllCFV()    # get all nodes by the extractor
        self.cfvWeight = self.initWeight(self.cfvSet) # initialize the nested weight of all function nodes

        # store all paths that from main node to other nodes
        for target in range(1,len(self.cfvWeight)):
            self.allPath.append({target : list(self.extractor.getAllPath(0,target))})
            
        
        self.FindPossiblePath()                # get the possible paths (which meet the hype parameters) 
        self.selected_path = self.randomSelectPath()  # select a path from the possible path
        
        self.selected_weight = self.allocateWeight()       # get the nested if weights of vul path
        self.magic_number_weight = self.allocateMagicNumber() # get the magic number weights of vul path based on nested if weights
        self.check_sum_weight = self.allocateChecksum()     # get the checkusm weights of vul path based on checksum weights
            
        
    # count the nested if block of target cfv
    # Parameters:
    #    cfv -> the cfv of target node
    def countWeight(self,cfv):
        weight = 0
        cur_weight = 0
        record = []  # to record the key words
        for item in cfv:
            if item in self.keyWords:     # if find a key word
                record.append(item)     # add the key word into record
                if len([x for x in record if x in self.ifWords]) > weight: 
                    weight = len([x for x in record if x in self.ifWords]) # record the highest level of nested if block
            else:
                if item == "}":        # if find a '}'
                    if len(record) > 0:
                        record.pop()  # release a key word
        return weight
    
    # initialize the nested if block weight
    # Parameter:
    #    nodeSet -> all function nodes
    def initWeight(self,nodeSet):
        weight = []
        for item in nodeSet:
            weight.append(self.countWeight(item["cfv"]))
        return weight
    
    # find the possible paths which meet the hyper parameters
    def FindPossiblePath(self):
        for i in range(0,len(self.allPath)):
            for path in list(self.allPath[i].items())[0][1]:
                distance = 0
                for node in path:
                    distance += self.cfvWeight[node]
                if distance >= self.dataflow_input:     # if the sum of levels of nested if block is larger then the parameter dataflow_input
                    self.possible_path.append(copy.copy(path))  
    
    # allocate the magic number weight
    def allocateMagicNumber(self):
        weight = [0]*len(self.selected_path)
        stack = copy.copy(self.selected_weight)
        rest = int(math.ceil(sum(self.selected_weight)*self.magic_number))   # rest is used to record the random times
        
        while rest!=0:
            index = random.randint(0,len(self.selected_path)-1)         # randomly pick a if block in the if_list 
            if stack[index]!=0:                              # if the randomly picked if block is a normal input comparison
                stack[index]-=1
                weight[index]+=1                            # make the randomly picked if block become a magic number check
                rest-=1
        return weight
    
    # allocate the checksum weight
    def allocateChecksum(self):
        weight = [0]*len(self.selected_path)
        stack = copy.copy(self.magic_number_weight)
        rest = int(math.ceil(sum(self.magic_number_weight)*self.check_sum))  # rest is used to record the random times
        
        while rest!=0:
            index = random.randint(0,len(self.selected_path)-1)  # randomly pick a if block in the if_list 
            if stack[index]!=0:                        # if the randomly picked if block is a normal input comparison
                stack[index]-=1
                weight[index]+=1                      # make the randomly picked if block become a checksum
                rest-=1
        return weight
        
 
    
    # allocate the nested if block weight 
    def allocateWeight(self):
        weight = [0]*len(self.selected_path)
        stack = [self.cfvWeight[x] for x in self.selected_path]
        rest = self.dataflow_input                        # rest is used to record the random times

        while rest!=0:
            index = random.randint(0,len(self.selected_path)-1)   # randomly pick a if block in the if_list 
            if stack[index]!=0:                        # if the randomly picked if block is if 
                stack[index]-=1
                weight[index]+=1                      # make the randomly picked if block become a input check 
                rest-=1
        return weight
    
    #  randomly select a path from possible path               
    def randomSelectPath(self):
        return self.possible_path[random.randint(0,len(self.possible_path)-1)]
    
    # return the selected vul path
    def getSelectedPath(self):
        return self.selected_path
    
    # return the nest weight of vul path
    def getSelectedWeight(self):
        return self.selected_weight
    
    # the magic number weight of vul path
    def getMagicNumberWeight(self):
        return self.magic_number_weight
    
    # the checksum weight of vul path
    def getChecksumWeight(self):
        return self.check_sum_weight
    
    # test use only 
    def displayOutput(self):
        print("dataflow_input:")
        print(self.dataflow_input)
        print("path:")
        print(self.selected_path)
        print("cfvWeight:")
        print([self.cfvWeight[x] for x in self.selected_path])
        print("weight:")
        print(self.selected_weight)
        print("magic number weight:")
        print(self.magic_number_weight)
        print("checksum weight:")
        print(self.check_sum_weight)
        
     