#include<stdio.h>

void multiplicationTable();

int main(){
  multiplicationTable();

  return 0;
}

void multiplicationTable(){
  for(int i=2;i<10;i++){
    for(int j=1;j<10;j++)
      printf("%d * %d=%d\n",i,j,i*j);
  }
}
