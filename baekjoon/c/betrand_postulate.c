#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_CASE_NUM 123456


void findPrimeNum(int end,int* isPrime){
  for(int i=2;i<=(int)sqrt((double)end);i++){
      if(isPrime[i]==1) continue;
      else
	for(int k=2*i;k<=end;k+=i)
	  isPrime[k]=1;
    }
}

int main(){
  int t_cases_size=10; // size of test case
  int* t_cases=(int*)malloc(sizeof(int)*t_cases_size); 
  int t_case_index=0; 
  int tmp=0;

  int* isPrime=(int*)calloc(sizeof(int),MAX_CASE_NUM*2+1);


  //input
  while(1){
    scanf("%d",&tmp);
    if(tmp==0) break;
    else{
      t_cases[t_case_index]=tmp;
      if(t_cases_size<=t_case_index+1){
	t_cases_size*=2;
	t_cases=(int*)realloc(t_cases,t_cases_size*sizeof(int));
      }
      t_case_index++;
    }
  }
  
  /* input debugging
     for(int i=0;i<t_case_index;i++){
       printf("%d\n",t_cases[i]);
     
   */

  //find prime num 
  findPrimeNum(MAX_CASE_NUM*2+1,isPrime);

  
  int start,end,count=0;
  for(int i=0;i<t_case_index;i++){
    start=t_cases[i];
    end=2*start;
    for(int j=start+1;j<=end;j++){
      if(isPrime[j]==0) count++;
    }
    printf("%d\n",count);
    count=0;
  }
}
