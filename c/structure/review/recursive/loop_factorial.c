#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char* argv[]){
  clock_t start, stop;
  double duration;
  int num=atoi(argv[1]);
  
  int result=1;

  start = clock(); //start
  for(int i=1;i<=num;i++)
    result*=i;

  printf("%d",result);

  stop=clock();
  duration = (double)(stop-start)/CLOCKS_PER_SEC;
  printf("duration time is %f sec.\b", duration);
}

  

