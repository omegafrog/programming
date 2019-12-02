#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_ROW 4
#define MAX_COL 4

int (*matrix)[MAX_COL];
int (*make_REF())[MAX_COL];
int (*make_RREF())[MAX_COL];
void get_matrix();
void display_matrix(int (*p)[MAX_COL]);

int main(){
  int choose;
  int (*pREF)[MAX_COL]=NULL;
  int (*pRREF)[MAX_COL]=NULL;

  printf("matrix:\n");
  get_matrix();
  for(;;){
    display_matrix(matrix);
    printf("choose mode:1.make REF.\n2.make RREF.\n3.initialize.\n");
    if(choose==1){
      pREF=make_REF();
      display_matrix(pREF);
    }
    else if(choose==2){
      pRREF=make_RREF();
      display_matrix(pRREF);
    }
    else if(choose==3){
      get_matrix();
    }
  }
}

void get_matrix(){
  char temp[2000];
  fgets(temp,1900,stdin);
  
  for(int i=0;i<MAX_ROW;i++){
    for(int j=0;j<MAX_COL;j++)
      (*(matrix+i))[j]=atoi(strtok(temp, " "));
  }
}

int (*make_REF())[MAX_COL]{
  
    

  
