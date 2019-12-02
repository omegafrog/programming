import os

f=open('imagenetObjectname_and_RealName_table.txt',mode='r')
while True:
    line=f.readline()
    if not line: break
    spline=line.split('\t')
    print(spline)
    before=spline[0]
    after=spline[1]
    a={}
    a[before]=after

beforelist=list(a.key)
afterlist=list(a.value)

for root, subdirs, files in os.walk('./'):
    for subdir in subdirs:
        if subdir in beforelist:
            os.rename(str(subdir),str(a.subdir.value))
        else:
            continue

        
