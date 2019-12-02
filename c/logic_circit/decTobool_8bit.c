#include<stdio.h>
#include<math.h>
#define MAX_BIT 8

void decToBool(int[], int);
void decToHexa(int[], char[]);
void booldisplay(int[]);
void hexadisplay(char[]);

int main(){
  int boolbit[MAX_BIT] = { 0, };
  char hexabit[2];

  int num;
  printf("dec:");
  scanf("%d", &num);
  decToBool(boolbit, num);
  decToHexa(boolbit, hexabit);

  booldisplay(boolbit);
  hexadisplay(hexabit);
}

void decToBool(int boolbit[MAX_BIT], int num) {
  int tempbit[MAX_BIT];
  int i = 0;
  int fnum = num;
  if (fnum < 0) {
    num = ~num + 1;
    for (i; i < MAX_BIT; i++) {
      if (num == 1) {
	tempbit[i] = 1;
	break;
      }
      if (num % 2 == 1) {
	tempbit[i] = 1;
	num = num / 2;
      }
      else {
	tempbit[i] = 0;
	num = num / 2;
      }
    }
    int temp = 0;
    for (int x = 0; x <= i; x++) 
      boolbit[MAX_BIT - 1 - x] = tempbit[x];
    for (int y = MAX_BIT-1; y>=0; y--) {

      if (boolbit[y] == 1&&temp==0)
	temp = 1;
      else if (boolbit[y] == 0 && temp == 1) boolbit[y] = 1;
      else if (boolbit[y] == 1 && temp == 1) boolbit[y] = 0;
    }
  }
  if (fnum > 0) {
    for (i; i < MAX_BIT; i++) {
      if (num == 1) {
	tempbit[i] = 1;
	break;
      }
      if (num % 2 == 1) {
	tempbit[i] = 1;
	num = num / 2;
      }
      else {
	tempbit[i] = 0;
	num = num / 2;
      }
    }
    for (int x = 0; x <= i; x++) 
      boolbit[MAX_BIT - 1 - x] = tempbit[x];
  }
}

void decToHexa(int boolbit[MAX_BIT], char hexabit[2]) {
  int temp = 0;
  int x = 0;
  for (int i = 0; i < 8; i++){
    if (i % 4 == 0) temp = 0;
    temp += boolbit[MAX_BIT - i-1]* pow(2, i % 4);
    if (i % 4 == 3 && i > 0) {
      if (temp < 10) hexabit[x] = temp + 48;
      else hexabit[x] = temp + 55;
      x++;
    }
  }
}

void booldisplay(int bit[MAX_BIT]) {
  for (int i = 0; i < MAX_BIT; i++) {
    printf("%d", bit[i]);
  }
  printf("\n");
}

void hexadisplay(char bit[MAX_BIT]) {
  for (int i = 1; i>=0; i--) {
    printf("%c", bit[i]);
  }
}
