#ifndef __BST_H__
#define __BST_H__

// element 정의
typedef struct element{
    int key;
    int item;
}element;

// 이진 탐색 트리 정의
typedef struct binary_search_tree{
    element data;
    struct binary_search_tree *left, *right;
} bsNode;

// recursive search
bsNode* search(bsNode* root, int key);
// search_iter
bsNode* search_iter(bsNode* root, int key);
// interface
// void interface(char* exp);
// insert_node
bsNode* insert_node(bsNode* root, int key, int item);
// create new root node
// bsNode* create_bstree(element data);
// void print_tree(bsNode* root);
void inorder(bsNode* root);
bsNode* find_successor(bsNode* root);
bsNode* delete_node(bsNode* root, int key);
#endif