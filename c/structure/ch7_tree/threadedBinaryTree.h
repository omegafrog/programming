#ifndef THRBNTREE_H
#define THRBNTREE_H

typedef struct threadBinaryTree{
  int data;
  struct threadBinaryTree *left, *right;
  int is_thread;
}thrBnTree;

thrBnTree* find_successor(thrBnTree* p);

thrBnTree* thread_inorder(thrBnTree* t);

#endif
    
