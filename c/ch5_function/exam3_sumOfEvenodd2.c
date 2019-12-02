#include<stdio.h>

int sumeven(int n);
int sumodd(int n);

int main(){
  int count;
  scanf("%d",&count);

  int oddSum.evenSum;

  oddSum=sumodd(count);
  evenSum=sumeven(count);

  printf("sum of 1 to %dth odd is %d, sum of 1 to %dth even is %d.\n",
	 count,oddSum,count,evenSum);
}

int sumeven(int n){
  int numeven=0;
  int sum_even=0;
  for(int i;i<=n;i++){
    numeven+=2;
    sum_even+=numeven;
  }
  return sum_even;
}

int sumodd(int n){
  int numodd=1;
  int sum_odd=0;
  
  for(n=1;n<=num;n++){
    numodd+=2;
    sum_odd+=numodd;
  }
  return sum_odd;
}

  
