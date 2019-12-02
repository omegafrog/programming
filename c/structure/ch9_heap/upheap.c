#include<stdio.h>
#include<stdlib.h>
#include"upheap.h"

HeapType* create(){
  return (HeapType*)malloc(sizeof(HeapType));
}
//initialize heap. heap_size==0 -> heap is empty
void init(HeapType *h){
  h->heap_size =0;
}

//insert element into heap. 
void insert_max_heap(HeapType *h, element item){
  //find new node's direction
  
  int i;
  i=++h->heap_size;

  
  while((i!=1)&&(item.key>h->heap[i/2].key)){
    h->heap[i]=h->heap[i/2]; //up to parent's node
    i=i/2;
  }
  h->heap[i]=item;
}
//delete root node and set last node as root node and resort
element delete_max_heap(HeapType* h){

  int i=1;
  int left=0;
  //last node
  element cmp=h->heap[h->heap_size];
  element item=h->heap[1];
  element temp;
  h->heap_size--;

  
  while(i*2<=h->heap_size){
    left=0;
    //compare left child node and right child node
    //temp:node to change
    if(h->heap[i*2].key>h->heap[i*2+1].key){
      temp=h->heap[i*2];
      left=1;
    }
    else
      temp=h->heap[i*2+1];
    //by heap's definition, cmp.key<temp.key
    if((i<h->heap_size)&&(cmp.key<temp.key)){
      h->heap[i]=temp;
      if(left==1) i=i*2;
      else i=i*2+1;
    }
    else{
      break;
    }
  }
  h->heap[i]=cmp;
  return item;
}

