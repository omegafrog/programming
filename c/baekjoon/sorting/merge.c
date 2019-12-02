#include<stdio.h>
#include<malloc.h>
#include<math.h>

int power(int, int);
void swap(int*, int*, int);
int main(){
  int count;
  scanf("%d",&count);
  int n=1;
  while(count>power(2,n)) n=n+1;
  int max=power(2,n);
  int *np=(int*)malloc(sizeof(int)*power(2,n));


  for(int i=0;i<max;i++)
    np[i]=1000001;

  for(int i=0;i<count;i++)
    scanf("%d",np+i);
  for(int i=1;i<=power(2,n-1);i=i*2){
    for(int j=0;j<=max-i*2;j=j+i*2){
      swap(np+j,np+j+i, i);
    }
  }
  for(int i=0;i<count;i++){
    if(np[i]==1000001)
      continue;
    printf("%d\n",np[i]);
  }
  free(np);
}

void swap(int* np1, int* np2, int i){
  int* tp=(int*)malloc(sizeof(int)*i*2);
for(int j=0;j<i*2;j++){
  tp[j]=1000001;
 }

  int findex=0;
  int x=0,y=0;
  while(x<i||y<i){
    if(np1[x]==1000001){
      for(y;y<i;y++){
	tp[findex]=np2[y];
	findex++;
      }
      break;
    }
    else if(np2[y]==1000001){
      for(x;x<i;x++){
	tp[findex]=np1[x];
	findex++;
      }
      break;
    }
    else if(x==i){
      for(y;y<i;y++){
 	tp[findex]=np2[y];
	findex++;
      }
    }
    else if(y==i){
      for(x;x<i;x++){
	tp[findex]=np1[x];
	findex++;
      }
    }
    else if(np1[x]<np2[y]){
      tp[findex]=np1[x];
      findex++;
      x++;
    }
    else if(np1[x]>np2[y]){
      tp[findex]=np2[y];
      findex++;
      y++;
    }
  }
  for(int k=0;k<i*2;k++)
    np1[k]=tp[k];
  free (tp);
}

int power(int x, int y){
  int res=x;
  for(int i=1;i<y;i++){
    res=res*x;
  }
  return res;
}
