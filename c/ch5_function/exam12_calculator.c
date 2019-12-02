#include<stdio.h>

void add(int, int);
void distract(int, int);
void multiply(int, int);
void divide(int, int);

int main(){
  int a,b;
  char mode;
  printf("choose mode:");
  scanf("%c",&mode);

  printf("input two numbers:");
  scanf("%d%d",&a,&b);
  
  switch(mode){
  case '+':
    add(a,b);
    break;
  case '-':
    distract(a,b);
    break;
  case '*':
    multiply(a,b);
    break;
  case '/':
    divide(a,b);
    break;
  }
}

void add(int a,int b){
  printf("%d+%d=%d\n",a,b,a+b);
}

void distract(int a, int b){
  printf("%d-%d=%d\n",a,b,a-b);
}

void multiply(int a, int b){
  printf("%d*%d=%d\n",a,b,a*b);
}

void divide(int a, int b){
  printf("%d/%d=%.2f",a,b,(double)a/b);
}
