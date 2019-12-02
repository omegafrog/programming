#include<stdio.h>
#include "singlelist.h"

SListNode* search_list(SListNode *head, element x){
  SListNode *p=head;

  while(!p==NULL){
    if(p->item==x) return p;
    p=p->next;
  }
  return NULL;
}

    
