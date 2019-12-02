#include<stdio.h>

int input();
int sum(int ,int);
void print(int, int, int);

int main(){
  int a,b,c;

  a=input();
  b=input();
  c=sum(a,b);
  print(a,b,c);

}

int input(){
  int i;
  scanf("%d",&i);

  return i;
}

int sum(int a, int b){
  return a+b;
}

void print(int x, int y, int z){
  printf("%d+%d=%d\n",x,y,z);
}
