#include<stdio.h>
#include<stdlib.h>

#define MAX_DEQUE_SIZE 10
typedef int element;
typedef struct {
    element data[MAX_DEQUE_SIZE];
    int front;
    int rear;
}typedeque;

void init_deque(typedeque *q){
    q->front=q->rear=0;
}

int is_empty(typedeque *q){
    return(q->front==q->rear);
}

int is_full(typedeque *q){
    return((q->rear+1)%MAX_DEQUE_SIZE==q->front);
}

void add_front(typedeque *q,element item){
    if(is_full(q)){
        fprintf(stderr,"deque is full.\n");
        exit(1);
    }
    q->data[q->front]=item;
    q->front = (q->front-1+MAX_DEQUE_SIZE)%MAX_DEQUE_SIZE;
    
}

void add_rear(typedeque *q, element item){
    if(is_full(q)){
        fprintf(stderr,"deque is full.\n");
        exit(1);
    }
    q->rear=(q->rear+1)%MAX_DEQUE_SIZE;
    q->data[q->rear]=item;
}

element delete_front(typedeque *q){
    if(is_empty(q)){
        fprintf(stderr,"deque is empty.\n");
        exit(1);
    }
    q->front = (q->front+1)%MAX_DEQUE_SIZE;
    return q->data[q->front];
}

element delete_rear(typedeque *q){
    if(is_empty(q)){
        fprintf(stderr, "deque is empty.\n");
        exit(1);
    }
    q->rear = (q->rear-1+MAX_DEQUE_SIZE)%MAX_DEQUE_SIZE;
    return q->data[q->rear];
}

element get_front(typedeque *q){
    if(is_empty(q)){
        fprintf(stderr,"deque is empty.\n");
        exit(1);
    }
    return q->data[(q->front+1)%MAX_DEQUE_SIZE];
}

element get_rear(typedeque *q){
    if(is_empty(q)){
        fprintf(stderr,"deque is empty.\n");
        exit(1);
    }
    return q->data[q->rear];

}


void deque_print(typedeque *q){
    printf("QUEUE(front=%d rear=%d) =   ",q->front,q->rear);
    if(!is_empty(q)){
        int i=q->front;
        do{
            i=(i+1)%MAX_DEQUE_SIZE;
            printf("%d | ",q->data[i]);
            if(i==q->rear) break;
        }while(i!=q->front);
    }
    printf("\n");
}

int main(){
    typedeque queue;

    init_deque(&queue);
    for(int i=0;i<3;i++){
        add_front(&queue, i);
        deque_print(&queue);
    }
    for(int i=0;i<3;i++){
        delete_rear(&queue);
        deque_print(&queue);
    }
}