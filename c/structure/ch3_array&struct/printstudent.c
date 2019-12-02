#include<stdio.h>
#include<stdlib.h>

typedef struct student{
  int num;
  char name[20];
  double grade;
}student;

student get_data(student **);
void display_data(student );

int main(){
  student *std;
  std = malloc(sizeof(student)*10);
  student max;
  max=get_data(&std);
  display_data(max);

}

student get_data(student **std){
  for(int i=0;i<10;i++){
    printf("input %dth student number:",i+1);
    scanf("%d",&((*std)[i].num));
    printf("input %dth student name:",i+1);
    scanf("%s",(*std)[i].name);
    printf("input %dth student grade:",i+1);
    scanf("%lf",&((*std)[i].grade));
  }
  student max=(*std)[0];
  for(int i=0;i<10;i++)
    if(max.grade<(*std)[i].grade) max=(*std)[i];
  return max;
}

void display_data(student std){
  printf("best student is\n");
  printf("name:%s\nid:%d\ngrade:%.3f",std.name, std.num, std.grade);
}
