#include<stdio.h>

int main(){
  int num[5]={10,30,40,30,20};

  int *p=num;

  int sum=0;
  for(int i=0;i<5;i++){
    sum+=*(p+i);
  }
  printf("%d",sum);
}
