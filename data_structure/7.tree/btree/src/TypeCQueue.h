#ifndef __TYPECQUEUE_H__
#define __TYPECQUEUE_H__



void error(char* message);
cqueue* new_CQueue();
void init_cQueue(cqueue* q);
int Q_is_empty(cqueue* q);
int Q_is_full(cqueue* q);
void enqueue(cqueue* q, element item);
element dequeue(cqueue* q);
void print_cQueue(cqueue* q);

#endif