#include<stdio.h>

double factorial(int);

int main(){
  double f;

  f = factorial(20);
  printf("multiply of 1 to 20 is: %.1g\n",f);
}

double factorial(int num){
  double sum=1;
  for(int i=1;i<=num;i++){
    sum*=i;
  }
  return sum;
}
