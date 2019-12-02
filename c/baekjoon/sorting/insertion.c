#include<stdio.h>
#include<malloc.h>

int main(){
  int *np;
  int *rp;

  int count;
  scanf("%d",&count);

  np=(int*)malloc(sizeof(int)*count);
  rp=(int*)malloc(sizeof(int)*count);

  for(int i=0;i<count;i++){
    scanf("%d",np+i);
  }
  rp[0]=np[0];
  for(int i=1;i<count;i++){
    rp[i]=np[i];
    for(int j=i;j>0;j--){
      if(rp[j-1]>rp[j]){
	int tmp=rp[j];
	rp[j]=rp[j-1];
	rp[j-1]=tmp;
      }
    }
  }
    

  for(int i=0;i<count;i++){
    printf("%d\n",rp[i]);
  }
}

