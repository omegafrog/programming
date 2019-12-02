#include<stdio.h>

int num1=5;
int num2=10;
static int num3=20;


void add(){
  num3=num1+num2;
  printf("%d+%d=%d\n",num1,num2,num3);
}
