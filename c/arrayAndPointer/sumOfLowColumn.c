#include<stdio.h>

int main(){
  //int arr[4][3]={1,3,2,4,3,5,4,6,5,7,6,8};
  int arr[][3]={1,3,2,4,3,5,4,6,5,7,6,8};
  int sum_row[4]={0,}, sum_column[3]={0,}; // 

  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
      //sum_row[i]+=arr[i][j];
      *(sum_row+i)+=*(*(arr+i)+j);
      
    }                       
    printf("\n");
  }
  
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      //sum_column[i]+=arr[j][i];
      *(sum_column+i)+=*(*(arr+j)+i);
  }
  
  
  for(int i=0;i<4;i++)
    printf("sum of %dth row is %d\n",i,sum_row[i]);
  for(int i=0;i<3;i++)
    printf("sum of %dth column is %d\n",i,sum_column[i]);
}
