#include<stdio.h>

extern int num1,num2;
extern void add();

int main(){
  printf("num1: %d\n",num1);
  printf("num2: %d\n",num2);
  add();

}
