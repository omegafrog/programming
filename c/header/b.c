#include<stdio.h>
#include"head.h"

void print_value(int a, int b){
  printf("%d %d\n",a, b);
}

void exchange(int *a, int *b){
  int temp;
  temp=*b;
  *b=*a;
  *a=temp;
}
