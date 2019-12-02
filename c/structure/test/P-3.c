#include<stdio.h>
#include<stdlib.h>

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

void error(char *message){
  fprintf(stderr, "%s\n", message);
  exit(1);
}

void init_queue(QueueType *q){ 
  q->front=q->rear=0; 
}
  
int is_full(QueueType *q){
  return(q->front==(q->rear+1)%MAX_QUEUE_SIZE);  //q->front+1==q->rear, if rear>MAX_QUEUE_SIZE, rear+1==0 ex)1->2->3->4->5->1->...
}

int is_empty(QueueType *q){
  return(q->front==q->rear); 
}

void queue_print(QueueType *q){ 
  if(is_empty(q)) printf("queue is empty.\n");
  else{
    printf("Queue(front=%d rear=%d) = ", q->front, q->rear);
    int i=q->front;  //i==q->front
    while(1){
      i=(i+1)%MAX_QUEUE_SIZE; // ex)1->2->3->4->5->1->...
      printf("%d|",q->data[i]); 
      if(i==q->rear) break; // first+1 to rear
    }
    printf("\n");
  }
}


void enqueue(QueueType *q, element item){ 
  if(is_full(q)) error("queue is full.\n");
  else{
    //printf("enqueue:");
    q->rear=(q->rear+1)%MAX_QUEUE_SIZE;  //q->rear++ ex)1->2->3->4->5->1->...
    q->data[q->rear]=item;               
  }
}

element dequeue(QueueType *q){ //FIFO
  if(is_empty(q)) error("queue is empty.\n");
  else{
    //printf("dequeue:");
    q->front=(q->front+1)%MAX_QUEUE_SIZE;   //FIFO. front++ ex)1->2->3->4->5->1->...
    return q->data[q->front];               
  }
}

int fibo(int n);

int main(){
  int n;
  printf("enter fibo number:");
  scanf("%d",&n);
  int result;
  result=fibo(n);

  printf("fibo(%d) = %d",n,result);
  
  }

int fibo(int n){
  QueueType q;
  if(n==0||n==1) return n;
  init_queue(&q);
  enqueue(&q,0);
  enqueue(&q,1);
  for(int i=0;i<n-1;i++){
    int temp;
    temp=dequeue(&q);
    enqueue(&q,temp+q.data[q.rear]);
  }
  return q.data[q.rear];
}
    
    
  

//fibo(0)=0 fibo(1)=1 fibo(2)=1 fibo(3)=2 fibo(4)=3 fibo(5)=5

