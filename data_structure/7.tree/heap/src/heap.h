#ifndef __HEAP_H__
#define __HEAP_H__

// heap : key(child node)<=key(parent node)
// heap is complete binary tree.
// max heap : key(parent node)>key(child node)
// min heap : key(parent node)<key(child node)

#define MAX_ELEMENT 100
typedef struct{
    int key;
}element;

// heap start always index "1"
// this heap is max heap
typedef struct{
    element heap[MAX_ELEMENT];
    int heap_size;
}heapType;

//make new heap
heapType* create_heap();
//check heap is full
int is_full(heapType* heap);
//check heap is empty
int is_empty(heapType* heap);
// insert item to heap.
void insert(heapType* heap, element item);
// delete item from heap.
element delete(heapType* heap);


#endif