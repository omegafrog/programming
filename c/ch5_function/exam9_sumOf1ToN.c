#include<stdio.h>

void sum(int);

int main(){
  int num;
  scanf("%d",&num);

  sum(num);

}

void sum(int num){
  int sum=0;
  for(int i=0;i<num;i++){
    sum+=i;
  }
  printf("the sum of 1 to %d is %d",num,sum);
}
