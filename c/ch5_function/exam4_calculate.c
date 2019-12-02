#include<stdio.h>

void add(int, int);
void subtract(int , int);
void multiply(int ,int);
void divide(int ,int);

int main(){
  char menu;
  int a,b;

  for(;;){
    printf("input two integer: ");
    scanf("%d%d", &a,&b);
    getchar();
    printf(">> choose mode: ");
    scanf("%c", &menu);
    getchar();
    switch(menu){
    case 'a':
      add(a,b);
      break;
    case 's':
      subtract(a,b);
      break;
    case 'm':
      multiply(a,b);
      break;
    case 'd':
      divide(a,b);
      break;
    case 'q':
      return 0;
    default:
      printf("wrong input.");
    }
  }
  return 0;
}

void add(int a, int b){
  printf("%d\n",a+b);
}
void subtract(int a, int b){
  printf("%d\n",a-b);
}
void multiply(int a, int b){
  printf("%d\n",a*b);
}
void divide(int a, int b){
  printf("%.2f\n",(double)a/b);
}
