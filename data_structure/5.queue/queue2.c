//circlequeue

#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 10

typedef int element;

typedef struct{
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
}typeQueue;

void init_queue(typeQueue *q){
    q->front=q->rear=0;
}

int is_full(typeQueue *q){
    return ((q->rear+1)%MAX_QUEUE_SIZE==q->front);
}

int is_empty(typeQueue *q){
    return(q->front==q->rear);
}

void enqueue(typeQueue *q, element item){
    if(is_full(q)){
        fprintf(stderr,"queue is full.\n");
        exit(1);
    }
    else{
        q->data[(++q->rear)%MAX_QUEUE_SIZE]=item;
    }
}

element dequeue(typeQueue *q){
    if(is_empty(q)){
        fprintf(stderr,"queue is empty.\n");
        exit(1);
    }
    else
    {
        return q->data[(++q->front)%MAX_QUEUE_SIZE];
    }
}

void print_queue(typeQueue *q){
    printf("QUEUE(front=%d rear=%d) =   ",q->front,q->rear);
   if(!is_empty(q)){
        int i=q->front;
        do{
            i=(i+1)%MAX_QUEUE_SIZE;
            printf("%d | ",q->data[i]);
            if(i==q->rear) break;
        }while(i!=q->front);
    }
    printf("\n");
}

element peek(typeQueue *q){
    if(is_empty(q)){
        fprintf(stderr,"queue is empty\n");
        exit(1);
    }
    else{
        return q->data[(q->front+1)%MAX_QUEUE_SIZE];
    }
}

int main(){
    typeQueue q;
    init_queue(&q);

    int i=0;
    printf(" --- add data --- \n");
    while(!is_full(&q)){

        enqueue(&q,i);
        print_queue(&q);
        i++;
    }

    printf(" --- remove data --- \n");
    while(!is_empty(&q)){
        printf("data : %d\n",dequeue(&q));
        print_queue(&q);
    }
    printf("queue is empty.\n");
}