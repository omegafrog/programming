#include <stdio.h>
#include <stdlib.h>


//make new heap
heapType* create_heap(){
    // allocate new heap.
    heapType* newHeap=(heapType*)malloc(sizeof(heapType));
    // initialize heap.
    newHeap->heap_size=0;
    return newHeap;
}
//check heap is full
int is_full(heapType* heap){
    return heap->heap_size==MAX_ELEMENT;
}
//check heap is empty
int is_empty(heapType* heap){
    return heap->heap_size==0;
}
//insert item to heap
void insert(heapType* heap, element item){
    // heap is not full
    if(!is_full(heap)){
        // append new item to last index of heap.(because of heap is not only complete binary tree, but also heap's smallest node always has to be located on terminal node.)
        int newNodeIndex=++heap->heap_size;
        heap->heap[newNodeIndex]=item;
        
        // after append the new node, this node doesn't satisfied heap.
        // so check this node satisfy heap, if not, replace this node with its parent node.
        int i=newNodeIndex;
        // not root node and not satisfy heap
        while((i!=1)||(heap->heap[i].key>heap->heap[i/2].key)){
            //replace child node with parent node
            element tmp=heap->heap[i];
            heap->heap[i]=heap->heap[i/2];
            heap->heap[i/2]=tmp;
            
            //go to upper level.
            i/=2;
        }
    }
}