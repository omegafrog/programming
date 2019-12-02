#include<stdio.h>
#include<string.h>

typedef struct student{
  char name[4];
  int  grade;
}std;

int main(){
  int grade[10]={1,2,3,1,2,3,1,2,3,1};
  std s1,s2;
  strcpy(s1.name,"tom");
  s1.grade=2;
  strcpy(s2.name,"joe");
  s2.grade=1;
  std s[5]={{"tom",1},{"joe",2},{"jay",3},{"kang",4},{"sue",5}
  
  double sum=0;
  for(int i=0;i<10;i++){
    sum+=grade[i];
  }
  printf("avg:%.2f\n",sum/10);
  printf("name:%s\ngrade:%d\n",s1.name,s1.grade);
  printf("name:%s\ngrade:%d",s2.name,s2.grade);  
  
}
