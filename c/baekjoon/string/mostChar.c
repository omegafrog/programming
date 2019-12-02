#include<stdio.h>
#include<string.h>

int main(){
  char string[1000010];
  int alpacount[26]={0,};
  fgets(string,1000000,stdin);
  string[strlen(string)-1]=0;

  int x=0;
  while(string[x]!=0){
    if(string[x]>64&&string[x]<91)
      string[x]+=32;
    x++;
  }

  register int i=0;
  while(string[i]!=0){
    for(int x=97;x<123;x++){
      if(string[i]==x)
	alpacount[x-97]++;
    } i++;
  }

  int biggest=0;
  int ans;
  
  for(int i=0;i<26;i++){
    if(biggest<alpacount[i]){
      biggest=alpacount[i];
      ans=i;
    }
    else if(biggest==alpacount[i]&&alpacount[i]!=0)
      ans=-1;
  }
  if(ans==-1)
    printf("?");
  else
    printf("%c",ans+65);
}
