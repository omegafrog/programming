#include<stdio.h>
#include<math.h>

int isPrime[10001]={0,};

void findPrimeNum(int end){
    for(int i=2;i<=(int)sqrt((double)end);i++){
      if(isPrime[i]==1) continue;
      else
	for(int k=2*i;k<=end;k+=i)
	  isPrime[k]=1;
    }
}
