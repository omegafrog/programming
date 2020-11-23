#include <stdio.h>
#include <stdlib.h>

#include "stackType.h"

void init_stack(stackType* s)
{
    s->top=-1;
}

stackType* new_stack()
{
    stackType* s=(stackType*)malloc(sizeof(stackType));
    if(s)
    {
        init_stack(s);
        return s;
    }
    else
    {
        printf("memory allocation failed.");
    }
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
        fprintf(stderr,"stack is empty.\n");
    }
    else
    {
        return s->data[s->top--];
    }
}

void print_stack(stackType* s)
{
    if(is_empty(s))
    {
        printf("stack is empty.\n");
    }
    else
    {
        for(int i=0;i<=s->top;i++)
        {
            printf("%c ",s->data[i]);
        }
        printf("\n");   
    }
}

element peek_stack(stackType* s)
{
    return s->data[s->top];
}

int sizeofStack(stackType* s)
{
    return s->top+1;
}