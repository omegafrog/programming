# inputnum = input()
inputnum = 5
# inputstr = input()
inputstr = "4 1 2 5 3"
# inputM = input()
inputM=5
# inputstrM = input()
inputstrM="1 3 7 9 5"
inputlist = inputstr.split(" ")
inputlist = list(map(int, inputlist))

inputlistM = inputstrM.split(" ")
inputlistM = list(map(int, inputlistM))

for i in inputlistM:
    if i in inputlist:
        print(1)
    else:
        print(0)