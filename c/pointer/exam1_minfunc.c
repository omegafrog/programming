#include<stdio.h>

int *min(int *);

int main(){
  int array[10]={0,2,3,4,5,6,7,8,9,10};
  int *rp=NULL;

  rp=min(array);

  printf("min of array is %d.\n",*rp);
}

int *min(int *p){
  static int smallest;
  smallest = *p;
  
  for(int i=0;i<10;i++){
    if(smallest>*(p+i))
      smallest=*(p+i);
  }
  return &smallest;
}
