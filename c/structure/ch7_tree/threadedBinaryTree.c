#include<stdio.h>
#include"threadedBinaryTree.h"

thrBnTree* find_successor(thrBnTree* p){
  thrBnTree*q =p->right;
  if(q==NULL||p->is_thread==1)
    return q;

  while(q->left!=NULL)q=q->left;
  return q;
}

thrBnTree* thread_inorder(thrBnTree* t){
  thrBnTree* q=t;
  while(q->left) q=q->left;
  do{
    printf("%d->",q->data);
    q=find_successor(q);
  }while(q);
}

