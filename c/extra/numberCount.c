#include<stdio.h>
#include<malloc.h>

int power(int num1,int num2);
int main(){
  int num1,num2,num3;
  int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
  int result;
  int *p1;
  scanf("%d%d%d",&num1,&num2,&num3);

  result = num1*num2*num3;
  int count=0;
  int count_temp;
  int temp=result;
  while(temp!=0){
    temp =temp/10;
    count++;
  }
  count_temp = count;
  
  p1 =(int*)malloc(sizeof(int)*1000010);

  int i=0;
  while(result!=0){
    *(p1+i)=result/(power(10,count_temp-1))%10;
    result -= *(p1+i)*(power(10,count_temp-1));
    count_temp--;
    i++;
  }
  
  for(int x=0;x<count;x++){
    switch(*(p1+x)){
    case 0:
      n0++;
      break;
    case 1:
      n1++;
      break;
    case 2:
      n2++;
      break;
    case 3:
      n3++;
      break;
    case 4:
      n4++;
      break;
    case 5:
      n5++;
      break;
    case 6:
      n6++;
      break;
    case 7:
      n7++;
      break;
    case 8:
      n8++;
      break;
    case 9:
      n9++;
      break;
    }
  }
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
}

int power(int num1, int num2){
  int result=1;
  for(int i=0;i<num2;i++)
    result = result *num1;
  return result;
}
