#include<stdio.h>
#include<string.h>

int main(){
  char string[101];
  int alpabet[26];
  scanf("%s",string);
  for(int x=0;x<26;x++)
    alpabet[x]=-1;

  int i=0;
  while(string[i]!=0){
    for(int x=97;x<123;x++){
      if(alpabet[x-97]==-1){
	if((int)string[i]==x)
	  alpabet[x-97]=i;
      }
    }
    i++;
  }
  for(int x=0;x<26;x++){
    printf("%d ",alpabet[x]);
  }
}
