#include<stdio.h>

int main(){
  int numlist[10]={0,};

  int num;
  scanf("%d",&num);
  int index=0;
  while(num>=1){
    numlist[index]=num%10;
    num/=10;
    index++;
  }
  for(int i=1;i<index;i++){
    for(int j=0;j<index-i;j++){
      if(numlist[j]<numlist[j+1]){
	int temp=numlist[j+1];
	numlist[j+1]=numlist[j];
	numlist[j]=temp;
      }
    }
  }
  for(int i=0;i<index;i++){
    printf("%d",numlist[i]);
    
  }
}
