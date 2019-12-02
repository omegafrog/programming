#include<stdio.h>

int main(){
  int num[10]={3,4,2,1,6,4,2,7,9,67};
  int sum=0;

  for(int i=0;i<10;i++)
    sum+=num[i];

  printf("sum=%d",sum);
}
