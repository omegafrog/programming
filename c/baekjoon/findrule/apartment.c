#include<stdio.h>
#include<malloc.h>
#define FLOOR 15 //0~14
#define RNUM 14 //1~14

int main(){
  int apart[FLOOR][RNUM]={{1,2,3,4,5,6,7,8,9,10,11,12,13,14}};

  int *tcase;
  
  int t;
  scanf("%d",&t);

  tcase=(int*)malloc(sizeof(int)*3*t); //tcase +

  for(int i=0;i<t;i++)
    scanf("%d%d",tcase+3*i,tcase+3*i+1); 
  
  int count=0;
  while(count<t){
    int temp;
    
    for(int i=1;i<=*(tcase+3*count);i++){
      for(int j=0;j<*(tcase+3*count+1);j++){
	temp=0;
	for(int x=0;x<=j;x++)
	  temp+=apart[i-1][x];
	apart[i][j]=temp;
      }
    }
    printf("%d\n",apart[*(tcase+3*count)][*(tcase+3*count+1)-1]);
    count++;
  }
}
