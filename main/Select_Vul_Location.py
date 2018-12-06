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
    
    def __init__(self,extractor,input_parameter,magic_number,check_sum):
        
        self.keyWords = ["if","while","for","switch","else","else if"]
        self.ifWords = ["if","else","else if"]
        self.dataflow_input = 0
        self.magic_number = 0
        self.cfvWeight = []
        self.allPath = []
        self.possible_path = []
        
        self.extractor = extractor
        self.dataflow_input = input_parameter
        self.magic_number = magic_number
        self.check_sum = check_sum
        
        self.cfvSet = self.extractor.getAllCFV()
        self.cfvWeight = self.initWeight(self.cfvSet)

        for target in range(1,len(self.cfvWeight)):
            self.allPath.append({target : list(self.extractor.getAllPath(0,target))})
            
        self.FindPossiblePath()
        self.selected_path = self.randomSelectPath()
        self.selected_weight = self.allocateWeight()
        
        self.magic_number_weight = self.allocateMagicNumber()
        self.check_sum_weight = self.allocateChecksum()
            
        
    def countWeight(self,cfv):
        weight = 0
        cur_weight = 0
        record = []
        for item in cfv:
            if item in self.keyWords:
                record.append(item)
                if len([x for x in record if x in self.ifWords]) > weight:
                    weight = len([x for x in record if x in self.ifWords])
            else:
                if item == "}":
                    if len(record) > 0:
                        record.pop()          
        return weight
    
    def initWeight(self,cfvSet):
        weight = []
        for item in cfvSet:
            weight.append(self.countWeight(item["cfv"]))
        return weight
    
    def FindPossiblePath(self):
        for i in range(0,len(self.allPath)):
            for path in list(self.allPath[i].items())[0][1]:
                distance = 0
                for node in path:
                    distance += self.cfvWeight[node]
                if distance >= self.dataflow_input:
                    self.possible_path.append(copy.copy(path))
                    
    def allocateMagicNumber(self):
        weight = [0]*len(self.selected_path)
        stack = copy.copy(self.selected_weight)
        rest = int(math.ceil(sum(self.selected_weight)*self.magic_number))
        
        while rest!=0:
            index = random.randint(0,len(self.selected_path)-1)
            if stack[index]!=0:
                stack[index]-=1
                weight[index]+=1
                rest-=1
        return weight
    
    def allocateChecksum(self):
        weight = [0]*len(self.selected_path)
        stack = copy.copy(self.magic_number_weight)
        rest = int(math.ceil(sum(self.magic_number_weight)*self.check_sum))
        
        while rest!=0:
            index = random.randint(0,len(self.selected_path)-1)
            if stack[index]!=0:
                stack[index]-=1
                weight[index]+=1
                rest-=1
        return weight
        
                    
    def randomSelectPath(self):
        return self.possible_path[random.randint(0,len(self.possible_path)-1)]
    
    def allocateWeight(self):
        weight = [0]*len(self.selected_path)
        stack = [self.cfvWeight[x] for x in self.selected_path]
        rest = self.dataflow_input

        while rest!=0:
            index = random.randint(0,len(self.selected_path)-1)
            if stack[index]!=0:
                stack[index]-=1
                weight[index]+=1
                rest-=1
        return weight
    
    def getSelectedPath(self):
        return self.selected_path
    
    def getSelectedWeight(self):
        return self.selected_weight
    
    def getMagicNumberWeight(self):
        return self.magic_number_weight
    
    def getChecksumWeight(self):
        return self.check_sum_weight
    
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
        
     