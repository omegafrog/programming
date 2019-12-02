#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define EXPO_START 1
#define FRAT_START 9

int* p_float;
int* p_bool=NULL;

void changeDec_ud( int,int);//input bit and decnum(upper dot), give bool to p_bool, 소수점위부분
void changeDec_dd(double,int);//소수점아래부분
int put_bit(int);
void changeFloat(double,int);
void display(int*);
int power(int,int);

int main(){
  double decnum;
  p_float=(int*)malloc(sizeof(int)*32);
  printf("dec:");
  scanf("%lf",&decnum);
  
  int decnum_ud=decnum;
  double decnum_dd=decnum-decnum_ud;

  if(decnum>1){
    int bit=0;
    bit = put_bit(decnum_ud);

  
    changeDec_ud(decnum_ud, bit);
    changeDec_dd(decnum_dd,bit);
  
    changeFloat(decnum,bit);

    display(p_float);
  }
  else{
    printf("sorry, does not work yet");
    return 0;
  }
    
}

int put_bit(int decnum) {  
  int i = 0;
  int bit=0;
  
  for (;;) {
    if (decnum ==0) {
      bit= 1;
      break;
    }
    else if ((power(2, i) <= decnum) && (power(2, i + 1) >= decnum)) {
      bit= i + 1;
      break;
    }
    else
      i++;
  }
  return bit;
}


void changeFloat(double decnum,int bit){
  if(decnum>0) *(p_float)=0;
  else *(p_float)=1;

  bit+=127-1;
  
  for(int i=8;i>0;i--)
    *(p_float+i)=0;
  for (int i=1;i<9;i++) {
    if(bit%2==1){
      bit=bit/2;
      *(p_float+i)=1;
    }
    else
      bit=bit/2;    
  }
  
  //memcpy(p_float+FRAT_START, p_bool+1,23);
  for(int i=1;i<24;i++){
    *(p_float+FRAT_START+i-1)=*(p_bool+i);
  }
}


void changeDec_ud(int decnum_ud, int bit) {
  p_bool=(int*)malloc(sizeof(int)*24);
  for(int i=0;i<24;i++)
    *(p_bool+i)=0;
  for (int i=0;i<bit;i++) {
    if(decnum_ud%2==1){
      decnum_ud=decnum_ud/2;
      *(p_bool+i)=1;
    }
    else
      decnum_ud=decnum_ud/2;
  }    
}


void changeDec_dd(double decnum_dd,int bit){
  for(int i=bit;i<24;i++){
    if(decnum_dd*2>1){
      decnum_dd*=2;
      decnum_dd-=1;
      *(p_bool+i)=1;
    }
    else if(decnum_dd*2<1){
      *(p_bool+i)=0;
      decnum_dd*=2;
    }
    else{
      *(p_bool+i)=1;
      break;
    }
  }
}

void display(int* p_float){
  printf("%d",*(p_float));
  for(int i=1;i<EXPO_START;i++){
    printf("%d",*(p_float+i));
    if(i==EXPO_START-1)
      printf("%d",' ');
  }
  
  for(int i=EXPO_START;i<32;i++)
    printf("%d",*(p_float+i));
}
 
      
int power(int x, int n) {
  int res = 1;
  for (int i = 0; i<n; i++) {
    res *= x;
  }
  return res;
}
