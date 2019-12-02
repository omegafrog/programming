#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

void init_stack(StackType *s){
  s->top = -1;
}

int is_empty(StackType *s){
  return (s->top == -1);
}

int is_full(StackType *s){
  return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType *s, element item){
  if (is_full(s)) {
    fprintf(stderr, "stack full");
    return;
  }
  else s->data[++(s->top)] = item;
}

element pop(StackType *s){
  if (is_empty(s)) {
    fprintf(stderr, "stack is empty/n");
    exit(1);
  }
  else return s->data[(s->top)--];
}

element peek(StackType *s){
  return s->data[(s->top)];
}
