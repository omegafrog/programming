#include<stdio.h>

double* sum(double);

int main(){
  double arr[]={95.1, 93, 94.5, 88, 89.7};
  double* sump=NULL;

  for(int i=0;i<5;i++)
    sump=sum(arr[i]);
  printf("sum of arr is %.1f.\n",*sump);
}

double* sum(double score){
  static double total;

  total+=score;
  
  return &total;
}
