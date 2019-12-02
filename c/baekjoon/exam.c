#include<stdio.h>

int main(){
  int a=0,b=0,n=0;
  int r=2;
  int s=0;
  scanf("%d",&n);
  n=(n-1)/6;
  for(;;){
    s=r(r-1)/2;
    if(s<n) break;
    r++;
  }
  printf("%d",r);

}

