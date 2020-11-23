#include <stdio.h>
#include <stdlib.h>

#include "defType.h"
#include "stackType.h"

// pop함수에 스택이  비면 NULL을 반환하도록 바꿈
void init_stack(stackType* s)
{
    s->top=-1;
}

stackType* new_stack()
{
    stackType* s=(stackType*)malloc(sizeof(stackType));
    init_stack(s);
    return s;
}

int is_empty(stackType* s)
{
    return s->top==-1;
}

int is_full(stackType* s)
{
    return s->top==MAX_STACK_SIZE-1;
}

void push(stackType* s, element item)
{
    if(is_full(s))
    {
        fprintf(stderr,"stack is full.\n");
    }
    else
    {
        s->data[++s->top]=item;
    }
}

element pop(stackType* s)
{
    if(is_empty(s))
    {
        // fprintf(stderr,"stack is empty.\n");
        return NULL;
    }
    else
    {
        return s->data[s->top--];
    }
}
// 바꾸기귀찮아서걍안쓰니까...
// void print_stack(stackType* s)
// {
//     if(is_empty(s))
//     {
//         printf("stack is empty.\n");
//     }
//     else
//     {
//         for(int i=0;i<=s->top;i++)
//         {
//             printf("%d ",s->data[i]);
//         }
//         printf("\n");   
//     }
// }

element peek_stack(stackType* s)
{
    return s->data[s->top];
}