#ifndef STACK_H
#define STACK_H
#ifndef MAX_STACK_SIZE
#define MAX_STACK_SIZE 100
#endif

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
#endif
