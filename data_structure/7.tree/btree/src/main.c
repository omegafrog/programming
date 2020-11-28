#include <stdio.h>

#include "defType.h"
#include "binary_tree.h"

int main(){
    bnode n8={5,NULL,NULL};
    bnode n7={3,&n8,NULL};
    bnode n1={1,&n7,NULL};
    bnode n2={4,&n1,NULL};
    bnode n3={16,NULL,NULL};
    bnode n4={25,NULL,NULL};
    bnode n5={20,&n3, &n4};
    bnode n6={15,&n2,&n5};
    bnode* root=&n6;
                  //15
             //4       //20
         //1       //16     //25
    //3
  //5  
      
    
    preorder(&n6);
    printf("\n");
    inorder(&n6);
    printf("\n");
    postorder(&n6);
    printf("\n");
    
    preorder_iter(root);
    printf("\n");
    level_order(root);
    printf("\n");
    printf("%d\n",get_node_count(root));
    printf("%d\n",get_leaf_count(root));
    printf("%d\n",get_height(root));
    printf("isbalanced?:%s\n",(isbalanced(root))?"true":"false");
    int inputNum=0;
    printf("값을 입력해라:");
    scanf("%d",&inputNum);
    get_SmallNode(root,inputNum);
    printf("%d\n",get_NumOfOnlyChildNode(root));
    get_MinMax(root);
}