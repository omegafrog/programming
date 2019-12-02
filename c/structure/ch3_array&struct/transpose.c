g#include<stdio.h>
#define ROW 3
#define COLS 3

void matrix_transpose(int A[ROW][COLS], int B[ROW][COLS]);
void matrix_print(int A[ROW][COLS]);
void matrix_circulation_row(int A[ROW][COLS], int B[ROW][COLS], int n);
void matrix_circulation_col(int A[ROW][COLS], int B[ROW][COLS], int n);
int main() {
  int array1[ROW][COLS] = { {1,2,3},{4,5,6},{7,8,9} };
  int array2[ROW][COLS];

  matrix_transpose(array1, array2);

  matrix_print(array1);
  matrix_print(array2);

  int n = 0;
  scanf("%d", &n);
  matrix_circulation_row(array1, array2,n);
  matrix_print(array1);
  matrix_print(array2);
  int i = 0;
  scanf("%d", &i);
  matrix_circulation_col(array1, array2, i);
  matrix_print(array1);
  matrix_print(array2);
}

void matrix_transpose(int A[ROW][COLS], int B[ROW][COLS]) {
  for (int i = 0; i < ROW; i++) {
    for (int x = 0; x < COLS; x++) {
      B[i][x] = A[x][i];
    }
  }
}

void matrix_circulation_col(int A[ROW][COLS], int B[ROW][COLS],int n) {
  for (int i = 0; i < ROW; i++) {
    for (int x = 0; x < COLS; x++) {
      B[i][(x + n) % COLS] = A[i][x];
    }
  }
}

void matrix_circulation_row(int A[ROW][COLS], int B[ROW][COLS], int n) {
  for (int i = 0; i < COLS; i++) {
    for (int x = 0; x < ROW; x++) {
      B[(x + n) % ROW][i] = A[x][i];
    }
  }
}
void matrix_print(int A[ROW][COLS]) {
  for (int i = 0; i < ROW; i++) {
    for (int x = 0; x < COLS; x++) {
      printf("%d", A[i][x]);
    }
    printf("\n");
  }
}
