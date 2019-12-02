#include<stdio.h>
#include<string.h>

int main(){
  char string1[]={"hello world"};
  char string2[]={"hello world"};

  int a=5;
  a=strcmp(string1,string2);
  printf("%d",a);
}
