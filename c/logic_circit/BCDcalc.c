#include<stdio.h>
#include<math.h>
#define MAXNUM 4

void changeBCD(int[MAXNUM][4],int);
void printBCD(int [MAXNUM][4]);

int main(){
  int num1,num2;
  char operator;
  printf("num1:");
  scanf("%d",&num1);
  
  printf("num2:");
  scanf("%d",&num2);

  getchar();
  
  printf("operator:");
  scanf("%c",&operator);

  int resultbit[MAXNUM][4]={0,};
  
  int res=0;
  switch(operator){
  case '+':
    res=num1+num2;
    changeBCD(resultbit,res);
    printBCD(resultbit);
    break;
  case '-':
    res=num1-num2;
    changeBCD(resultbit,res);
    printBCD(resultbit);
    break;
  }   
}

void changeBCD(int resultbit[MAXNUM][4],int num){
  int temp[4]={0,};
  for(int i=3;i>=0;i--){
    if(num>=(int)pow(10,i)){
      temp[3-i]=num/(int)(pow(10,i));
      num-=temp[3-i]*(int)(pow(10,i));
    }
  }

  for(int i=0;i<MAXNUM;i++){
    for(int j=3;j>=0;j--){
      if (temp[i] == 1) {
	resultbit[i][j] = 1;
	break;
      }
      if (temp[i] % 2 == 1) {
	resultbit[i][j] = 1;
	temp[i] = temp[i] / 2;
      }
      else {
	resultbit[i][j] = 0;
	temp[i] = temp[i] / 2;
      }
    }
  }
}

void printBCD(int resultbit[MAXNUM][4]){
  printf("result:");
  for(int i=0;i<MAXNUM;i++){
    for(int x=0;x<4;x++)
      printf("%d",resultbit[i][x]);
    printf(" ");
  }
}
