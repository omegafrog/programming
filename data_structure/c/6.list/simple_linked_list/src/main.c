#include <stdio.h>
#include <stdlib.h>

#include "simple_linked_list.h"

int main(){
    ListNode* list1=NULL;
    
    for(int i=0;i<5;i++){
        list1=insert_first(list1,i);
        print_list(list1);
    }
    for(int i=0;i<5;i++){
        list1=delete(list1,0);
        print_list(list1);
    }
    return 0;
    
}