#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 100


typedef char element;
typedef struct {
  element data[MAX_STACK_SIZE];
  int top;  // index of last value
} StackType;




void init_stack(StackType *s); // initialize stack : top==-1
int is_empty(StackType *s);  // if top==-1, then this stack is empty. return 1
int is_full(StackType *s);  // if top == max_stack_size -1
void push(StackType *s, element item); // stack.data[top]<-item , top++
element pop(StackType *s); // return stack.data[top--];
element peek(StackType *s); // return stack.data[top] (don't pop item)
void stack_printf(StackType *s);

int main(){
  StackType s;
  init_stack(&s);
  push(&s, 5);
  push(&s, 12);
  push(&s, 14);
  pop(&s);
  push(&s, 25);
  stack_printf(&s);
}


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

void stack_printf(StackType *s){
  if(!is_empty(s)){
    printf("%d <-top\n",pop(s));
    while(!is_empty(s))
      printf("%d\n",pop(s));
  }
}
    
      
    
