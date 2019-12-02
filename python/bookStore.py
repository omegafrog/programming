import os
from operator import itemgetter

## 초기 프로그램 실행 시 출력하는 함수
def greeting():
    print("Welcome to the bookstore program.")

## 데이터 파일을 읽고 이를 저장하는 함수
def readDatabase(theinventory):
    while True:
        ## 파일 이름을 입력받고 현재 디렉토리(./)에 없다면 올바른 파일이 입력될 때까지 반복하여 입력받음.
        filepath=input("Enter the name of file:")
        ## 입력받은 파일명이 현재 디렉토리에 있다면 파일을 열고 한줄씩 입력받아 캐리지 리턴을 없애준다.
        if filepath in os.listdir('./'):
            with open(filepath,"r") as f:
                while True:
                    line=f.readline()
                    line=line.replace('\n','')
                    if not line: return

                    ## 입력받은 line을 ','를 기준으로 나누어 리스트에 저장한다.
                    spline=list(line.split(','))
                    ## 이를 (last name),(first name)) 형태의 문자열로 만든다
                    authorName=spline[0]+","+spline[1]
                    ## 만약 새로운 저자일 경우 [title, qyt, price]를 저장할 빈 리스트를 만든다.
                    if authorName not in list(theinventory.keys()):
                        theinventory[authorName]=[]
                    ## 저자 이름에 해당하는 리스트에 [title, qty, price]인 리스트를 추가한다.
                    theinventory[authorName].append(spline[2:5])
        ## 입력받은 파일명이 현재 디렉토리에 없다면 오류 메세지를 출력한다.
        else:
            print("File is not exist. Try again.")

## 메뉴 화면을 출력하고 사용자의 입력을 받아 반환한다.
def printMenu():
    print("\n---------------------------------")
    print("Enter 1 to display the inventory.")
    print("Enter 2 to display the books by one author.")
    print("Enter 3 to add a book.")
    print("Enter 4 to change the price.")
    print("Enter 5 to change the qty on hand.")
    print("Enter 6 to view the total number of books in the inventory.")
    print("Enter 7 to see the total amount of the entire inventory.")
    print("Enter 8 to exit.")
    ## 사용자의 메뉴 선택을 입력받고 이를 반환한다.
    choice=input("Enter your choice:")

    return choice

## 책 전체를 출력하는 함수.
## 저자 이름별로 정렬되어야 하고 저자의 작품도 이름순으로 정렬되어야 한다.
def displayInventory(theinventory):
    ## 저자를 요소로 하는 리스트를 만들고
    ## 이 리스트를 이름순으로 정렬해서 저자별로 순회하면서 저자의 이름을 출력하고 정렬된 작품의 데이터를 출력한다.
    authorList=[element for element in list(theinventory.keys())]
    for author in sorted(authorList):
        print("\nThe author is:",author)
        printSortedWork(theinventory,author)

## 저자의 이름을 입력받고 그 저자의 작품을 출력하는 함수.
def displayAuthorsWork(theinventory):
    ## 저자의 이름을 입력받는다.
    ## 입력받은 저자가 있을 경우 정렬된 작품의 데이터를 출력한다.
    ## 입력받은 저자가 없을 경우 오류를 출력한다.
    author=changeAuthorName(input("Enter the author's first name:"), input("Enter the author's last name:")) ## 입력을 받고 형식에 맞게 저자의 이름을 변경하는 함수.

    if author in [element for element in list(theinventory.keys())]:
        printSortedWork(theinventory,author)
    else:
        print("Sorry, but no books by %s in the inventory.\n" %author)

## 작품들을 정렬하여 출력하는 함수
def printSortedWork(theinventory,author):
    ## author를 key로 하는 value는 [[title1,qty1,price1], [title2,qty2,price2], ...]]의 형태이다.
    ## 이 리스트를 리스트 안의 리스트의 0번째 요소인 이름을 기준으로 정렬하고
    ## 리스트 안의 리스트를 순회하면서 정보를 출력한다.
    for item in sorted(theinventory[author], key=itemgetter(0)):
        print("\n\tThe title is:",item[0])
        print("\tThe qty is:",item[1])
        print("\tThe price is:",item[2])
        print("\n\t-------")

## 저자의 이름을 형식에 맞게 변환하여 반환하는 함수.
def changeAuthorName(firstName,lastName):
    ## first name과 last name에 대해서 changeNameFormat함수를 실행한다.
    ## ','를 넣어 두 문자열을 합쳐 반환한다.
    firstName=changeNameFormat(firstName)
    lastName=changeNameFormat(lastName)
    return lastName+","+firstName

