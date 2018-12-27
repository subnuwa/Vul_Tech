import os
import sys

path = r"..\c_source"

c_files = []
for root, dirs,files in os.walk(path):
    for file in files:
        if file.endswith(".c"):
            c_files.append(os.path.join(path,file))
            print(os.path.join(path,file))


for target in c_files:
    command = "gcc "+target+" -o "+"../binary/"+target[:-2] +" -lm 2>&1"
    result = os.popen(command)
    res = result.read()
    print(target)
    print(res)
    print("=========================")


