#include<stdio.h>
#include<malloc.h>

int main(){
  char *p1;
  int i=0;
  int count =1;
  p1 = (char *)malloc(sizeof(char)*1000010);
  fgets(p1,1000005,stdin);

  if(*p1==' '){
    i=1;
  }
  else i=0;
  
  
  while(*(p1+i)!=0){
    if(*(p1+i)==' '){
	  count++;
	  printf("%d|",*(p1+i));
    }
    i++;   
  }
  if(*(p1+i-2)==' ')
    count--;
  printf("%d",count);
}
