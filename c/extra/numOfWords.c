#include<stdio.h>

int main(){
  char string[1000001]={0,};
  scanf("%[^\n]s",string);

  int i;
  int count =1;

  string[0]==' '?i=1:i=0;

  while(string[i]!=0){
    if(string[i]==' ')
      count++;
    i++;}

  printf("%d",count);
}
