#include<stdio.h>

int main(){
  char string[10000001]={0,};
  scanf("%[^\n]s",string);

  int count=1;
  int i;
  if(string[0]==' ')
    i=1;
  else
    i=0;

  while(string[i]!=0){
    if(string[i]==' ')
      count++;
    i++;
  }
  printf("%d",count);
}
