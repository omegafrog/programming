#include <stdio.h>
#include <stdlib.h>

#include "TypeLQueue.h"

int main()
{
    queue* q1=(queue*)malloc(sizeof(queue));
    init_queue(q1);

    enqueue(q1, 10); print_queue(q1);
    enqueue(q1, 20); print_queue(q1);
    enqueue(q1, 30); print_queue(q1);
  
   
    dequeue(q1); print_queue(q1);
    dequeue(q1); print_queue(q1);
    dequeue(q1); print_queue(q1);
    return 0;
}