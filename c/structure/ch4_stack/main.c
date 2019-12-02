#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "stack.h"
#include "calculator.h"
#include "checkparency.h"

int main(void)
{
  char input[100];
  char exp[100];
  printf("==>수식을 입력하시오:");
  scanf("%s",input);

  int parency=0;
  parency=checkparency(input);
  
  switch(parency){
  case 1: printf("==>괄호매칭 성공.\n"); break;
  case 0: printf("==>괄호매칭 오류.\n"); break;
  }
  
    
  if(parency==1){
    changexp(input,exp);
    printf("==>후위식 만들기:%s\n",exp);
    printf("==>후위식 계산:%d\n",evil(exp));
  }
  


}
