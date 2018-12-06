import os
from xml.dom.minidom import parse
import xml.dom.minidom

remainder_check_claim = "int remainder_check(char* parameter_1,int checksum_div,int length);\n\n"

remainder_check_definition = "\nint remainder_check(char* parameter_1,int checksum_div,int length)\n"
remainder_check_definition+= "{\n"
remainder_check_definition+= "   if(strlen(parameter_1)!=length)  return 0;\n"
remainder_check_definition+= "   int sum = 0;\n"
remainder_check_definition+= "   for(int i=0;i<length;i++)  sum = sum + parameter_1[i];\n"
remainder_check_definition+= "   if((sum % checksum_div==0))  return 1;\n"
remainder_check_definition+= "   else return 0;\n"
remainder_check_definition+= "}\n\n"

#===============================================================

def getTrack(vul_path,nodeSet):
    track = []
    
    # the track to entre the vul_node
    for index in range(0,len(vul_path[:-1])):
        
        node_track = []
        target_line = len(nodeSet[vul_path[index]]["cfv"])-1
        
        for i in range(0,len(nodeSet[vul_path[index]]["cfv"])):
            if "controller4vul_" in nodeSet[vul_path[index]]["cfv"][i] and "if" in nodeSet[vul_path[index]]["cfv"][i]:
                node_track.append(nodeSet[vul_path[index]]["cfv"][i])
                
            if nodeSet[vul_path[index+1]]["name"] in nodeSet[vul_path[index]]["cfv"][i]:
                node_track.append("call " + nodeSet[vul_path[index+1]]["name"])
                break
                
        track.append([nodeSet[vul_path[index]]["name"],node_track])
    
    # the track from vul_node to the key line
    node_track = []
    vul_node = nodeSet[vul_path[-1]]
    target_line = len(vul_node["cfv"])-1
    
    for i in range(0,len(vul_node["cfv"])):
        if "controller4vul_" in vul_node["cfv"][i] and "if" in vul_node["cfv"][i]:
            node_track.append(vul_node["cfv"][i])
        
        if "Vul/KeyStatement" in vul_node["cfv"][i]:
            break
            
    node_track.append("Vulnerability")
    track.append([vul_node["name"],node_track])
    
    return track


def getTrackContent(vul_path,nodeSet):
    track = getTrack(vul_path,nodeSet)
    content = ""
    
    content +="===================== vulnerability track  =============================\n\n"
    
    for line in track:
        content += "The function name:  "+line[0]+"\n"
        for item in line[1]:
            content += "   "+ item + "\n"
        content+="\n"
        
    content += "\n===================== vulnerability track Ends ============================="    
    
    return content
    



#===============================================================

def swithForChecksum(checksum_type):
    switch = {
        1 :  [remainder_check_claim,remainder_check_definition],
        0 :  [remainder_check_claim,remainder_check_definition]
    }

    return switch.get(checksum_type,0)


def cleanVulMark(cfv):
    for i in range(0,len(cfv)):
        if cfv[i] == "Vul/KeyStatement":
            del cfv[i]
            break
    return cfv


def getIncludingList(GrammarTree,vul_node):
    including_list = ["stdio.h","stdlib.h"]
    
    DOMtree=xml.dom.minidom.parse(GrammarTree)
    GT = DOMtree.documentElement
    root = GT.getElementsByTagName("root")[0]    
    funcLibs = root.getElementsByTagName("functionLib")
    for funcLib in funcLibs:
        if funcLib.hasAttribute("header"):
            if funcLib.getAttribute("header") not in including_list:
                including_list.append(funcLib.getAttribute("header"))
                
    if vul_node.hasAttribute("header"):
        vul_includings = vul_node.getAttribute("header")
        if "-" in vul_includings:   #  vul_lib has more than one includings
            for includes in vul_includings.split("-"):
                if includes not in including_list:
                    including_list.append(includes)
        else:   #  vul_lib only has one or no includings
            if vul_includings != "" and vul_includings not in including_list:
                including_list.append(vul_includings)
                
    return including_list

def header4program(GrammarTree,vul_node):
    header_content = ""
    
    including_list = getIncludingList(GrammarTree,vul_node)
    for includings in including_list:
        header_content += "#include<"+includings+">\n"
    
    header_content += "\n\n\n"
    
    return header_content
            

def Definition2Code(nodeSet,index):
    definition = ""
    prefix = "parameter_"
    
    if "(" in nodeSet[index]["full_definition"]:
        definition = nodeSet[index]["full_definition"]
    else:
        func_name =  nodeSet[index]["name"]
        ret = nodeSet[index]["full_definition"].split(func_name)[0]
        paras = nodeSet[index]["full_definition"].split(func_name)[1]
        para_list = paras.split(",")
        definition = ret+func_name+"("
        para_index = 1
        for para in para_list:
            parameter = prefix+str(para_index)
            if para == "controller4unique":
                parameter = "uni_para"
                definition+="int "+parameter+","
            else:
                if para.strip() !="void":
                    definition+=para+" "+parameter+","
            para_index+=1
        if definition[-1]=="(":
            definition +=")"
        else:
            definition = definition[:-1]+")"
        
    return definition
    
def Node2Code(nodeSet,index):
    cfv = nodeSet[index]["cfv"]
    retract = ""
    content = ""
    prefix = "parameter_"
    
    # code content
    for i in range(0,len(cfv)):
        if not isinstance(cfv[i], (list)):
            if cfv[i].startswith("{"):
                cfv[i] = "{"
                content+=retract+"{"
                retract+="\t"
            else:
                if cfv[i].startswith("}"):
                    if len(retract)>0:
                        retract=retract[:-1]
                    content+=retract+"}"
                else:
                    content+=retract+cfv[i]
        else:
            for line in cfv[i]:
                content+=retract+line+";\n"
            content = content[:-1]
        content += '\n'
    #print(cfv)
    
    # definfition
    if "(" in nodeSet[index]["full_definition"]:
        content = nodeSet[index]["full_definition"]+"\n"+content
    else:
        func_name =  nodeSet[index]["name"]
        ret = nodeSet[index]["full_definition"].split(func_name)[0]
        paras = nodeSet[index]["full_definition"].split(func_name)[1]
        para_list = paras.split(",")
        definition = ret+func_name+"("
        para_index = 1
        for para in para_list:
            parameter = prefix+str(para_index)
            if para == "controller4unique":
                parameter = "uni_para"
                definition+="int "+parameter+","
            else:
                if para.strip() !="void":
                    definition+=para+" "+parameter+","
            para_index+=1
        if definition[-1]=="(":
            definition +=")\n"
        else:
            definition = definition[:-1]+")\n"
        content = definition + content
  
    return content

