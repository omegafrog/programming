#include<stdio.h>

int recfunc(int);

int main(){
  int n;
  scanf("%d",&n);

  printf("%d",recfunc(n));
}

int recfunc(int n){
  if(n<=1) return(5);
  else return (2*(recfunc(n-1))+1);
}
