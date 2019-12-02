#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<malloc.h>

void findPrimeNum(int end,int*);
int main(){
  
int* isPrime=(int*)calloc(1000000,sizeof(int));
 isPrime[1]=1;

  int start,end;
  scanf("%d%d",&start,&end);

  findPrimeNum(end,isPrime);
  for(int i=start;i<=end;i++){
    if(isPrime[i]==0) printf("%d\n",i);
  }
}

void findPrimeNum(int end,int* isPrime){
  for(int i=2;i<=(int)sqrt((double)end);i++){
      if(isPrime[i]==1) continue;
      else
	for(int k=2*i;k<=end;k+=i)
	  isPrime[k]=1;
    }
}
