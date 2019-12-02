#include<stdio.h>
#include"head.h"

int main(){
  int a,b;
  input_value(&a, &b);
  print_value(a,b);
  exchange(&a, &b);
  print_value(a,b);
  return 0;
}

void input_value(int *a, int *b){
  printf("put 2 numbers\nnum1:");
  scanf("%d",a);
  printf("num2:");
  scanf("%d",b);
}