## 이름의 형식을 바꾸어서 반환하는 함수.
## 한 단어 뿐만 아니라 여러 단어들도 바꿀수 있어야 한다.
def changeNameFormat(name):
    ## 인자로 입력받은 문장(단어)를 공백을 기준으로 나누어 리스트를 만든다.
    ## ex) name="the travel of biLLie." -> ['the', 'travel', 'of', 'billie']
    ## 이 리스트의 요소들을 순회하면서...
    ## 단어의 문자들을 요소로 하는 리스트를 만들고 nameList에 추가한다. ## ex) nameList=[ ['t','h','e'], ['t','r','a','v','e','l'], ['o','f'], ['b','i','l','l','i','e'] ]
    nameList=[]
    sentenceList=[]
    for word in list(name.split(' ')):
        nameList.append(list(word))

    for word in nameList:
        ## word[1]부터 word[마지막]까지는 소문자여야하고.     ## ex) word=['b','i','L','L','i','e']
        lowerStr=''.join(word[1:len(word)])            ## lowerStr='iLLie'
        lowerStr=lowerStr.lower()                      ## lowerStr='illie'
        
        ## word[0]은 대문자여야 한다.
        upperStr=word[0]                               ## upperStr='b'
        upperStr=upperStr.upper()                      ## upperStr='B'
    
        ## sentenceList에 upperStr+lowerStr을 추가한다.
        sentenceList.append(upperStr+lowerStr)         ## sentenceList=[ 'The', 'Travel', 'Of', 'Billie' ]

    ## 단어 문자열을 가진 리스트를 합쳐 문자열을 만든다.
    return ' '.join(sentenceList)                      ## return The Travel Of Billie

## 새 책을 추가하는 함수.
def addBook(theinventory):
    ## 저자d와 작품명을 입력받는다.
    author=changeAuthorName(input("Enter the author's first name:"), input("Enter the author's last name:"))
    title=changeNameFormat(input("Enter the title:"))
    ## 저자가 존재할 때
    if author in list(theinventory.keys()):
        ## 책이 새로 들어왔을 때
            if isNewBook(theinventory, author, title):
                ## 가격과 재고량을 받고
                ## db에 저장한다.
                qty=getQty()
                price=getPrice()
                theinventory[author].append([title,str(qty),str(price)])
        ## 이미 책이 있을 때
                ## 오류를 출력한다.
            else:
                   print("This book is already in the inventory and cannot be added again.\n")
    ## 새로운 저자일 때
    else:
        ## 가격과 재고량을 받고
        ## db에 저장한다.
        qty=getQty()
        price=getPrice()
        theinventory[author]=[[title,str(qty),str(price)]]

## 재고량을 입력받고 잘 입력받았는지 확인하여 반환하는 함수.
def getQty():
    while True:
        ## 재고를 입력받고
        ## 만약 재고량이 10진수로만 이루어졌다면...
        ## 재고량을 int형으로 반환한다.
        qty=input("Enter the qty:")
        if qty.isdigit():
            return int(qty)
        ## 재고량이 10진수 이외의 문자가 포함되었다면...
        ## 오류 메세지를 출력하고 다시 입력받는다.
        else:
            print("Invalid input for qty.")

## 가격을 입력받고 잘 입력받았는지 확인하여 반환하는 함수.
## 가격은 소수점'.'이 포함되어야 한다.
def getPrice():
    while True:
        ## 가격을 입력받고
        ## 만약 가격이 10진수 숫자로만 이루어져있다면('.'이 없으므로)
        ## 오류 메세지를 출력한다.
        price=input("Enter the price:")
        if price.isdigit():
            print("Invalid input for price.")
        ## 만약 가격이 소수점 2번째 자리이라면...
            ## 갸격을 반환한다.
        elif isfloat(price):
            return str(price)
        else:
            print("Invalid input for price.")

## 숫자가 소수점 2째자리 float인지 판별하고 맞다면 True를 함수.
def isfloat(floatnum):
    try:
        ## 만약 숫자가 0보다 작다면...
        if float(floatnum)<=0:
            ## False를 반환한다.
            return False
        ## 숫자가 0보다 크다면...
        else:
            numlist=floatnum.split('.')
            if len(numlist[1])==2:
                return True
            ''' 내가 생각했던 방식
            ## 문자열로 표현된 float를 한 문자를 요소로 하는 리스트를 만든다.
            ## ex)floatnum=3.45 -> numlist=[ '3' , '.' , '4' , '5' ]
            numlist=list(floatnum)
            ## 리스트의 0번째 인덱스부터 마지막 인덱스까지 순회하면서...
            for i in range(0,len(numlist)):
                ## 만약 i번째 리스트가 '.'이고, '.'의 인덱스부터 마지막 인덱스 까지 거리가 2라면
                ## ex) numlist[i]=='.', numlist[len(numlist)-1]=='5'
                ## len(numlist)-1==3 , i==1 
                ## 3-1 ==2 
                if numlist[i]=='.'and len(numlist)-1-i==2:
                    ## True를 반환한다.
                    return True '''

    ## float(floatnum)을 실행했을 때 floatnum이 float type으로 형변환 할 수 없는 형태라면 ValueError가 발생한다.
    except ValueError:
        ## 이 경우에는 False를 반환한다.
        return False

