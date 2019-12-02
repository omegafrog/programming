#ifndef BNSRCTREE_H
#define BNSRCTREE_H

typedef struct element{
  int key;
}element;

typedef struct binarySearchTree{
  element item;
  struct binarySearchTree *left,  *right;
}bnSearchTree;

bnSearchTree* search(bnSearchTree* t, int key);
bnSearchTree* insert(bnSearchTree* t, element item);
bnSearchTree* new_node(element);
bnSearchTree* delete(bnSearchTree* t, int key);
bnSearchTree* min_value_node(bnSearchTree* root);
#endif
