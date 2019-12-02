#include<stdio.h>
#include"binarySearchTree.h"

bnSearchTree* search(bnSearchTree* t, int key){
  if(t==NULL) return NULL;
  if(t->item.key==key) return t;
  else if(t->item.key>key) search(t->left,key);
  else search(t->right,key);
}

bnSearchTree* insert(bnSearchTree* t, element item){
  if(t==NULL) return new_node(item);
  if(t->item.key>item.key) t->left=insert(t->left, item);
  else if(t->item.key<item.key) t->right=insert(t->right, item);

  return t;
}

bnSearchTree* new_node(element item){
  bnSearchTree* p=NULL;
  p->item=item;
  p->left=p->right=NULL;
  return p;
}

bnSearchTree* delete(bnSearchTree* root, int key){
  if(root==NULL) return root;
  if(root->item.key>key){
    delete(root->left,key);
  }
  else if(root->item.key<key){
    delete(root->right,key);
  }
  else{
    if(root->left==NULL){
      bnSearchTree* temp=root->right;
      free(root);
      return temp;
    }else if(root->right==NULL){
      bnSearchTree* temp=root->left;
      free(root);
      return temp;
    }
  bnSearchTree* temp=min_value_node(root->right);
  root->item=temp->item;
  root->right=delete(root->right,temp->item.key);
  }
  return root;
}
bnSearchTree* min_value_node(bnSearchTree* node){
  bnSearchTree* current =node;
  while(current->left!=NULL)
    current=current->left;
  return current;
}
  
