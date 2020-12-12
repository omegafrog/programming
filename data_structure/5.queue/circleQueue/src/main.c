#include <stdio.h>
#include <stdlib.h>

#include "TypeCQueue.h"

int main()
{
    cqueue* q=(cqueue*)malloc(sizeof(cqueue));
    
    init_cQueue(q);
    
    for(int i=0;i<3;i++)
    {
        enqueue(q,10*i);
        print_cQueue(q);
    }
    
    print_cQueue(q);
    
    for(int i=0;i<3;i++)
    {
        dequeue(q);
        print_cQueue(q);
    }
    free(q);
}