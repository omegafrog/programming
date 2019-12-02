#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define MAX_STACK_SIZE 100
#define MAZE_SIZE 10

typedef struct{
    int row;
    int col;
} element;
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
    return(s->top==s->capacity-1);
}

void delete_stack(Stacktype *s){
    free(s);
}

void push(Stacktype *s, element item){
    if(is_full(s)){
        s->capacity*=2;
        s->data=(element*)realloc(s->data,s->capacity);
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

int is_exit(element maze_runner, char maze[MAZE_SIZE][MAZE_SIZE]){
    return(maze[maze_runner.row][maze_runner.col]=='x');
}

void stack_way(int r, int c, char maze[MAZE_SIZE][MAZE_SIZE],Stacktype *s){
    if(r<0||c<0) return;
    if(maze[r][c]!='1'&&maze[r][c]!='.'){
        element tmp={r,c};
        push(s,tmp);
    }
}

void maze_print(char maze[MAZE_SIZE][MAZE_SIZE]){
    printf("\n");
    for(int r=0;r<MAZE_SIZE;r++){
        for(int c=0;c<MAZE_SIZE;c++){
            printf("%c",maze[r][c]);
        }
        printf("\n");
    }
}

void find_way(char maze[MAZE_SIZE][MAZE_SIZE],element start){
    Stacktype s;
    element maze_runner=start;
    init_stack(&s);

    element tmp;
    while(!is_exit(maze_runner,maze)){
        maze[maze_runner.row][maze_runner.col]='.';
        maze_print(maze);
        stack_way(maze_runner.row-1,maze_runner.col,maze,&s);
        stack_way(maze_runner.row+1,maze_runner.col,maze,&s);
        stack_way(maze_runner.row,maze_runner.col+1,maze,&s);
        stack_way(maze_runner.row,maze_runner.col-1,maze,&s);
        if(is_empty(&s)){
            printf("fail\n");
            return ;
        }
        else{
            tmp=pop(&s);
            maze_runner.row=tmp.row;
            maze_runner.col=tmp.col;
        }
    }
    printf("success");
}


int main(){
    element here={1,0};
    char maze[MAZE_SIZE][MAZE_SIZE]={
        {'1','1','1','1','1','1','1','1','1','1'},
        {'0','0','0','0','1','0','0','0','0','1'},
        {'1','0','0','0','1','0','0','0','0','1'},
        {'1','0','1','1','1','0','0','1','0','1'},
        {'1','0','0','0','1','0','0','1','0','1'},
        {'1','0','1','0','1','0','0','1','0','1'},
        {'1','0','1','0','1','0','0','1','0','1'},
        {'1','0','1','0','1','0','0','1','0','1'},
        {'1','0','1','0','0','0','0','1','0','x'},
        {'1','1','1','1','1','1','1','1','1','1'}};
    find_way(maze,here);
}