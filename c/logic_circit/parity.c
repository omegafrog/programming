#include<stdio.h>
#define MAXBIT 8

void appendparity(int [],int);
void decToBool(int [],int);
void display(int[]);

int main(){
  int bit[MAXBIT]={0,};
  int num;
  printf("dec:");
  scanf("%d",&num);
  
  appendparity(bit,num);
  display(bit);
}

void decToBool(int bit[MAXBIT],int num){
  int tempbit[MAXBIT-1]={0,};
  int i = 1;
  int fnum = num;
  if (fnum < 0) {
    num = ~num + 1;
    for (i; i < MAXBIT; i++) {
      if (num == 1) {
	tempbit[i-1] = 1;
	break;
      }
      if (num % 2 == 1) 
	tempbit[i-1] = 1;
      else
	tempbit[i-1] = 0;
      num=num/2;
    }
    int temp = 0;
    for (int x = 0; x <= i; x++) 
      bit[MAXBIT-1 - x] = tempbit[x];
    for (int y = MAXBIT-1-1; y>=0; y--) {

      if (bit[y] == 1&&temp==0)
	temp = 1;
      else if (bit[y] == 0 && temp == 1) bit[y] = 1;
      else if (bit[y] == 1 && temp == 1) bit[y] = 0;
    }
  }
  if (fnum > 0) {
    for (i; i < MAXBIT; i++) {
      if (num == 1) {
	tempbit[i-1] = 1;
	break;
      }
      if (num % 2 == 1) 
	tempbit[i-1] = 1;

      else 
	tempbit[i-1] = 0;
      num = num / 2;
    }
    for (int x = 0; x <= i; x++) 
      bit[MAXBIT-1 - x] = tempbit[x];
  }
}

  
void appendparity(int bit[MAXBIT],int num){
  decToBool(bit,num);
  int temp=0;
  for(int i=1;i<MAXBIT;i++)
    if(bit[i]==1) temp+=1;

  if(temp%2==0)
    bit[0]=0;
  else bit[0]=1;
}
  
void display(int bit[MAXBIT]){
  printf("result:");
  for(int i=0;i<MAXBIT;i++)
    printf("%d",bit[i]);
}

	   

	   
