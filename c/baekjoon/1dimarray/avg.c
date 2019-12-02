#include<stdio.h>

int main(){
  int grade[5];
  int sum=0;
  for(int i=0;i<5;i++){
    scanf("%d",grade+i);
    if(grade[i]<40){
      grade[i]=40;
    }
    sum+=grade[i];
  }
  printf("%d",sum/5);
}
