def main():
    inputStr=input()
    numlist=list(inputStr.split())
    numlist=list(map(int,numlist))
    numlist.sort()
    print(numlist[0],numlist[len(numlist)-1])

main()