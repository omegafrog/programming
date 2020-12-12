#include<stdio.h>
#include<stdlib.h>

#define MAX_LIST_SIZE 100

typedef int element;
typedef struct{
    element data[MAX_LIST_SIZE];
    int size;
}typelist;

int is_empty(typelist *t){
    return(t->size==0);
}

int is_full(typelist *t){
    return(t->size==MAX_LIST_SIZE);
}

//return data[pos]

element get_entry(typelist *t,int pos){
    if(pos<0||pos>t->size){
        fprintf(stderr,"wrong position.\n");
        exit(1);
    }
    return t->data[pos];
}

void insert_last(typelist *t, element item){
    if(is_full(t)){
        fprintf("list is full.\n");
        exit(1);
    }
    t->data[t->size++]=item;
}
void print_list(typelist *t){
    for (int i = 0; i < t->size; i++)
    {
        printf("%d->", t->data[i]);
    }
    printf("\n");
    
}

void insert(typelist *t, element item, int pos){
    if(is_full(t) ){
        fprintf("list is full.\n");
        exit(1);
    }
    if((pos>-0)&&(pos<=t->size-1)){
        for(int i=t->size-1;i>=pos;i--){
            t->data[i+1]=t->data[i];
        }
        t->data[pos]=item;
        t->size++;
    }

}