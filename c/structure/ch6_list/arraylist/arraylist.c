#include<stdio.h>
#include<stdlib.h>

#include"arraylist.h"

void error(char *message){
  fprintf(stderr,"%s\n",message);
  exit(1);
}

void init(ArrayListType *L){
  L->size=0;
}

int is_empty(ArrayListType *L){
  return L->size==0;
}

int is_full(ArrayListType *L){
  return L->size==MAX_LIST_SIZE;
}

element get_entry(ArrayListType *L, int pos){
  if(pos<0||pos>=L->size)
    error("position error.");
  return L->array[pos];
}

void print_list(ArrayListType *L){
  int i;
  for(i=0;i<L->size;i++)
    printf("%d",L->array[i]);
  printf("\n");
}

void insert_last(ArrayListType *L, element item){
  if(L->size==MAX_LIST_SIZE)
    error("stackoverflow.");
  L->array[L->size++]=item;
}

void insert(ArrayListType *L, int pos, element item){
  if(!is_full(L)&&pos>=0&&(pos<=L->size)){
    for(int i=L->size;i>pos;i--)
      L->array[i]=L->array[i-1];
    L->array[pos]=item;
    L->size=L->size+1;//L->size++ ==> bug why?
  }
  else{
    error("position error."); exit(1);}
}

element delete(ArrayListType *L, int pos){
  element item;
  item=L->array[pos];
  if(!is_empty(L)&&pos>=0&&pos<L->size){
    for(int i=pos+1;i<L->size;i++)
      L->array[i-1]=L->array[i];
    L->size--;
    return item;
  }
  else error("wrong position."); exit(1);
}
