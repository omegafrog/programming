#include <stdio.h>
#include <stdlib.h>

#include "binary_search_tree.h"

int main(){
    bsNode* root=NULL;
    root=insert_node(root,6,1);
    root=insert_node(root,4,2);
    root=insert_node(root,9,3);
    root=insert_node(root,2,4);
    root=insert_node(root,5,5);
    root=insert_node(root,7,6);
    root=insert_node(root,10,7);
    root=insert_node(root,1,8);
    root=insert_node(root,3,9);
    root=insert_node(root,8,10);
    root=insert_node(root,11,11);
    
    int choice=0;
    printf("찾을 키 값을 입력하시오:");
    scanf("%d",&choice);
    printf("%d : %d\n",search(root,choice)->data.key,search(root,choice)->data.item);
    printf("%d : %d\n",search_iter(root,choice)->data.key,search(root,choice)->data.item);
    inorder(root);
    
    printf("good\n");
    root=delete_node(root,11);
    inorder(root);
    printf("\n");
    root=delete_node(root,4);
    inorder(root);
    printf("\n");
    
    root=delete_node(root,2);
    inorder(root);
    printf("\n");
    
}