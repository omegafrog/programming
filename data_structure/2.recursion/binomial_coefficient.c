#include<stdio.h>
#include<stdlib.h>


int binomial_coefficient_recursive(int n,int k){
  if(k==0||k==n) return 1;
  else{
    return binomial_coefficient_recursive(n-1,k-1)+binomial_coefficient_recursive(n-1,k);
  }
}

int binomial_coefficient_iteration(int n, int k){
  if(k==0||n==k) return 0;

  int**cache=(int**)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++){
    *(cache+i)=(int*)malloc(sizeof(int)*k);
    **(cache+i)=0;
  }
  int result=0;


  for()
}
int main(){
  
}
