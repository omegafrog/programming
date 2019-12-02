lenofinput = int(input())
#lenofinput = 8
inputstr = input()
#inputstr="2 4 5 1 7 6 3 8"

numlist = inputstr.split(" ")
numlist = list(map(int,numlist))

checklist = [0]*lenofinput

resultlist = []


def foo(start,numlist,checklist):
    outputlist = []
    next = numlist[start]
    outputlist.append(start+1)
    checklist[start]=1
    outputlist.append(next)
    checklist[next-1]=1
    while(numlist[next-1]!=start+1):
        next = numlist[next-1]
        outputlist.append(next)
        checklist[next-1]=1
    if(outputlist[len(outputlist)-1]!=start+1):
        outputlist.append(start+1)
    return outputlist

i=0
while(i<lenofinput):
    if(checklist[i]==0):
        resultlist.append(foo(i,numlist,checklist))
    i+=1

print(len(resultlist))
for a in range(0, len(resultlist)):
    for i in range(0,len(resultlist[a])-1):
        print(resultlist[a][i],end=" ")
    if(a==len(resultlist)-1):
        print(resultlist[a][-1],end = "")
    else:
        print(resultlist[a][-1])
    
