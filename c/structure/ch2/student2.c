#include<stdio.h>

typedef struct student{
  char name[4];
  int  grade;
}std;

int main(){
  std s[5]={{"tom",1},{"joe",2},{"jay",3},{"kan",4},{"sue",5}};
  
  double sum=0;
  for(int i=0;i<5;i++){
    sum+=s[i].grade;
  }
  for(int i=0;i<5;i++){
    printf("name:%s\ngrade:%d\n",s[i].name,s[i].grade);
  }
  printf("%.2f",sum/5);
}
