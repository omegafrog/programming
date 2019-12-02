#include<stdio.h>
#define BIGNUM 4 //0~9999
void add(int [][4], int [][4], int[][4]);
//void abstract(int[][],int[][],int[][]);
void decToBCD(int[][4], int);

int main(){
  int boolbit1[BIGNUM][4]={0,};
  int boolbit2[BIGNUM][4]={0,};
  int resultbit[BIGNUM][4]={0,};

  
  int num1,num2;
  printf("num1:");
  scanf("%d",&num1);

  printf("num2:");
  scanf("%d",&num2);

  getchar();
  
  char operator;
  printf("operator:");
  scanf("%c",&operator);


  decToBCD(boolbit1,num1);
  decToBCD(boolbit2,num2);
  
  switch(operator){
  case '+':
    add(boolbit1,boolbit2,resultbit);
    printf("res:");
    for(int i=0;i<4;i++){
      for(int x=0;x<BIGNUM;x++)
	printf("%d",resultbit[i][x]);
      printf(" ");
    }
    break;
    /*  case '-':
    abstract(boolbit1,boolbit2,resultbit);
    printf("res:");
    for(int i=0;i<4;i++){
      for(int x=0;x<BIGNUM;x++)
	printf("%d",resultbit[i][x]);
    }
    break;*/
  }
}

void add(int boolbit1[BIGNUM][4], int boolbit2[BIGNUM][4], int resultbit[BIGNUM][4]){
  int carrybit[4]={0,1,1,0};
  int incarry=0;
  int outcarry=0;
  for(int i=BIGNUM-1;i>=0;i--){
    if(outcarry==1) boolbit1[i][3]+=1,outcarry=0;
    for(int x=3;x>=0;x--){
      boolbit1[i][x]+=incarry;
      if(boolbit1[i][x]+boolbit2[i][x]==0) resultbit[i][x]=0, incarry=0;
      else if(boolbit1[i][x]+boolbit2[i][x]==1) resultbit[i][x]=1, incarry=0;
      else if(boolbit1[i][x]+boolbit2[i][x]==2) resultbit[i][x]=0, incarry=1;
      else resultbit[i][x]=1, incarry=1;
    }
    int temp=0;
    for(int y=0;y<4;y++)
      temp+=pow(2,y)*resultbit[i][3-y];
    if(temp>9){
      int tmpcarry=0;
      for(int j=3;j>=0;j--){
	resultbit[i][j]+=tmpcarry;
	if(resultbit[i][j]+carrybit[j]==0) resultbit[i][j]=0, tmpcarry=0;
	else if(resultbit[i][j]+carrybit[j]==1) resultbit[i][j]=1, tmpcarry=0;
	else if(resultbit[i][j]+carrybit[j]==2) resultbit[i][j]=0, tmpcarry=1;
	else resultbit[i][j]=1, tmpcarry=1;
      }
      outcarry=1;
    }
  }   
}

void abstract(int boolbit1[BIGNUM][4],int boolbit2[BIGNUM][4], int resultbit[BIGNUM][4]){
  int sig=0;
  for(int i=BIGNUM-1;i>=0;i--){
    for(int j-3;j>=0;j--){
      if(boolbit2[i][j]==1&&sig==0) sig=1;
      else if(sig==1) {
	if(boolbit2[i][j]==1) boolbit2[i][j]=0;
	else boolbit2[i][j]=1;
      }
    }
  }
void decToBCD(int boolbit[BIGNUM][4], int num){
  int temp[4]={0,};
  for(int i=3;i>=0;i--){
    if(num>=(int)pow(10,i)){
      temp[3-i]=num/(int)(pow(10,i));
      num-=temp[3-i]*(int)(pow(10,i));
    }
  }

  for(int i=0;i<BIGNUM;i++){
    for(int j=3;j>=0;j--){
      if (temp[i] == 1) {
	boolbit[i][j] = 1;
	break;
      }
      if (temp[i] % 2 == 1) {
	boolbit[i][j] = 1;
	temp[i] = temp[i] / 2;
      }
      else {
	boolbit[i][j] = 0;
	temp[i] = temp[i] / 2;
      }
    }
  }
}



