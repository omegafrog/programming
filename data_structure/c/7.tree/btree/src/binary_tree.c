#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "defType.h"
#include "binary_tree.h"
#include "stackType.h"
#include "TypeCQueue.h"

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

void preorder(bnode* root){
    if(root==NULL) return;
    
    else{
        printf(" [%d] ",root->data); //V
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(bnode* root){
    if(root==NULL) return;
    else{
        inorder(root->left);
        printf(" [%d] ",root->data);
        inorder(root->right);
    }
}

void postorder(bnode* root){
    if(root==NULL) return;
    else{
        postorder(root->left);
        postorder(root->right);
        printf(" [%d] ",root->data);
    }
}

void preorder_iter(bnode* root){
    stackType* stack=new_stack();
    if(root==NULL) return;
    else{
        while(1){
            for(;root;root=root->left){
                printf(" [%d] ",root->data);
                push(stack,root);
            }
            root=pop(stack);
            if(!root) break;
            root=root->right;
        }
    }
}

void level_order(bnode* root){
    cqueue* Q=new_CQueue();
    
    enqueue(Q,root);
    while(!Q_is_empty(Q)){
        root=dequeue(Q);
        printf(" [%d] ",root->data);
        if(root->left!=NULL)enqueue(Q,root->left);
        if(root->right!=NULL)enqueue(Q,root->right);
    }
}

int get_node_count(bnode* root){
    
    //자식노드2개 + 자기자신(root)
    if(root!=NULL) return 1+get_node_count(root->left)+get_node_count(root->right);
    else return 0;
    
}

int get_leaf_count(bnode* root){
    
    int leaf_count=0;
    //root==NULL인 경우는 leaf_count를 그대로 반환하기때문에 문제가안된다.
    if(root!=NULL){
        leaf_count=get_leaf_count(root->left)+get_leaf_count(root->right);  
        if(root->left==NULL&&root->right==NULL)
            return 1;
    }
    
    return leaf_count;
}

int get_height(bnode* root){
    //마찬가지로 root==NULL인 경우 height를 그대로 반환(0)이라서 문제 x
    int height=0;
    if(root!=NULL)
        switch(get_height(root->left)>get_height(root->right)){
            case 1:
                height=get_height(root->left)+1;
                break;
            case 0:
                height=get_height(root->right)+1;
                break;
        }
    
    return height;
}

int isbalanced(bnode* root){
    //indicator tree is balanced or not.
    int balanced=1;
    //root is not null
    if(root!=NULL){
        //get gap between root's left subtree and right subtree
        int gap=abs(get_height(root->right)-get_height(root->left));
        //gap is bigger than 1, this tree is nonbalanced tree.
        //change balanced variance to 0
        if(gap>1) balanced=0;
        // recursively execute function with subtrees as argument.
        // if left or right subtree is nonbalanced, min val is 0,
        // but left and right subtree is both balanced, min val is always 1.
        else balanced=MIN(isbalanced(root->left),isbalanced(root->right));
    }
    return balanced;
}

void get_SmallNode(bnode* root, int value){
    if(root!=NULL){ //LRV , inorder
        //recursively execute function with left subtree as argument.
        get_SmallNode(root->left,value);
        //if node has smaller data than argument "value", print this node's value.
        if(value>root->data) printf("%d보다 작은 노드: %d\n",value, root->data);
        //recursively execute function with right subtree as argument.
        get_SmallNode(root->right,value);
    }
}

int get_NumOfOnlyChildNode(bnode* root){
    int ChildNodeNum=0;
    if(root!=NULL){
        if((root->right==NULL&&root->left!=NULL)||(root->right!=NULL&&root->left==NULL)) ChildNodeNum++;
        ChildNodeNum+=get_NumOfOnlyChildNode(root->left)+get_NumOfOnlyChildNode(root->right);
    }
    return ChildNodeNum;
}
int get_minVal(bnode* root,int min){
   if(root!=NULL){
       min=(min>root->data)?root->data:min;
       min=get_minVal(root->left,min);
       min=get_minVal(root->right,min);
   }
    return min;
}
int get_maxVal(bnode* root,int max){
     if(root!=NULL){
       max=(max<root->data)?root->data:max;
       max=get_maxVal(root->left,max);
       max=get_maxVal(root->right,max);
   }
    return max;
}
void get_MinMax(bnode* root){
    int minVal=get_minVal(root,INT_MAX);
    int maxVal=get_maxVal(root,INT_MIN);
    
    printf("minval : %d\nmaxVal : %d\n",minVal,maxVal);
}


