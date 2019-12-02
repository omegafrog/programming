#include<stdio.h>

int main(int argc, char *argv[]){
  int a=(int)*argv[1]-48,b=(int)*argv[3]-48;
  
  if(argc>3){
    switch(*argv[2]){
    case '+':
      printf("%d + %d = %d",a,b,a+b);
      break;

    case '-':
      printf("%d - %d = %d",a,b,(a-b));
      break;

    case '*':
      printf("%d - %d = %d",a,b,(a*b));
      break;

    case '/':
      printf("%d / %d = %.2f",a,b,(double)(a/b));
      break;
    }
  }
  else
    printf("wrong argument!\nplease input again.");
}

