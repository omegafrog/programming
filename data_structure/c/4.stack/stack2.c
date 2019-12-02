#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100


typedef int element;
typedef struct{
    element *data;
    int capacity;
    int top;
}Stacktype;

void init_stack(Stacktype *s){
    s->top=-1;
    s->capacity=1;
    s->data=(element*)malloc(sizeof(element)*s->capacity);
}

int is_empty(Stacktype *s){
    return(s->top==-1);
}

int is_full(Stacktype *s){
    return(s->top==MAX_STACK_SIZE-1);
}

void delete_stack(Stacktype *s){
    free(s);
}

void push(Stacktype *s, element item){
    if(is_full(s)){
        s->capacity*=2;
        s->data=(element*)realloc(s->data,s->capacity*2);
    }
    s->data[++s->top]=item;
}

element pop(Stacktype *s){
    if(is_empty(s)){
        fprintf(stderr,"stack is empty\n");
        exit(1);
    }
    else return s->data[s->top--];
}

int main(){
    Stacktype s;

    init_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
}
