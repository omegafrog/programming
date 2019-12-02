#include<stdio.h>
#include<string.h>

int main(int argc, *char argv[]){
  char result[101]={0,};
  for(int i=0;i<100;i++){
    for(int j=1;j<sizeof(argv)/sizeof(char *);j++){
      result[i]=atoi(*argv[j]);
    }
  }
  
