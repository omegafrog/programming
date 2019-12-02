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

int is_full(Stacktype *s){
    return(s->top==MAX_STACK_SIZE-1);
}

int is_empty(Stacktype *s){
    return(s->top==-1);
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

int check_maching(char* expr){
    Stacktype s;
    
    init_stack(&s);

    int expr_index=0;
    int len=strlen(expr);
    char ch,open_ch;  //open_ch : char poped from stack
    while(expr_index<len){
        ch=expr[expr_index++];
        switch(ch){
            case '(': case'{': case '[':
            push(&s,ch);
            break;
            
            case')': case'}' : case ']':
            if(is_empty(&s)){
                fprintf(stderr,"stack is empty.\n");
                exit(1);
            }
            else{
                open_ch=pop(&s);
                if ((ch=='('&&open_ch!=')')||
                    (ch=='{'&&open_ch!='}')||
                    (ch=='['&&open_ch!=']')){
                    return 0;
                }                
            }
            break;
        }
    }
    if(!is_empty(&s)) return 0;
    return 1;
}

int main(){
    char *p1="{A[(i+1)]=0;}";
    char *p2="{A[(i+1)=0;}";
    if(check_maching(p1)==1)
        printf("success!\n");
    else
        printf("fail...\n");
    if(check_maching(p2)==1)
        printf("success!\n");
    else
        printf("fail...\n");
}
