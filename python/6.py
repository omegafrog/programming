inputstr = input()
numlist = inputstr.split(" ")
numlist = list(map(int,numlist))
n1 = numlist[0]
n2 = numlist[1]
n3 = numlist[2]
n1list=[]
n2list=[]
n3list=[]
result=[]
for i in range(0,n1):
    n1list.append(input())
for i in range(0,n2):
    n2list.append(input())
for i in range(0, n3):
    n3list.append(input())

# print(n1list,n2list,n3list)
# numlist = list(map(int,numlist))
n1list = list(map(int,n1list))
n2list = list(map(int,n2list))
n3list = list(map(int,n3list))

for i in range(0,50000):
    if i in n1list and i in n2list and i in n3list:
        result.append(i)
    elif i in n1list and i in n2list:
        result.append(i)
    elif i in n1list and i in n3list:
        result.append(i)
    elif i in n2list and i in n3list:
        result.append(i)

print(len(result))
for word in result:
    print(word)
