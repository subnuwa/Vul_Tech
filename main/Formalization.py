import os
from xml.dom.minidom import parse
import xml.dom.minidom

#======================== checksum claims and definition =======================

# switch for checksum
# parameters:
#    checkusm_type -> the checksum_type
def switchForChecksum(checksum_type):
    switch = {
        1 :  [remainder_check_claim,remainder_check_definition],
        0 :  [remainder_check_claim,remainder_check_definition]
    }

    return switch.get(checksum_type,0)

# the remainder_check -----------  type = 1
remainder_check_claim = "int remainder_check(char* parameter_1,int checksum_div,int length);\n\n"

remainder_check_definition = "\nint remainder_check(char* parameter_1,int checksum_div,int length)\n"
remainder_check_definition+= "{\n"
remainder_check_definition+= "   if(strlen(parameter_1)!=length)  return 0;\n"
remainder_check_definition+= "   int sum = 0;\n"
remainder_check_definition+= "   for(int i=0;i<length;i++)  sum = sum + parameter_1[i];\n"
remainder_check_definition+= "   if((sum % checksum_div==0))  return 1;\n"
remainder_check_definition+= "   else return 0;\n"
remainder_check_definition+= "}\n\n"

#======================== checksum claims and definition ends =======================

#======================== vulnerability track  ==================================

# get the track from program entrance to vulnerability
# parameters:
#    vul_path -> the vulnerability dataflow path
#    nodeSet -> all function calls
def getTrack(vul_path,nodeSet):
    track = []   # variable to store the whole track
    
    # the track to entre the vul_node
    for index in range(0,len(vul_path[:-1])):
        
        node_track = []   # variable to store each function node`s track
        target_line = len(nodeSet[vul_path[index]]["cfv"])-1  # varibale to record the end line for scanning track
         
        for i in range(0,len(nodeSet[vul_path[index]]["cfv"])):
            # if find a input check, put it into track
            if "controller4vul_" in nodeSet[vul_path[index]]["cfv"][i] and "if" in nodeSet[vul_path[index]]["cfv"][i]:
                node_track.append(nodeSet[vul_path[index]]["cfv"][i])
                
            # if find the function call which is calling to next node in vul path, put the function call in track then break
            if nodeSet[vul_path[index+1]]["name"] in nodeSet[vul_path[index]]["cfv"][i]:
                node_track.append("call " + nodeSet[vul_path[index+1]]["name"])
                break
                
        # put the function node`s track into the whole track record
        track.append([nodeSet[vul_path[index]]["name"],node_track])
    
    # the last node in the dataflow is the vul_node (which hides the vulnerability)
    node_track = []
    vul_node = nodeSet[vul_path[-1]]  # get the vul_node
    target_line = len(vul_node["cfv"])-1
    
    # get the vul_node`s track
    for i in range(0,len(vul_node["cfv"])):
        if "controller4vul_" in vul_node["cfv"][i] and "if" in vul_node["cfv"][i]:
            node_track.append(vul_node["cfv"][i])
        
        if "Vul/KeyStatement" in vul_node["cfv"][i]:
            break
            
    node_track.append("Vulnerability")
    
    # add the vul_node`s track into the whole track record
    track.append([vul_node["name"],node_track])
    
    return track

# get the vulnerability track and transform it to string content
# parameters:
#    vul_path -> the vulnerability path
#    nodeSet -> all function nodes
def getTrackContent(vul_path,nodeSet):
    track = getTrack(vul_path,nodeSet)  # get the vulnerability track
    content = ""
    
    content +="===================== vulnerability track  =============================\n\n"
    
    # write the track content
    for line in track:
        content += "The function name:  "+line[0]+"\n"
        for item in line[1]:
            content += "   "+ item + "\n"
        content+="\n"
        
    content += "\n===================== vulnerability track Ends ============================="    
    
    return content
    
#======================== vulnerability track ends ==============================



# delete the vulnerability marks in cfv
# parameters:
#    cfv -> the function node cfv
def cleanVulMark(cfv):
    # find the mark - 'Vul/KeyStatement' - then delete it
    for i in range(0,len(cfv)):   
        if cfv[i] == "Vul/KeyStatement":
            del cfv[i]
            break
    return cfv

# get all dependencies for this program
# parameters:
#    GrammarTree -> the GrammarTree xml file path
#    vul_node -> the selected vulnerability class node in VulLib xml file
def getIncludingList(GrammarTree,vul_node):
    including_list = ["stdio.h","stdlib.h"]  # the base dependencies
    
    # get the dependencies from the GrammarTree xml file
    DOMtree=xml.dom.minidom.parse(GrammarTree)
    GT = DOMtree.documentElement
    root = GT.getElementsByTagName("root")[0]    
    funcLibs = root.getElementsByTagName("functionLib")
    for funcLib in funcLibs:
        if funcLib.hasAttribute("header"):
            if funcLib.getAttribute("header") not in including_list:
                including_list.append(funcLib.getAttribute("header"))
     
    # according to the vulnerability requirements, get the dependencies from VulLib xml file
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

# get the header content for this program
# the header includes dependencies
# parameters:
#    GrammarTree -> the GrammarTree xml file path
#    vul_node -> the selected vulnerability class node in VulLib xml file
def header4program(GrammarTree,vul_node):
    header_content = ""
    
    including_list = getIncludingList(GrammarTree,vul_node)  # get the dependencies list
    
    # write the dependencies into content
    for includings in including_list:
        header_content += "#include<"+includings+">\n"
    
    header_content += "\n\n\n"
    
    return header_content
            
# transform the claims of function into string content
# parameters:
#    nodeSet -> all function nodes
#    index -> the function node index of all function nodes
def Definition2Code(nodeSet,index):
    definition = ""
    prefix = "parameter_"   # the prefix for the parameter
    
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
            if para == "controller4unique": # if the parameter is to keep the dataflow unique
                parameter = "uni_para"
                definition+="int "+parameter+","
            else:
                if para.strip() !="void":  # if the parameter is void
                    definition+=para+" "+parameter+","
            para_index+=1
        if definition[-1]=="(":
            definition +=")"
        else:
            definition = definition[:-1]+")"
        
    return definition
    
# transform the node cfv to string content
# parameters:
#    nodeSet -> all function nodes 
#    index -> the function node index
def Node2Code(nodeSet,index):
    cfv = nodeSet[index]["cfv"]
    retract = ""
    content = ""
    prefix = "parameter_"
    
    # code content
    for i in range(0,len(cfv)):
        if not isinstance(cfv[i], (list)):  # if find a not-list content
            if cfv[i].startswith("{"):  # if find a '{'
                cfv[i] = "{"
                content+=retract+"{"
                retract+="\t"       # fix the retract
            else:
                if cfv[i].startswith("}"):   # if find a '}'
                    if len(retract)>0:
                        retract=retract[:-1] # fix the retract
                    content+=retract+"}"
                else:
                    content+=retract+cfv[i]  # if find a statement, write it into content
        else:                   # if find a list
            for line in cfv[i]:
                content+=retract+line+";\n"
            content = content[:-1]
        content += '\n'
    
    claim = Definition2Code(nodeSet,index)
    content = claim + '\n' + content
    
  
    return content