## 저자를 입력받고 옳게 입력받았다면 작품명을 입력받고 새 작품이 아니라면 가격을 변경하는 함수.
def changePrice(theinventory):
    ## 저자를 입력받는다.
    author=changeAuthorName(input("Enter the author's first name:"),input("Enter the author's last name:"))
    ## 입력받은 저자가 새로운 저자라면 오류 메세지를 입력한다.
    if author not in list(theinventory.keys()):
        print("No such author in your database. So you cannot change the price.")
    else:
        ## 저자가 옳게 입력되었다면 작품명 입력
        title=changeNameFormat(input("Enter the title:"))
        ## 만약 새 책이라면 오류 메세지를 출력
        if isNewBook(theinventory, author, title): ## 새 책이면 True, 아니면 False를 반환한다.
            print("No such book in your database. So you cannot change the price.")
        if isNewBook(theinventory, author, title):
            print("No book with the title %s by %s in inventory"%(title,author))
        else:
            ## 저자도 옳게 입력되고 새 책이 아니라면 가격 변경
            ## 작품명에 맞는 2차원 리스트의 행을 찾아야 함.
            for i in range(0, len(theinventory[author])):
                if theinventory[author][i][0]==title: break
    
            ## 이전 가격과 변경 이후 가격을 저장함.
            beforeprice=float(theinventory[author][i][2])
            theinventory[author][i][2]=getPrice()           ## 가격을 입력받고 소수점 둘째자리 숫자라면 반환하는 함수.
            afterprice=float(theinventory[author][i][2])

            print("Price will be updated from %.2f to %.2f\n"%(beforeprice, afterprice))


## 저자를 입력받고 이미 있는 저자라면 작품명을 입력받고 이미 있는 작품이라면 재고량을 변경하는 함수.
def changeQty(theinventory):
    ## 저자 입력
    author=changeAuthorName(input("Enter the author's first name:"),input("Enter the author's last name:"))
    ## 이미 있는 저자가 아니라면 오류 메세지를 출력한다.
    if author not in list(theinventory.keys()):
        print("No such author in your database. So you cannot change the price.\n")
    else:
        ## 저자가 옳게 입력되었다면 작품명 입력
        title=changeNameFormat(input("Enter the title:"))
        ## db에 책이 없다면 오류 메세지 출력
        if isNewBook(theinventory, author, title): ## 새 책이라면 True, 아니라면 False를 반환하는 함수.
            print("No book with the title %s by %s in inventory"%(title,author))
        else:
            ## 저자도 옳게 입력되고 새 책이 아니라면 가격 변경
            ## 작품명에 맞는 2차원 리스트의 행을 찾아야 함.
            for i in range(0, len(theinventory[author])):
                if theinventory[author][i][0]==title: break
            ## 출력을 위해 이전 가격을 저장함
            beforeQty=int(theinventory[author][i][1])
            theinventory[author][i][1]=getQty()
            ## 출력을 위해 저장함
            afterQty=int(theinventory[author][i][1])
            print("Qty will be updated from %d to %.d\n"%(beforeQty, afterQty))


## 새 책이라면 True, 아니라면 False를 반환하는 함수.
def isNewBook(theinventory, author, title):
    ## db에 있는 책 리스트를 만들고
    titleList=[]
    for element in theinventory[author]:
        titleList.append(element[0])

    ## 책리스트에 책이 있다면 True, 아니면 False를 반환한다.
    if title not in titleList:
        return True
    else:
        return False

## 총 재고량을 출력하는 함수.
def totlaQty(theinventory):
    totalBookQty=0 
    for author in list(theinventory.keys()):
        for element in theinventory[author]:
            totalBookQty=totalBookQty+int(element[1])
    print("The total number of books is %d.\n"%(totalBookQty))

## 총 가격을 출력하는 함수.
def calculateTotalAmount(theinventory):
    totalBookPrice=0.0
    for author in list(theinventory.keys()):
        for element in theinventory[author]:
            totalBookPrice=totalBookPrice+float(element[2])*int(element[1])
    print("The total value of the inventory is %.2f.\n"%(totalBookPrice))

## 메인 함수
def main():
    theinventory=dict()
    greeting()
    readDatabase(theinventory)
    while True:
        choice=printMenu()
        if choice=="1":
            displayInventory(theinventory)
        elif choice=="2":
            displayAuthorsWork(theinventory)
        elif choice=="3":
            addBook(theinventory)
        elif choice=="4":
            changePrice(theinventory)
        elif choice=="5":
            changeQty(theinventory)
        elif choice=="6":
            totlaQty(theinventory)
        elif choice=="7":
            calculateTotalAmount(theinventory)
        elif choice=="8":
            print("Thank you for using this program.\n")
            break
        else:
            print("invalid choice.")

main()
 