#include<stdio.h>
#define MAXSIZE 9
void partition(int list[],int left, int right);
void quick(int list[], int left, int right);


int main(){
  int list[MAXSIZE]={5,3,8,4,9,1,6,2,7};

  printf("before: ");
  for(int i=0;i<MAXSIZE;i++){
    printf("%d ",list[i]);
  }

  quick(list,0,MAXSIZE-1);

  printf("\nafter: ");
  for(int i=0;i<MAXSIZE;i++){
    printf("%d ",list[i]);
  }
}
