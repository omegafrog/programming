// 선형큐이다.
#ifndef __LQUEUE_H__
#define __LQUEUE_H__



#define MAX_VERTEX 50

#define MAX_QUEUE_SIZE 2*MAX_VERTEX

struct edge{
    int u,v; // start, end vertex.
    int weight; // weight.
};

typedef struct{
    struct edge link;
    int weight;
} element;

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
element dequeue_min(queue* Q);
// print_queue
// void print_queue(queue* Q);

#endif