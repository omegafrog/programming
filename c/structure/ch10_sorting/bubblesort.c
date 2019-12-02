#include<stdio.h>

void bubble(int*, int);

int main(){
  int list[10]={1,3,2,4,3,5,4,7,9,6};

  bubble(list,10);
  for(int i=0;i<10;i++){
    printf("%d ",list[i]);
  }
}

void bubble(int* list, int count){
  for(int i=0;i<count-1;i++){
    for(int j=0;j<count-i;j++){
      if(list[j]>list[j+1]){
	int temp=list[j+1];
	list[j+1]=list[j];
	list[j]=temp;
      }
    }
  }
}
