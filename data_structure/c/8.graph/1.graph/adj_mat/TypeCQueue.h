#ifndef __TYPECQUEUE_H__
#define __TYPECQUEUE_H__

#define element int
#define MAX_QUEUE_SIZE 10

typedef struct TypeCQueue{
    element data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} cqueue;

void error(char* message);
void init_cQueue(cqueue* q);
int is_empty(cqueue* q);
int is_full(cqueue* q);
void enqueue(cqueue* q, element item);
element dequeue(cqueue* q);
void print_cQueue(cqueue* q);

#endif