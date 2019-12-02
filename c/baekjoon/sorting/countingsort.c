// 동적할당해서 10000000개의 데이터를 저장하면 40메가바이트. 절대로 다 못넣는다. 그렇다면 int형 변수 하나 선언하고 그거에다가 값을 계속 받고, 그걸 처리하면 될 것 같다.
//인티저형 크기가 10001인 배열을 만들고(수의 ㅊ최대값이 10000이니까) 거기다가 수를 입력받는 족족 카운트해서 하면 될까...??

#include<stdio.h>
#include<malloc.h>
int main(){
  int countlist[10000]={0,};// countlist[0]->1

  int count;
  int inputnum;
  int biggestnum=0;
  scanf("%d",&count);
  for(int i=0;i<count;i++){
    scanf("%d",&inputnum);
    countlist[inputnum-1]++;
    if(inputnum>biggestnum) biggestnum=inputnum;
  }
  int temp=countlist[0];
  for(int i=1;i<biggestnum;i++){
    countlist[i]+=temp;
    temp=countlist[i];
  }

  
  
  int cindex=0;
  int x=0;
  for(cindex;cindex<biggestnum;cindex++){
    for(x;x<countlist[cindex];x++){
      printf("%d\n",cindex+1);
    }
    
  }
}

