#include <stdio.h>
#include <stdlib.h>

#include "stackType.h"

int main(){
    stackType* s=new_stack();
    print_stack(s);
    for(int i=0;i<3;i++)
    {
        push(s,i);
        print_stack(s);
    }
    for(int i=0;i<3;i++)
    {
        pop(s);
        print_stack(s);
    }
    push(s,100);
    printf("%d",peek_stack(s));
}