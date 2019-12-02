#include<stdio.h>

int main(){
  char input;
  int num1,num2;
  scanf("%c",&input);

  printf("choose the Function:");
  printf("put two numbers.\n");
  scanf("%d%d",&num1,&num2);

  switch(input){
  case '+':
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    break;
  case '-':
    printf("%d - %d = %d\n",num1,num2,num1-num2);
  case '*':
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    break;
  case '/':
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    break;
  }
}
  
