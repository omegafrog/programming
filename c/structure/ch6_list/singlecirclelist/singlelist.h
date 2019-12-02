#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int element;
typedef struct SListNode{
  element item;
  struct SListNode *next; 
}SListNode;

SListNode* insert_first(SListNode *head, element data);
SListNode* insert(SListNode *head, SListNode *pre, element value);
SListNode* delete_first(SListNode *head);
SListNode* delete(SListNode *head, SListNode *pre);

void print_list(SListNode *head);

#endif



