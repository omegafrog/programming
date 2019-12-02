#include<stdio.h>

int main(){
  int A,B,V;
  scanf("%d%d%d",&A,&B,&V);
  double ans=((double)V-B)/(A-B);
  if(ans-(int)ans==0) printf("%d",(int)ans);
  else printf("%d",(int)ans+1);
  
}
