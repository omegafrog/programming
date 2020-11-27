// 선형큐이다.
#ifndef __LQUEUE_H__
#define __LQUEUE_H__

#define MAX_QUEUE_SIZE 10

typedef int element;

typedef struct TypeQueue{
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} queue;

// print error
void error(char* message);
// initialize queue
void init_queue(queue* Q);
// is_full
int is_full(queue* Q);
// is_empty
int is_empty(queue* Q);
// enqueue
void enqueue(queue* Q, element item);
// dequeue
element dequeue(queue* Q);
// print_queue
void print_queue(queue* Q);

#endif