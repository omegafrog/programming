#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 10

typedef int element;
typedef struct typeQueue{
    int front,rear;
    element data[MAX_QUEUE_SIZE];
}typeQueue;

void init_queue(typeQueue *q){
    q->front=-1;
    q->rear=-1;
}

int is_empty(typeQueue *q){
    return (q->front==q->rear);
}

int is_full(typeQueue *q){
    return (q->rear==MAX_QUEUE_SIZE-1);
}

void enqueue(typeQueue *q, element item){
    if(is_full(q)){
        fprintf(stderr,"stack is full.\n");
        exit(1);
    }
    else
        q->data[++q->rear]=item;
}

element dequeue(typeQueue *q){
    if(is_empty(q)){
        fprintf(stderr,"stack is empty\n");
        exit(1);
    }
    else
        return q->data[++q->front];
}

element peek(typeQueue *q){
    if(is_empty(q)){
        fprintf(stderr,"stack is empty.\n");
        exit(1);
    }
    else
    return q->data[q->front+1];
}

void queue_print(typeQueue *q){
    for (int i = 0; i < MAX_QUEUE_SIZE; i++)
    {
        if (i<=q->front||i>q->rear)
        {
            printf("   | ");
        }
        else
        {
            printf("%d | ", q->data[i]);   
        }
    }
        printf("\n");
}

int main(){
    int item = 0;
    typeQueue q;

    init_queue(&q);

    enqueue(&q,10); queue_print(&q);
    enqueue(&q,20); queue_print(&q);
    enqueue(&q,30); queue_print(&q);
    enqueue(&q,40); queue_print(&q);

    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);
}