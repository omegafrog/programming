//에라토스테네스의 체 algorithm
#include<stdio.h>
#include<stdlib.h>


int main(){
  
  int count=0;
  scanf("%d",&count);

  int* inputarr=(int*)calloc(count,sizeof(int));


  int biggest=0;
  for(int i=0;i<count;i++){
    scanf("%d",inputarr+i);
    if(biggest<*(inputarr+i))
      biggest=inputarr[i];
  }

  
  int* isPrime=(int*)calloc(sizeof(int)*biggest,biggest);

  
  int primearr[100];
  int primeindex=0;
  int prime_num=0;

  for(int i=2;i<=biggest;i++){
    if(isPrime[i]==1) continue;
    if(isPrime[i]==0){
      for(int k=0;k<count;k++)
	if(inputarr[k]==i) prime_num++;
    }
    for(int j=i;j<=biggest;j+=i)
      isPrime[j]=1;
  }
  printf("%d",prime_num);
}
