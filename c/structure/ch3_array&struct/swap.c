#include<stdio.h>

void swap(int *pa, int *pb);

int main(){
  int a=1,b=2;
  printf("befor: %d %d\n",a,b);
  swap(&a,&b);
  printf("after: %d %d",a,b);
}

void swap(int *pa, int *pb){
  int temp;
  temp = *pb;
  *pb = *pa;
  *pa = temp;
}

  
