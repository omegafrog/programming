#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STACK_SIZE 100


typedef char element;
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

int calc(int fop, int sop, char op){
    switch(op){
        case '+':
        return fop+sop;
        case '-':
        return fop-sop;
        case '*':
        return fop*sop;
        case '/':
        return fop/sop;
    }
}
int eval(char *expr){
    Stacktype s;
    init_stack(&s);

    int exindex=0;
    int len=strlen(expr);
    int sop,fop;
    int result;
    for(exindex;exindex<len;exindex++){
        if ((expr[exindex]=='+')||
            (expr[exindex]=='-')||
            (expr[exindex]=='*')||
            (expr[exindex]=='/')){
                sop=(int)pop(&s)-'0';
                fop=(int)pop(&s)-'0';
                result=calc(fop,sop,expr[exindex]);
                push(&s,result+'0');
            }
        else{
            push(&s,expr[exindex]);
        }
    }
    return pop(&s);
}

int main(){
    int result;
    printf("82/3-32*+\n");
    result=eval("82/3-32*+");
    printf("%d",result);

}
