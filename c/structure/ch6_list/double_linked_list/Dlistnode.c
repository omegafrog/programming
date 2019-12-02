#include<stdio.h>
#include<malloc.h>
#include"Dlistnode.h"

void dinsert(Dlistnode *pre, element data){
  Dlistnode *append;
  append=(Dlistnode*)malloc(sizeof(Dlistnode));
  append->data=data;
  append->next=pre->next;
  append->pre=pre;
  pre->next->pre=append;
  pre->next=append;
}

element ddelete(Dlistnode *head, Dlistnode *removed){
  if(removed==NULL) return 0;
  removed->pre->next=removed->next;
  removed->next->pre=removed->pre;
  free(removed);
}

void init(Dlistnode *head){
  head->next=head;
  head->pre=head;
}

void print_dlist(Dlistnode *head){
  Dlistnode *p;
  for(p=head->next;p!=head;p=p->next){
    printf("<-| |%d| |-> ", p->data);
  }
  printf("\n");
}
