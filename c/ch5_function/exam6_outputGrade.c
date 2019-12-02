#include<stdio.h>

void show_grade(int);

int main(){
  int grade;
  scanf("%d",&grade);

  show_grade(grade);

}

void show_grade(int grade){
  printf("%dth grade.\n",grade);
}
