import os
from xml.dom.minidom import parse
import xml.dom.minidom
import numpy as np
import random
import csv
import networkx as nx
import unicodedata

class CFV_Extractor:
    
    Basic_Types = ['int', 'float', 'double', 'long', 'short', 'char', 'unsigned int', 'void']
    No_void_Types = ['int', 'float', 'double', 'long', 'short', 'char', 'unsigned int']
    Str_Name = 'name'
    Str_Return_Type = 'return_type'
    Str_params_type = 'paramsType'
    
    # initialize for extractor
    def __init__(self,graph_path):
        self.DG = nx.read_gpickle(graph_path)
        self.DG = self.normDefinition(self.DG,self.Basic_Types,self.No_void_Types)
        self.DG = self.addRefDef(self.DG)
        circle =  nx.simple_cycles(self.DG)
        #print(list(circle))
        for item in circle:
            if [item[-1],item[0]] in self.DG.edges:
                self.DG.remove_edge(item[-1],item[0])
    

    # delete semicolons right after 'return,break,continue' 
    # cfv: a list
    def del_semicolons(self,cfv):
        cstatement = ['return', 'continue', 'break']
        str_mv = 'move'
        cfvlen = len(cfv)
        for i in range(cfvlen):
            if cfv[i] in cstatement:
                if cfv[i+1] == ';':
                    cfv[i+1] = str_mv
        return list(filter(lambda a: a != str_mv, cfv)) 
    
    
    # # add keyword 'refDef', definition of the reference functions
    # graph: no keyword 'refDef'
    # 'refDef': ['void init(void)', 'object * read(FILE *in)']
    def addRefDef(self,graph):
        nodesList = graph.nodes(data='attr_dict')
        for node1 in nodesList:
            reflist = []
            for ref in node1[1]['refids']:
                for node2 in nodesList:
                    if ref == node2[1]['id']:
                        # add keyword 'refDef', definition of the reference function

                        reflist.append((node2[1]['name'], node2[1]['full_definition']))
                        break
            node1[1]['refDef'] = reflist
        return graph
    
    # get statements that a function calls
    # funcDict: the dictionary of a function, normalized 'full_definition'
    # output:
    # a list including dictionaries
    # dictionary: function name, return type, parameter type list
    def getFuncCalls(funcDict):
        refDictList = []

        # tuple: ('read', 'object * read(FILE *in)')
        reflist = funcDict['refDef']
        if reflist == ['No_refs']:
            reflist = []

        for ref in reflist:
            refDict = {}
            # reference function name
            ref_name = ref[0]        
            # definition
            ref_def = ref[1]
            # return type
            ref_retType = ref_def.split(ref_name)[0].strip()        
            # parameters, one function can have multi-parameters
            params_str = ref_def.split(ref_name)[1].strip() # parameters
            params_types = [s.strip() for s in params_str.split(',')]  # a list
            #dictionary
            refDict[Str_Return_Type] = ref_retType
            refDict[Str_Name]=ref_name
            refDict[Str_params_type] = params_types

            refDictList.append(refDict)
        return refDictList
    
    
    # generate lines about function calls 
    # retType: return type
    # paramsType: parameters type, a list 
    # refName: function name
    # scope: scope of the parameters
    # output:
    #    added_lines: a dict containing all the lines
    def genRefLines(retType, paramsType, refName, scope):

        line = ''
        #retType = ref[Str_Return_Type]
        #paramsType = ref[Str_params_type]    
        str_params = ','.join(ps for ps in paramsType)
        #refName = ref[Str_Name]
        if retType == 'void':
            if str_params=='void':
                line = refName + '(' +')'
            else:
                paramsVar = [] # parameters variables
                for pt in paramsType:
                    paramsVar.append(chooseVar(pt, scope))
                str_paramsVar =  ','.join(pv for pv in paramsVar)
                line = refName + '('+ str_paramsVar +')'
        else:
            retVar = chooseVar(retType, scope) # return variable
            if str_params=='void':
                line = retVar + '=' + refName + '(' +')'
            else:
                paramsVar = [] # parameters variables
                for pt in paramsType:
                    paramsVar.append(chooseVar(pt, scope))
                str_paramsVar =  ','.join(pv for pv in paramsVar)
                line = retVar + '=' + refName + '('+ str_paramsVar +')'

        return line
    
    
    # delete variables in the parameter string;
    # if the parameter type is not the basic types, change it to the basic
    # params_list: 
    #   a list including the entire parameter string (['object *exp', 'object *env'])
    def normParams(self, params_list, Basic_Types, No_void_Types):
        # delete variables
        if params_list == ['']:
            return ["void"]
        for i in range(0,len(params_list)):
            if params_list[i] == '':
                del params_list[i]
        param_types = [pm.split()[0] for pm in params_list]
        if len(param_types) == 1:
            if not param_types[0] in Basic_Types:
                param_types[0] = Basic_Types[np.random.randint(0,len(Basic_Types))]
        else:
            for i in range(len(param_types)):
                if not param_types[i] in Basic_Types:
                    param_types[i] = No_void_Types[np.random.randint(0,len(No_void_Types))]
        return param_types
    
    
    # change the return type and the parameter type into basic types
    # delete variables, leave types
    # eg. before: 'name': 'make_symbol', 'full_definition': 'object* make_symbol(char *value)'
    #    after : 'name': 'make_symbol', 'full_definition': 'long int make_symbol char'
    def normDefinition(self, graph, Basic_Types, No_void_Types):
        nodeslist = graph.nodes(data='attr_dict')
        for node in nodeslist:
            funcName = node[1]['name']
            if not funcName == 'main':
                funcDef = node[1]['full_definition']
                funcRetType = funcDef.split(funcName)[0].strip()
                #normalize the return type
                if funcRetType not in Basic_Types:
                    funcRetType = Basic_Types[np.random.randint(0,len(Basic_Types))]
                # parameters, one function can have multi-parameters
                params_str = funcDef.split(funcName)[1].strip() # parameters
                params_str = params_str.replace('(','') #delete '()'
                params_str = params_str.replace(')','')
                params_list = [s.strip() for s in params_str.split(',')]  # a list
                norm_param = self.normParams(params_list, Basic_Types, No_void_Types)
                funcParams = ','.join(sf for sf in norm_param)
                norm_Def = ' '.join(sd for sd in [funcRetType, funcName, funcParams])
                node[1]['full_definition'] = norm_Def
        return graph
    
    
    # generate lines about function calls 
    # retType: return type
    # paramsType: parameters type, a list 
    # refName: function name
    # scope: scope of the parameters
    # output:
    #    added_lines: a dict containing all the lines
    def genRefLines(retType, paramsType, refName, scope):

        line = ''
        #retType = ref[Str_Return_Type]
        #paramsType = ref[Str_params_type]    
        str_params = ','.join(ps for ps in paramsType)
        #refName = ref[Str_Name]
        if retType == 'void':
            if str_params=='void':
                line = refName + '(' +')'
            else:
                paramsVar = [] # parameters variables
                for pt in paramsType:
                    paramsVar.append(chooseVar(pt, scope))
                str_paramsVar =  ','.join(pv for pv in paramsVar)
                line = refName + '('+ str_paramsVar +')'
        else:
            retVar = chooseVar(retType, scope) # return variable
            if str_params=='void':
                line = retVar + '=' + refName + '(' +')'
            else:
                paramsVar = [] # parameters variables
                for pt in paramsType:
                    paramsVar.append(chooseVar(pt, scope))
                str_paramsVar =  ','.join(pv for pv in paramsVar)
                line = retVar + '=' + refName + '('+ str_paramsVar +')'

        return line
    
    
    # Turn a Unicode string to plain ASCII, thanks to http://stackoverflow.com/a/518232/2809427\n",
    def unicodeToAscii(s):
        return ''.join(
            c for c in unicodedata.normalize('NFD', s)
            if unicodedata.category(c) != 'Mn'
        )
    
    
    ### substitue all ';' with number
    # ctrl_flow_vector: the nomalized control flow vector
    #def transSemicolon2digit(cfv):
        # substitue all the semicolon with 1
    #    order_semic = [num for num, key in enumerate(cfv) if key==';']

    #    for i in order_semic:
     #       cfv[i] = 1
        # add all the neighbouring 1
    #    clen = len(cfv)
    #    j = 0
    #    num_rm =0
    #    for i in range(clen):
    #        j = i - num_rm
    #        if isinstance(cfv[j], int):
     #           if (j+1) < len(cfv):
    #                if isinstance(cfv[j+1], int):
    #                    cfv[j] += cfv[j+1]
     #                   del cfv[j+1]
     #                   num_rm += 1
     #   return cfv
    
    ### insert function call lines into the control flow vector
    # DGfunc: a function(type of dictionary) from graph
    # output: cfv of the function which is added into function call lines
    def insertFuncLines(DGfunc):
        refDicts = getFuncCalls(DGfunc)
        #added_dicts = genRefFuncs(refDicts)

        cfv = DGfunc['cfv']
        #cfv = del_semicolons(cfv)
        # all the positions of semicolons
        #order_semicolon = [num for num, key in enumerate(cfv) if key==';']
        semicolon_list = []
        #scope = []
        for i in range(len(cfv)):
            if cfv[i][0]==';':
                scope=cfv[i].split('-')[1]
                semicolon_list.append((i, scope))

                #line_var = chooseVar(varType,scope)

        len_lines = len(refDicts) # number of added_lines
            # len_semi = len(order_semicolon) # number of semicolons in cfv
        # randomly choose some positions to insert the lines
        insert_pos = random.sample(semicolon_list, len_lines)
        insert_pos = sorted(insert_pos, key=lambda x:x[0]) # small to big
        #insert_pos.sort(reverse = False) # small to big

        for ref, pos in zip(refDicts,insert_pos):
            retType = ref[Str_Return_Type]
            paramsType = ref[Str_params_type]
            refName = ref[Str_Name]
            scope = pos[1]
            line = genRefLines(retType, paramsType, refName, scope)
            cfv[pos[0]] = line

    # insert the function call lines
    #     for pos,line in zip(insert_pos, added_dicts):
    #         cfv[pos] = line
        return cfv
    
    
    # return the cfv
    # need to add parameters to return the corresponding cfv
    def getCFV(self):
        DGfunc = self.DG.nodes(data='attr_dict')[0]
        cfv = DGfunc['cfv']
        if cfv == 'No_cfv':
            return "no cfv"
        DGfunc['cfv'] = self.del_semicolons(DGfunc['cfv'])
        return DGfunc['cfv']
    
    
    # return the cfv set which contains all cfv from the gpickle file
    def getAllCFV(self):
        all_nodes = self.DG.nodes(data='attr_dict')
        cfvSet = []
        for node in all_nodes:
            node[1]["cfv"] = self.del_semicolons(node[1]["cfv"])
            cfvSet.append(node[1])
        return cfvSet
    
    def getMatrix(self):
        return nx.to_numpy_matrix(self.DG)
        
    def getShortest(self):
        return nx.shortest_path(self.DG)
    
    def getAllPath(self,source,target):
        return nx.all_simple_paths(self.DG,source,target)