#include<stdio.h>

int main(){
  int count = 1;
  int numeven=0,numodd=1;
  int num;
  int sum_odd=0,sum_even=0;
  scanf("%d",&num);
  
  for(count;count<=num;count++){
    numeven+=2;
    sum_even+=numeven;
  }
  for(count=1;count<=num;count++){
    numodd+=2;
    sum_odd+=numodd;
  }

  printf("sumeven=%d,sumodd=%d\n",sum_even,sum_odd);
  ///////////////////////////////////////////////////////////////
  ///////////////////////////whileloop///////////////////////////
  ///////////////////////////////////////////////////////////////
  count=1;
  sum_even=0,sum_odd=0;
  numeven=0,numodd=1;
  while(count<=num){
      numeven+=2;
      sum_even+=numeven;
      numodd+=2;
      sum_odd+=numodd;
      count++;
  }
  printf("sumeven=%d,sumodd=%d\n",sum_even,sum_odd);
}
