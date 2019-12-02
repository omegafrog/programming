#include<stdio.h>

int power(int,int);

int main(){
  int num1,num2;

  scanf("%d%d",&num1,&num2);

  char num[2][3];

  for(int j=0;j<3;j++)
    num[0][j]=(char)(num1/(power(10,j))%10);
  for(int i=0;i<3;i++)
    num[1][i]=(char)(num2/(power(10,i))%10);

  num1=0;
  num2=0;
  
  for(int i=0;i<3;i++)
    num1+=(int)num[0][i]*(power(10,2-i));
  for(int i=0;i<3;i++)
    num2+=(int)num[1][i]*(power(10,2-i));

  num1>num2?printf("%d",num1):printf("%d",num2);

}

int power(int num1, int num2){
  int result=1;
  for(int i=0;i<num2;i++)
    result*=num1;
  return result;
}
