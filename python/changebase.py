## 입력을 받고 올바른 입력이 들어올 때까지 반복하여 입력받는다.
def get_numStr():
    while(True):
        numString = input("Enter an unsigned integer:")
        if(numString == "stop"): ## numString이 "stop"이면 "stop"을 반환한다.
            return "stop"
        elif(numString.isdigit()):
            ## numString이 숫자로만 이루어져 있다면, numString을 반환한다.
            ## string.isdigit() : 문자열이 숫자로만 이루어져 있으면 True, 아니면 False를 반환하는 함수.
            return numString


## 무슨 진법으로 바꿀지 입력받는 함수.
def get_boption():
    while(True):
        optString = input("'b' or 'B' for binary, 'o' or 'O' for octal, 'h' or 'H' for hexadecial:")
        if(optString != 'o' and optString != 'O' and optString != 'b' and optString != 'B' and optString != 'h' and optString != 'H'):
            ## 이외의 경우에는 "Invalid choice!"를 출력하고 옳은 입력이 나올 때까지 반복한다.
            print("\nInvalid choice!\n")
        else:
            ## 만약 optString이 'o' or 'O' or 'b' or 'B' or 'h' or 'H'라면, optString을 반환한다.
            return optString

## 숫자와 진법(numString,optString)을 인자로 받아서 진법에 따른 변환 함수를 호출하는 함수.
## 호출한 dec_to_base의 반환 value를 "remainderList"에 저장하고 이를 반환한다.
def change_base(numString, optString):
    remainderList=list()
    if(optString == 'h' or optString == 'H'): ## 만약 optString 이 h , H 라면
        remainderList=dec_to_base(numString,16)
    elif(optString == 'o' or optString == 'O'): ## 만약 optString 이 o, O 라면
        remainderList=dec_to_base(numString,8)
    elif(optString == 'b' or optString == 'B'): ## 만약 optString 이 b , B 라면
        remainderList=dec_to_base(numString,2)
    return remainderList
    
## 숫자(numString)과 진법(base)를 인자로 받아서 진법 변환한 데이터를 리스트 형태로 반환한다.
def dec_to_base(numString,base):
    tmpList=list()
    decimalNum=int(numString)
    ## 입력받은 숫자가 0 일 경우 그대로 0을 반환한다.
    if(decimalNum == 0):
        tmpList.append(str(decimalNum))
        return tmpList
    while(decimalNum>0):
        tmpList.append(str(decimalNum%base))
    ## 입력받은 숫자를 base로 나눠 나머지를 tmpList에 저장한다.
        decimalNum=decimalNum//base
    ## 입력받은 숫자를 base로 나눈 몫을 가지고 0보다 클 때까지 반복한다.
    return tmpList


## change_base의 반환 데이터를 인자로 받아서 결과를 출력하는 함수
def print_baseNum(remainderList):
    outputlist=list()
    ## reversed(list) : 리스트의 데이터를 역순으로 바꾸어 주는 함수.
    for element in list(reversed(remainderList)):
        ## 16진수의 경우 10 이상의 수는 알파벳으로 표시하기 때문에 10진수를 key로 하고 알파벳을 value로 하는 딕셔너리 생성.
        hexaDict={"10":"A", "11":"B", "12":"C", "13":"D", "14":"E", "15":"F"}
        if element in list(hexaDict.keys()): ## 만약 remainderList의 데이터 중 10 이상의 숫자가 hexaDict의 key를 원소로 하는 리스트 안에 있다면, outputlist에 hexaDict[key]를 추가한다.
            outputlist.append(hexaDict[element])
        else: ## 이외의 경우에는 outputlist에 숫자를 추가한다.
            outputlist.append(element)   
    print(''.join(outputlist)) ## ''.join():리스트 안의 데이터를 공백 없이 문자열로 합쳐주는 메소드
        

#main
def main():
    print("This program will convert a base 10 number into another base.")
    ## 숫자를 입력받는다.
    numString = get_numStr()
    ## numString이 'stop'을 반환한다면, loop을 빠져나온다.
    while(numString != 'stop'):
        print_baseNum(change_base(numString,get_boption()))
        numString = get_numStr()
    print("\nThank you for using this program.")
    
main()