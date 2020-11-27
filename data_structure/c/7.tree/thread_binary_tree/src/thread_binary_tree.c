#include <stdio.h>
#include <stdlib.h>

#include "thread_binary_tree.h"

thrNode* find_successor(thrNode* root){
    thrNode* rightNode=root->right;
    if(rightNode==NULL||root->is_thread){
        return rightNode;
    }
    
   // while(1){
   //     rightNode=rightNode->left;
   // }
    while(rightNode->left!=NULL) rightNode=rightNode->left;
    return rightNode;
}

void inorder_thread(thrNode* root){
    thrNode* leftNode=root;
    
    // while(1){
    //     if(!leftNode->left) break;
    //     leftNode=leftNode->left;

    // }
    while(leftNode->left!=NULL) leftNode=leftNode->left;
    do{
        printf(" [%d] ",leftNode->data);
        leftNode=find_successor(leftNode);
    }while(leftNode);
    
}