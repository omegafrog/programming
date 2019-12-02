#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int factorial(int n);
int main(int argc, char* argv[]){
  clock_t start, stop;
  double duration;
  int num=atoi(argv[1]);
  int res;

  start=clock();
  res=factorial(num);

  printf("%d",res);

  stop=clock();
  duration = (double)(stop-start)/CLOCKS_PER_SEC;
  printf("duration time is %f sec.\b", duration);
}

int factorial(int n){
  if(n==1) return 1;
  else return(n*factorial(n-1));
}
