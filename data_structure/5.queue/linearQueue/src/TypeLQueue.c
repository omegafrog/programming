// 선형큐이다.
#include <stdio.h>
#include <stdlib.h>

#include "TypeLQueue.h"

void init_queue(queue* Q)
{
    Q->front=Q->rear=-1;
}

int is_empty(queue* Q)
{
    return Q->front==Q->rear;
}

int is_full(queue* Q)
{
    return Q->rear==MAX_QUEUE_SIZE-1;
}

void enqueue(queue* Q, element item)
{
    if(!is_full(Q))
    {
        Q->data[++Q->rear]=item;        
    }
    else error("queue is full.");
}

element dequeue(queue* Q)
{
    if(!is_empty(Q))
    {
        return Q->data[++Q->front];        
    }
    else error("queue is empty.");
}

void error(char* message)
{
    fprintf(stderr,"%s\n",message);
    exit(1);
}

void print_queue(queue* Q)
{
    if(is_empty(Q)) error("queue is empty.");
    
   for(int i=0;i<MAX_QUEUE_SIZE;i++)
   {
       if(i<=Q->front||i>Q->rear)
       {
           printf("   | ");
       }
       else
       {
           printf("%d | ",Q->data[i]);
       }
   }
    printf("\n");
}