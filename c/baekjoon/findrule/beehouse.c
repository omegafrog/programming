#include<stdio.h>

int summation(int, int);

int main(){
  int putnum;
  scanf("%d",&putnum);
  int i=0;
  for(;;){
    int a=summation(1,i)+2;
    int b=summation(2,i+1)+7;
    
    if(putnum==1){
      printf("%d",1);
      break;
    }
    
    else if((a<=putnum)&&(b>=putnum)){
      printf("%d",i+2);
      break;
    }
    i++;
  }
}

int summation(int start, int end){
  int sum=0;
  for(start;start<=end;start++)
    sum+=6*start;

  return sum;
}
