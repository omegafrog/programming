#include<stdio.h>

int main(){
  int num;
  printf("put minut decimal number:");
  scanf("%d",&num);

  num=~num+1;

  printf("dec:%d\n",num);
  printf("hexadec:0x%x",num);
}
