#include <stdio.h>
#include <stdlib.h>

#include "thread_binary_tree.h"


int main(){
    thrNode n1={1,NULL,NULL,1};
    thrNode n2={2,NULL,NULL,1};
    thrNode n3={3,&n1,&n2,0};
    thrNode n4={4,NULL,NULL,1};
    thrNode n5={5,NULL,NULL,0};
    thrNode n6={6,&n4, &n5, 0};
    thrNode n7={7, &n3, &n6, 0};
    thrNode* root=&n7;
    
    n1.right=&n3;
    n2.right=&n7;
    n4.right=&n6;
    
    inorder_thread(root);
}