#include <stdio.h>
#include <stdlib.h>

#include "defType.h"
#include "TypeCQueue.h"

void error(char* message)
{
    fprintf(stderr,"%s\n",message);
    exit(1);
}

cqueue* new_CQueue(){
    cqueue* Q=(cqueue*)malloc(sizeof(Q));
    init_cQueue(Q);
    return Q;
}
void init_cQueue(cqueue* q)
{
    q->front=q->rear=0;
}

int Q_is_empty(cqueue* q)
{
    return q->front==q->rear;
}

int Q_is_full(cqueue* q)
{
    return (q->rear+1)%MAX_QUEUE_SIZE==q->front;
}

void enqueue(cqueue* q, element item)
{
    if(Q_is_full(q))
    {
        error("queue is full.");
    }
    else
    {
        // q->data[++q->rear]=item;
        int i=q->rear;
        i=(i+1)%MAX_QUEUE_SIZE;
        q->rear=i;
        q->data[i]=item;
    }
}

element dequeue(cqueue* q)
{
    if(Q_is_empty(q))
    {
        error("queue is empty.");
    }
    else
    {
        // return q->data[--q->front];
        int i=q->front;
        i=(i+1)%MAX_QUEUE_SIZE;
        q->front=i;
        return q->data[i];
    }
    
}

void print_cQueue(cqueue* q)
{
    if(Q_is_empty(q))
    {
        error("queue is empty.");
    }
    else
    {
       //  for(int i=0;i<MAX_QUEUE_SIZE;i++)
       // {
       //     if(i<=q->front||i>q->rear)
       //     {
       //         printf("   | ");
       //     }
       //     else
       //     {
       //         printf("%d | ",q->data[i]);
       //     }
       // }
        int i=(q->front+1)%MAX_QUEUE_SIZE;
        for(i;i!=q->rear;i=(i+1)%MAX_QUEUE_SIZE)
        {
            // printf("%d\n",i);
            printf("%d | ",q->data[i]);
        }
        printf("%d | ", q->data[q->rear]);
        printf("\n");
    }
}
