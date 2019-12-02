inputstr = "6 5 4 3 1"

numlist = inputstr.split(" ")
numlist = list(map(int, numlist))
for i in range(1,4):
    if i in  numlist:
        if i+1 in numlist:
            if i+2 in numlist:
                if i+3 in numlist:
                    print("YES")
                    exit(0)
print("NO")

