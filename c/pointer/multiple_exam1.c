#include<stdio.h>

int multiple (int*, int*);

int main(){
  int num1,num2;
  printf("put two numbers:");
  scanf("%d%d",&num1,&num2);

  int result;
  result=multiple(&num1,&num2);

  printf("%dX%d=%d\n",num1,num2,result);
}

int multiple (int *p1, int *p2){
  int result;
  result = *p1 * *p2;
  return result;
}
