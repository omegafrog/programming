#ifndef Dlistnode_H
#define Dlistnode_H

typedef int element;
typedef struct Dlistnode{
  element data;
  struct Dlistnode *pre;
  struct Dlistnode *next;
}Dlistnode;


void dinsert(Dlistnode *pre, element data);
element ddelete(Dlistnode *head, Dlistnode *removed);
void init(Dlistnode *head);
void print_dlist(Dlistnode *head);
#endif
