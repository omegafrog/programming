#include<stdio.h>

int get_input();
void multiplication(int);

int main(){
  int n=1;

  while(n>0){
    n=get_input();
    multiplication(n);
  }
}

int get_input(){
  int i;
  scanf("%d",&i);
  return i;
}

void multiplication(int num){
  for(int i=2;i<=num;i++){
    for(int j=1;j<=9;j++)
      printf("%dX%d=%2d\n",i,j,i*j);
  }
}
