#include<stdio.h>

void swap1(int[], int, int);
void swap2(int*, int*);

int main(){
  int a[10]={10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  
  printf("a=");
  for(int i=0;i<10;i++)
    printf("%d ",a[i]);
  printf("\n");

  swap1(a, 1,3);
  for(int i=0;i<10;i++)
    printf("%d ",a[i]);
  printf("\n");
  
  swap2(a+1,a+3);
  for(int i=0;i<10;i++)
    printf("%d ",a[i]);
}

void swap1(int a[10], int i, int j){
  int temp;
  temp = a[j];
  a[j]=a[i];
  a[i]=temp;
}

void swap2(int *i, int *j){
  int temp;
  temp = *j;
  *j=*i;
  *i=temp;
}

  
