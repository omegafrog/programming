#include<stdio.h>
#include<malloc.h>
int main(){
  int num;
  int *np;
  scanf("%d",&num);

  np=(int*)malloc(sizeof(int)*num);
  for(int i=0;i<num;i++){
    scanf("%d",np+i);
  }
  for(int i=1;i<num;i++){
    for(int j=0;j<num-i;j++){
      if(np[j]>np[j+1]){
	int temp=np[j+1];
	np[j+1]=np[j];
	np[j]=temp;
      }
    }
  }

  for(int i=0;i<num;i++){
    printf("%d\n",np[i]);
  }
 }
