#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAX_ELEMENT 200

typedef struct {
	int key;
} element;

typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
} HeapType;

HeapType* create();
void init(HeapType* h);
void insert_max_heap(HeapType* h, element item);
element delete_max_heap(HeapType* h);

int main(){
  int count;
  scanf("%d",&count);
  
  element* numlist=(element*)malloc(sizeof(int)*count);

  HeapType* heap;
  heap=create();
  init(heap);

  element temp;
  for(int i=0;i<count;i++){
    scanf("%d",&temp.key);
    insert_max_heap(heap, temp);
  }
  for(int i=count-1;i>=0;i--)
    numlist[i]=delete_max_heap(heap);

  for(int i=0;i<count;i++)
    printf("%d\n",numlist[i].key);
  free(numlist);
  free(heap);
  return 0;
}
HeapType* create(){
  return (HeapType*)malloc(sizeof(HeapType));
}

void init(HeapType *h){
  h->heap_size =0;
}

void insert_max_heap(HeapType *h, element item){
  int i;
  i=++h->heap_size;

  while((i!=1)&&(item.key>h->heap[i/2].key)){
    h->heap[i]=h->heap[i/2];
    i=i/2;
  }
  h->heap[i]=item;
}

element delete_max_heap(HeapType* h){

  int i=1;
  int left=0;
  element cmp=h->heap[h->heap_size];
  element item=h->heap[1];
  element temp;
  h->heap_size--;

  
  while(i*2<=h->heap_size){
    left=0;
    if(h->heap[i*2].key>h->heap[i*2+1].key){
      temp=h->heap[i*2];
      left=1;
    }
    else
      temp=h->heap[i*2+1];
    if((i<h->heap_size)&&(cmp.key<temp.key)){
      h->heap[i]=temp;
      if(left==1) i=i*2;
      else i=i*2+1;
    }
    else
      break;
  }
  h->heap[i]=cmp;
  return item;
}
