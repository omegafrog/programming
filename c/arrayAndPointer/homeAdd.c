#include<stdio.h>
#include<string.h>

int main(){
  char homeAddr[30];

  printf("print your homeAddress:");
  
  fgets(homeAddr,28,stdin);
  homeAddr[strlen(homeAddr)-1]=0;

  int i=0;
  /*while(homeAddr[i]!=0){
    printf("%c",homeAddr[i]);
    i++;
    }*/
  printf("%s",homeAddr);//if first argument is %s, give the second argument for address
}
