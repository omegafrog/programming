#include<stdio.h>
#include<stdlib.h>
#include"completeBinarytree.h"

#define MAXSIZE 10
#define MAX_QUEUE_SIZE 500

typedef struct{
  compBnTree* data[MAX_QUEUE_SIZE];
  int front, rear;
}QueueType;

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

void enqueue(QueueType *q, compBnTree* item){ 
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


void VLR(compBnTree* root){
  if(root){
    printf("%d",root->item);
    VLR(root->left);
    VLR(root->right);
  }
}

void LVR(compBnTree* root){
  if(root){
    LVR(root->left);
    printf("%d",root->item);
    LVR(root->right);
  }
}

void LRV(compBnTree* root){
  if(root){
    LRV(root->left);
    LRV(root->right);
    printf("%d",root->item);
  }
}

int top=-1;

compBnTree* stack[MAXSIZE];

void push(compBnTree* p){
  if(top<MAXSIZE-1){
    stack[++top]=p;
  }
}

compBnTree* pop(){
  compBnTree* p=NULL;
  if(top>-1){
    p=stack[top--];
  }
  return p;
}

void VLR_iter(compBnTree* root){
  while(1){
    for(;root;root=root->left){
      push(root);
    }
    root=pop();
    if(!root) break;
    printf("%d->",root->item);
    root=root->right;
  }
}

void levle_order(compBnTree* root){
  QueueType q;
  init_queue(&q);

  if(root==NULL) return;
  enqueue(&q, root);
  while(!is_empty(&q)){
    root=dequeue(&q);
    printf("[%d]",root->item);
    if(root->left)
      enqueue(&q,root->left);
    if(root->right)
      enqueue(&q,root->right);
  }
}

int get_node_count(compBnTree* node){
  int count=0;
  if(node!=NULL)
    count=1+get_node_count(node->left)+get_node_count(node->right);
  return count;
}

int get_height(compBnTree* node){
  int height=0;
  if(node!=NULL)
    height=get_height(node->left)+get_height(node->right);  
  return height;
}

int get_leaf_count(compBnTree* node){
  int count=0;
  if(node!=NULL){
    if(node->left==NULL&node->right==NULL)
      return 1;
    else
      count=get_leaf_count(node->left)+get_leaf_count(node->right);
  }
  return count;
}

