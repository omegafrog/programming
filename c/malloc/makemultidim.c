#include<stdio.h>
#include<malloc.h>

void *make_multiDimArray(int ,...);
int main(){
  int dim;
  printf("input dimention:");
  scanf("%d",&dim);
  int *dimsize;
  dimsize=(int*)malloc(sizeof(int)*dim);
  for(int i=0;i<dim;i++){
    printf("input %dth dimension size:",i);
    scanf("%d",dimsize+i);
  }
  
  if(dim==1){
    int *p;
    p=make_multiDimArray(1,dimsize[0]);
  }
  else if(dim==2){
    int **p;
    p=make_multiDimArray(2,dimsize[0],dimsize[1]);
  }
  else{
    int ***p;
    p=make_multiDimArray(3,dimsize[0],dimsize[1],dimsize[2]);
  }
}

void* make_multiDimArray(int num,...){
  int *dimsize=NULL;
  dimsize=&num+1;
  int *p1;
  int **p2;
  int ***p3;
  switch(num){
  case 1:
    p1=(int*)malloc(sizeof(int)*dimsize[0]);
    return p1;
  case 2:
    p2=(int **)malloc(sizeof(int *)*dimsize[0]);
    for(int i=0;i<dimsize[0];i++)
      *(p2+i)=(int *)malloc(sizeof(int)*dimsize[1]);
    return p2;
  case 3:
    p3=(int ***)malloc(sizeof(int **)*dimsize[0]);
    for(int i=0;i<dimsize[0];i++){
      *(p3+i)=(int **)malloc(sizeof(int *)*dimsize[1]);
      for(int j=0;j<dimsize[1];j++)
	*(*(p3+i)+j)=(int *)malloc(sizeof(int)*dimsize[2]);
    }
    return p3;
  }
}
