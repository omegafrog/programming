#include<stdio.h>
#include<string.h>

int main(){
  int ascending[8]={1,2,3,4,5,6,7,8};
  int descending[8]={8,7,6,5,4,3,2,1};
  int ans=0;

  int inputScale[8];
  for (int i=0;i<8;i++)
    scanf("%d",(inputScale+i));
  for(int i=0;i<8;i++){
    if(ascending[i]!=inputScale[i]){
      ans=0;
      break;
    }
    else
      ans=1;
  }
  if(ans==0){
    for(int i=0;i<8;i++){
      if(inputScale[i]!=descending[i]){
	ans=0;
	break;
      }
      else
	ans=2;
    }
  }
  
  switch(ans){
  case 0:
    printf("mixed");
    break;
  case 1:
    printf("ascending");
    break;
  case 2:
    printf("descending");
    break;
  }
}
