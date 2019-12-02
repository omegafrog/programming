#include<stdio.h>

int main(){
  int num1,num2;

  scanf("%d%d",&num1,&num2);

  if(num1>num2){
    printf("bigger one is %d, and small one is %d.\n",num1,num2);
  }
  else if(num1<num2)
    printf("bigger one is %d, and small one is %d.\n",num2,num1);
  else
    printf("both is same.\n");
}
