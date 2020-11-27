#include <stdio.h>
#include <stdlib.h>

#include "binary_search_tree.h"

bsNode* search(bsNode* root, int key){
    //탐색에 성공한 노드를 저장하는 변수.
    bsNode* returnNode =NULL;
    if(root!=NULL){
        // 찾으려는 노드의 키가 현재 노드의 키보다 크다면
        if(root->data.key<key) returnNode=search(root->right,key);
        // 찾으려는 노드의 키가 현재 노드의 키보다 작다면
        else if(root->data.key>key) returnNode=search(root->left,key);
        // 찾으려는 노드의 키와 현재 노드의 키가 같다면
        else returnNode=root;
    }
    return returnNode;
}

bsNode* search_iter(bsNode* root, int key){
    bsNode* returnNode = root;
    while(returnNode!=NULL){
        if(returnNode->data.key<key) returnNode=returnNode->right;
        else if(returnNode->data.key>key) returnNode=returnNode->left;
        else break;
    }
    
    return returnNode;
}

bsNode* insert_node(bsNode* root, int key, int item){
    if(root==NULL){
        bsNode* newNode=(bsNode*)malloc(sizeof(bsNode));
        
        element tmpdata;
        tmpdata.item=item;
        tmpdata.key=key;
        newNode->data=tmpdata;
        newNode->left=newNode->right=NULL;
        return newNode;
    }
    
    if(root->data.key>key) root->left=insert_node(root->left,key,item);
    else if(root->data.key<key) root->right=insert_node(root->right,key,item);
    else fprintf(stderr, "같은 키값을 가진 노드는 추가할 수 없습니다.\n");
    
    return root;
}
    
void inorder(bsNode* root){
    if(root==NULL) return;
    else{
        inorder(root->left);
        printf(" [%d] ",root->data.item);
        inorder(root->right);
    }
}
// bsNode* create_bstree(element data){
//     bsNode* root=(bsNode*)malloc(sizeof(bsNode));
    
//     root->data=data;
//     root->left=root->right=NULL;
    
//     return root;
// }
// void interface(char* exp){
//     printf("binary search tree searching example.\n");
//     int choice;
//     printf("=====================================");
//     printf("1.search(recursive) 2.search(iter) 3.create_bstree(create root) 4.")
// }

bsNode* delete_node(bsNode* root, int key){
    // root==NULL return root
    if(root==NULL) return root;
    // root node's key is smaller than node's key you want to delete
    // that node is in root's right sub tree
    if(root->data.key<key) root->right=delete_node(root->right,key);
    // root node's key is bigger than node's key you want to delete
    // that node is in root's left sub tree
    else if(root->data.key>key) root->left=delete_node(root->left,key);
    // you find node you want to delete
    else{
        // case 1 : this node is terminal node(단말 노드)
        // just delete this node
        if(root->left==NULL&&root->right==NULL) {free(root); return NULL;}
        // case 2 : node has one child node
        else if(root->left==NULL||root->right==NULL){
            // has right child node
            if(root->left==NULL){
                // exchange root node to child node
                bsNode* tmp=root->right;
                free(root);
                return tmp;
            }
            // has left child node
            else{
                // exchange root node to child node
                bsNode* tmp=root->left;
                free(root);
                return tmp;
            }
        }
        // case 3 : node have two child nodes.
        else{
            // make tmp for successor node
            bsNode* tmp = find_successor(root->right);
            // exchange tmp to root
            root->data=tmp->data;
            // delete successor node
            root->right=delete_node(root->right,tmp->data.key);
            return root;
        }
    }
    
    return root;
}

bsNode* find_successor(bsNode* root){
    bsNode* now = root;
    while(now->left!=NULL){
        now=now->left;
    }
    return now;
}