#include<stdio.h>

void checkNum(int);
int input();

int main(){
  int num;
  printf("input number:");
  num = input();

  while(num>999){
    checkNum(num);

    printf("input number:");
    num=input();
    
  }
}

void checkNum(int num){
  int num1,num2,num3,num4;
  num1 = num/1000%10;
  num2 = num/100%10;
  num3 = num/10%10;
  num4 = num%10;
  if(num1%2==0)
    printf("%d : even, ",num1);
  else
    printf("%d : odd, ",num1);
  if(num2%2==0)
    printf("%d : even, ",num2);
  else
    printf("%d : odd, ",num2);
  if(num3%2==0)
    printf("%d : even, ",num3);
  else
    printf("%d : odd, ",num3);
  if(num4%2==0)
    printf("%d : even\n",num4);
  else
    printf("%d : odd\n",num4);
}

int input(){
  int i;
  scanf("%d",&i);
  return i;
}

