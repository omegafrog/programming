#include<stdio.h>
#include<string.h>
#define MAXBIT 8

void getbit(int[]);
void boolToGray(int[],int[]);
void grayToBool(int[],int[]);
void display(int[]);

int main(){
  int inputbit[MAXBIT]={0,};//bit[0] is msb
  int outputbit[MAXBIT]={0,};//outputbit[0] is msb

  int temp;
  for(;;){
    printf("choose the mode.\n0.quit\n1. bool->gray\n2. gray->bool\n");
    scanf("%d",&temp);
    switch(temp){
    case 1:
      printf("bool:");
      getbit(inputbit);
      boolToGray(inputbit,outputbit);
      printf("gray:");
      display(outputbit);
      break;
    case 2:
      printf("gray:");
      getbit(inputbit);
      grayToBool(inputbit,outputbit);
      printf("bool:");
      display(outputbit);
      break;
    case 0:
      return 0;
    }
  }
}

void getbit(int inputbit[MAXBIT]){
  char input[32];
  scanf("%s",input);//'0'=48
  
  int len=strlen(input);
  for(;;){
    for(int i=0;i<len;i++){
      if(input[i]>49){
	printf("wrong number, try again\n");
	scanf("%s",input);
      }
    }
    break;
  }

  for(int i=0;i<len;i++)
    inputbit[MAXBIT-1-i]=(int)input[len-1-i]-48;
}

void boolToGray(int inputbit[MAXBIT], int outputbit[MAXBIT]){
  inputbit[0]=outputbit[0];
  
  for(int i=0; i<MAXBIT-1;i++){
    if(inputbit[i]==inputbit[i+1]) outputbit[i+1]=0;
    else outputbit[i+1]=1;
  }
}

void grayToBool(int inputbit[MAXBIT], int outputbit[MAXBIT]){
  inputbit[0]=outputbit[0];

  for(int i=0;i<MAXBIT-1;i++){
    if(inputbit[i+1]==outputbit[i]) outputbit[i+1]=0;
    else outputbit[i+1]=1;
  }
}

void display(int outputbit[MAXBIT]){
  for(int i=0;i<MAXBIT;i++)
    printf("%d",outputbit[i]);
  printf("\n");
}
