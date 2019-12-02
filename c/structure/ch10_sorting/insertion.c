#include<stdio.h>


void insertion(int*, int);
int main(){
  int list[10]={1,3,2,6,3,6,4,7,2,9};
  int* result;
  
  printf("insertion sorting start.\n");
  insertion(list,10);
  for(int i=0;i<10;i++){
    printf("%d ",list[i]);
  }
}

void insertion(int* list,int count){
  int temp;
  for(int i=1;i<count-1;i++){
    temp=list[i];
    int j;
    for(j=i-1;j>=0;j--){
      list[j+1]=list[j];
    }
    list[j+1]=temp;
  }
}
