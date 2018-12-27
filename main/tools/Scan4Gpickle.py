#!/usr/bin/env python
# coding: utf-8

# In[1]:


import os
import csv

import CFV_Extractor as CE


ifWords = ["if","else if"]
keyWords = ["if","while","for","switch","else","else if"]


def pre_process_filter(nodeSet):
    filter_list = ["case","?:","break","default","continue"]
    keys = ["switch"]
    for i in range(0,len(nodeSet)):
        index = 0
        while index<len(nodeSet[i]["cfv"]):
            if nodeSet[i]["cfv"][index] in filter_list:
                del nodeSet[i]["cfv"][index]
            elif nodeSet[i]["cfv"][index] in keys:
                nodeSet[i]["cfv"][index] = "if"
            else:
                index+=1
        
    return nodeSet

def getGpickleList(path):
    name_list = []
    for filename in os.listdir(path):
        if filename.endswith(".gpickle"):
            name_list.append(os.path.join(path,filename))
    return name_list

def scanIFinEnvironment(nodeSet):
    node_if_numbers = [0] *  len(nodeSet)
    for index in range(0,len(nodeSet)):
        cfv = nodeSet[index]["cfv"]
        for i in range(0,len(cfv)):
            if cfv[i] == "if" or cfv[i] == "else if":
                node_if_numbers[index] += 1
    return node_if_numbers

def scanInputDeepth(nodeSet):
    node_if_numbers = scanIFinEnvironment(nodeSet)
    high = 0
    #for i in range(0,len(node_if_numbers)):
    #    if node_if_numbers[i]>high:
    #        high = node_if_numbers[i]
    high = sum(node_if_numbers)
    return high

def countWeight(cfv):
        weight = 0
        cur_weight = 0
        record = []
        for item in cfv:
            if item in keyWords:
                record.append(item)
                if len([x for x in record if x in ifWords]) > weight:
                    weight = len([x for x in record if x in ifWords])
            else:
                if item == "}":
                    if len(record) > 0:
                        record.pop()          
        return weight
    
def initWeight(cfvSet):
        weight = []
        for item in cfvSet:
            weight.append(countWeight(item["cfv"]))
        return weight

def scanVulDeepth(nodeSet,extractor):
    cfvWeight = initWeight(nodeSet)

    allPath = [[[0]]]

    for target in range(1,len(cfvWeight)):
        allPath.append(list(extractor.getAllPath(0,target)))

    #print(allPath)
    #print(cfvWeight)

    high = 0
    for i in range(0,len(cfvWeight)):
        for path in allPath[i]:
            score = sum([cfvWeight[x] for x in path])
            #print(path)
            #print([cfvWeight[x] for x in path])
            #print(score)
            if score >high:
                high = score
                
    return high


gpickle_path = "..\gpickle"

gpickle_list = getGpickleList(gpickle_path)

#with open("gpickle.csv","w",newline="") as datacsv:
    #csvwriter = csv.writer(datacsv,dialect =("excel"))
    
    #header = ["file_path","input_deepth","vul_deepth"]
    
    #csvwriter.writerow(header)
    
    #datacsv.close()


temp = 4300
intervel = 300


print(len(gpickle_list))

while temp<len(gpickle_list):

    if temp+intervel>len(gpickle_list):
        intervel = len(gpickle_list) - 1 - temp
    
    with open("gpickle.csv","a",newline="") as datacsv:
        csvwriter = csv.writer(datacsv,dialect =("excel"))

        for i in range(temp,temp+intervel):

            extractor = CE.CFV_Extractor(gpickle_list[i])
            nodeSet = extractor.getAllCFV()
            nodeSet = pre_process_filter(nodeSet)
            input_deepth = scanInputDeepth(nodeSet)
            vul_deepth = scanVulDeepth(nodeSet,extractor)
            
            print(gpickle_list[i])

            line = [gpickle_list[i],str(input_deepth),str(vul_deepth)]
            csvwriter.writerow(line)

            del extractor

        datacsv.close()
        
    temp += intervel
    print("processed "+str(temp)+" lines")
    
    if temp == len(gpickle_list)-1:
        break



    

