#ifndef _HEAP_H
#define _HEAP_H

#define MAX_ELEMENT 200
typedef struct {
	int key;
} element;
//heap : key(parentnode)>=key(childnode)
typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
} HeapType;

HeapType* create();
void init(HeapType* h);
void insert_max_heap(HeapType* h, element item);
element delete_max_heap(HeapType* h);
#endif
