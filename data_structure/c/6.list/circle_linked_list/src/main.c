#include <stdio.h>
#include <stdlib.h>
// 삭제함수 쥰내게귀찮아요 안만들래요

#include "circle_linked_list.h"

int main(){
    ListNode* list1;
    list1=init_list(list1);
    
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