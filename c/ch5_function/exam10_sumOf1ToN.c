#include<stdio.h>

int sum(int);

int main(){
  int n,s;

  scanf("%d",&n);
  s=sum(n);
  printf("the sum of 1 to %d is :%d",n,s);
}

int sum(int num){
  int sum=0;
  for(int i=0;i<num;i++){
    sum+=i;
  }
  return sum;
}
