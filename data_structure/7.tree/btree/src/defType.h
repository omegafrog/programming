#ifndef __DEFTYPE_H__
#define __DEFTYPE_H__

#define element2 int 

#define MAX_QUEUE_SIZE 10
#define MAX_STACK_SIZE 100


typedef struct binary_tree_node{
    element2 data;
    struct binary_tree_node* left;
    struct binary_tree_node* right;
} bnode;

#define element bnode*



typedef struct TypeCQueue{
    element data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} cqueue;

typedef struct StackType{
    element data[MAX_STACK_SIZE];
    int top;
}stackType;

#endif