#ifndef __STACKTYPE_H__
#define __STACKTYPE_H__

#define MAX_STACK_SIZE 100

#define element bnode*

typedef struct StackType{
    element data[MAX_STACK_SIZE];
    int top;
}stackType;

// 새로운 스택 생성, 반환
stackType* new_stack();
// 스택 초기화
void init_stack(stackType* s);
// push
void push(stackType* s, element item);
// pop
element pop(stackType* s);
// print_stack
void print_stack(stackType* s);
// peek
element peek_stack(stackType* s);
// is_full
int is_full(stackType* s);
// is_empty
int is_empty(stackType* s);

#endif