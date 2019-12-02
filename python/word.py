a =set()
inputstr = input()

for wordlen in range(1,len(inputstr)):
    for i in range(0,len(inputstr),wordlen):
        word = inputstr[i:i+wordlen]
        a.add(word)
print(a)

checkchar = inputstr[len(inputstr)/2]

def makeinstance(string):
    