#include<stdio.h>
#include<stdlib.h>

#define MAX_TERMS 100
typedef struct {
 int row;
 int col;
 int value;
} element;

typedef struct SparseMatrix {
  element data[MAX_TERMS];
  int rows;
  int cols;
  int terms;
} SparseMatrix;

SparseMatrix SPminus(SparseMatrix S1, SparseMatrix S2);
void matrix_sparse_print(SparseMatrix a);

int main(){
  SparseMatrix S1={
    {{0,2,1},{1,1,2},{3,0,5}},
     4,
     4,
     3
  };
  SparseMatrix S2={
    {{0,2,1},{1,0,1},{1,1,1},{3,0,2},{3,3,3}},
    4,
    4,
    5
  };

  SparseMatrix result;
  result=SPminus(S1,S2);

  matrix_sparse_print(result);
}
void matrix_sparse_print(SparseMatrix a){
  for(int i=0;i<a.terms;i++){
    printf("%d %d %d\n",a.data[i].row, a.data[i].col, a.data[i].value);
  }
}


SparseMatrix SPminus(SparseMatrix S1, SparseMatrix S2){
  SparseMatrix temp;
  temp.rows=S1.rows;
  temp.cols=S1.cols;
  int terms;
  int tempindex=0;
  terms=S1.terms;
  int j;
  for(int i=0;i<S1.cols;i++){
    for(j=0;j<terms;j++){
      if(S1.data[j].col==S2.data[j].col&&S2.data[j].row==S1.data[j].row){
	temp.data[tempindex].value=S2.data[j].value-S1.data[j].value;
	temp.data[tempindex].row=S2.data[j].row;
	temp.data[tempindex].col=S2.data[j].col;
	tempindex++;
      }
      else if(!(S1.data[j].col==S2.data[j].col&&S2.data[j].row==S1.data[j].col)) temp.data[tempindex].value=-S2.data[j].value;
    }
    while(j<=S2.terms){
      temp.data[tempindex].value=-S2.data[j].value;
      j++;
      tempindex++;
    }
  }
  temp.terms=j;
  return temp;
}
    

  
      
