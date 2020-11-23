// binary tree:자식노드의 개수가 최대2개인 트리.
// 왼쪽과 오른쪽이 구별된다.
#ifndef __BTREE_H__
#define __BTREE_H__




void preorder(bnode* root); //VLR
void inorder(bnode* root);  //LVR
void postorder(bnode* root);//LRV
void preorder_iter(bnode* root);
void level_order(bnode* root);
int get_node_count(bnode* root);
int get_leaf_count(bnode* root);
int get_height(bnode* root);
// check tree is balanced tree(sub tree's height difference is smaller than 2)
int isbalanced(bnode* root);
// get number of node that has data smaller than value
void get_SmallNode(bnode* root, int value);
// get number of node that has one child node.
int get_NumOfOnlyChildNode(bnode* root);
//get data of nodes has biggest or smallest data.
void get_MinMax(bnode* root);

#endif