include<stdio.h>
#define PI 3.141592

double area(int r);
double circumference(int r);

int main(){
  char option;
  int r;
  
  while(1){
    scanf("%c",&option);
    rewind(stdin);
    switch(option){
    case'A':
    case'a':
      scanf("%d",&r);
      area(r);
      break;
    case'C':
    case'c':
      scanf("%d",&r);
      circumference(r);
      break;
    case'Q':
    case'q':
      return 0;
    default:
      printf("input:");
    }
  }

  return 0;
}

double area(int r){
  printf("area is %f.\n",PI*r*r);
}
double circumference(int r){
  printf("circumference is %f.\n",2*PI*r);
}
