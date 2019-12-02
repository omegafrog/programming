#include<stdio.h>

int main(){
  int num1,num2,num3,num4;
  int temp1,temp2;
  int biggest;
  int smallest;

  scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

  if(num1>num2){
    temp1=num1;
  }else
    temp1=num2;
  if(num3>num4){
    temp2=num3;
  }else
    temp2=num4;
  if(temp1>temp2){
    biggest = temp1;
  }else
    biggest = temp2;
  printf("biggest one is %d.\n",biggest);
  ///////////////////////////////////////////////
  ///////////////////small///////////////////////
  ///////////////////////////////////////////////

  if(num1<num2){
    temp1 = num1;
  }else
    temp1=num2;
  if(num3<num4){
    temp2=num3;
  }else
    temp2=num4;
  if(temp1<temp2){
    smallest = temp1;
  }else
    smallest = temp2;
  printf("smallest one is %d.\n",smallest);
  //////////////////////////////////////////////////
  ////////////////////use ?/////////////////////////
  //////////////////////////////////////////////////
  
  ///////////////////////////biggest///////////////////////////
  (num1>num2)?temp1=num1:temp1=num2;
  (num3>num4)?temp2=num3:temp2=num4;
  (temp1>temp2)?biggest=temp1:biggest-temp2;
  
}
