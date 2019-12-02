#ifndef COMPLETE_BINARY_TREE_H
#define COMPLETE_BINARY_TREE_H

typedef int element;
typedef struct completeBinaryTree{
  element item;
  struct completeBinaryTree *left, *right;
}compBnTree;

//traversal
//preorder 
void VLR(compBnTree *root);
//inorder
void LVR(compBnTree *root);
//postorder
void LRV(compBnTree *root);

void push(compBnTree* p);
compBnTree* pop();

void VLR_iter(compBnTree* root);
void level_order(compBnTree* root);

int get_node_count(compBnTree* node);
#endif

