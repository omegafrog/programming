#include<stdio.h>
#include<stdlib.h>

#include"singlelist.h"

SListNode* insert_first(SListNode *head, int value){ // first node==SListNode head
  SListNode* p;
  p=(SListNode*)(malloc(sizeof(SListNode)));
  p->item=value;
  p->next=head;
  head=p;
  return head;
}

SListNode* insert(SListNode *head, SListNode *pre, element value){
  SListNode* p;
  p=(SListNode*)malloc(sizeof(SListNode));
  p->item=value;
  p->next=pre->next;
  pre->next=p->next;
  return head;
}

SListNode* delete_first(SListNode *head){
  SListNode* remove;
  remove=head;
  head=remove->next;
  free(remove);
  return head;
}

SListNode* delete(SListNode *head, SListNode *pre){
  SListNode* remove;
  remove=pre->next;
  pre->next=remove->next;
  free(remove);
  return head;
}
void print_list(SListNode *head){
  for(SListNode* p=head;p!=NULL;p=p->next){
    printf("%d->",p->item);
  }
  printf("NULL\n");
}

