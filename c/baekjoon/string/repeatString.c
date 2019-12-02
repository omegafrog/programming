#include<stdio.h>
#include<malloc.h>
#include<string.h>

int repeatStr(char**);
void show(int, char* );

int main(){
  int count;//number of excute
  
  scanf("%d",&count);

  int repeatCount[count];//memory to save R
  char **p;

  p = (char **)malloc(sizeof(char*)*count);
  
  for(int i=0;i<count;i++)
    repeatCount[i]=repeatStr(p+i);
  for(int i=0;i<count;i++)
    show(repeatCount[i],*(p+i));
}

int repeatStr(char **p ){
  *p = (char*)malloc(sizeof(char)*21);
  
  int num;//R

  scanf("%d",&num);
  getchar();
  scanf("%s",*p);
  return num;
  
}
      
void show(int num, char *p){
  int x=0;
  while(*(p+x)!=0){
    for(int i=0;i<num;i++){
      printf("%c",*(p+x));
    } x++;
  }
  printf("\n");
}
