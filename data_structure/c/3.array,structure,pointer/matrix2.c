//transpose of sparsmatrix
//
#include<stdio.h>
#include<stdlib.h>

#define MAX_TERMS 100
typedef struct{
    int row;
    int col;
    int value;    
} element;

typedef struct Sparsmatrix{
    element data[MAX_TERMS];
    int rows;
    int cols;
    int terms;
}Sparsmatrix;

Sparsmatrix matrix_transpose2(Sparsmatrix s){
    Sparsmatrix b;
    int bindex;
    b.rows=s.cols;
    b.cols=s.rows;
    b.terms=s.terms;

    if(s.terms){
        bindex=0;
        for(int c=0;c<s.cols;c++){
        for(int i=0;i<s.terms;i++){
            if(c==s.data[i].col){
                    b.data[bindex].row=s.data[i].col;
                    b.data[bindex].col=s.data[i].row;
                    b.data[bindex].value=s.data[i].value;
                    bindex++;
            }
            }
        }
    }
    return b;
}

void matrix_print(Sparsmatrix a){
    for(int i=0;i<a.terms;i++){
        printf("(%d %d %d)\n",a.data[i].row,a.data[i].col,a.data[i].value);
    }
}    

int main(){
    Sparsmatrix m={
        {{0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2,}},
        6,
        6,
        7
    };
    Sparsmatrix result;
    result=matrix_transpose2(m);
    matrix_print(m);
    printf("==================\n");
    matrix_print(result);    
}
