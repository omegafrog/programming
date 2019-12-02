#include<stdio.h>

int main(){
  int input;
  int fee;
  

    printf("input the age:");
    scanf("%d",&input);
    
    if((input<=6)||(input>=70)){
    fee=0;
  } else if((input>=7)&&(input<=12)){
    fee=1000;
  } else if((input>=13)&&(input<=19)){
    fee=2000;
  } else {
    fee=3000;}

    printf("fee is %d.\n",fee);
}
