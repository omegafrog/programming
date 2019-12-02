#include<stdio.h>
#include"homework.h"

int main(){
  char string1[50];
  printf("input:");
  scanf("%s[\n]",string1);
  int count;
  printf("print time:");
  scanf("%d",&count);

  for(int i=0;i<count;i++){
    print(string1);
  }
}
