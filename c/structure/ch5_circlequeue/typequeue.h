#ifndef TYPE_Q
#define TYPE_Q

#define MAX_QUEUE_SIZE 5  //first index of queue is always empty.


typedef int element;

//front=index of first data -1
//rear=index of last data

typedef struct{
  element data[MAX_QUEUE_SIZE];
  int front, rear;
}QueueType;

void error(char *message);
void init_queue(QueueType *q);
int is_full(QueueType *q);
int  is_empty(QueueType *q);
void queue_print(QueueType *q);
void enqueue(QueueType *q, element item);
element dequeue(QueueType *q);

#endif
