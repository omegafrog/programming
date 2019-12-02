#include<stdio.h>
#include<string.h>
#define MAXLEN 100
#define KNUM 13

void caesar(char [],char [],int );

int main(){
  char input[MAXLEN];
  char output[MAXLEN];
  fgets(input, 95, stdin);
  int len=strlen(input);
  input[len-1]=0;

  caesar(input,output,KNUM);

  printf("%s",output);
}

void caesar(char input[MAXLEN],char output[MAXLEN],int knum){
  int len =strlen(input);
  for(int i=0;i<len;i++){
    if(input[i]>=65&&input[i]<=90){ // big alpabet
      if(input[i]>90-knum)
	output[i]=65+knum-(91-input[i]);
      else output[i]=input[i]+knum;
    }
    else if(input[i]>=97&&input[i]<=122){ //small alpabet
      if(input[i]>122-knum)
	output[i]=97+knum-(123-input[i]);
      else  output[i]=input[i]+knum;
    }
    else output[i]=input[i];
  }
}

  

     
