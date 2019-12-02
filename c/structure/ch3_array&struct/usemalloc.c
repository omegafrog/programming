#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(){
  int *pa=NULL;

  pa=(int*)malloc(sizeof(int)*10);

  if(pa==NULL){
    fprintf(stderr,"error\n");
    exit(1);
  }
  else{
    for(int i=0;i<100;i++)
      printf("%d\n",i);
  }
}

