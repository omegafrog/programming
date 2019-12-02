#include<stdio.h>
#include<malloc.h>

typedef struct score{
  int kor;
  int prog;
}score;

typedef struct stu_tag{
  int id;
  char name[32];
  score score;
}student;

typedef struct dept_tag{
  student *fresh;
  int num;
}dept;

dept *get_data();
void display_data(dept *);

int main(){
  display_data(get_data());
  return 0;
}

dept *get_data(){
  dept *ce=NULL;
  ce =(dept*)malloc(sizeof(dept));

  printf("put max student number:");
  scanf("%d",&(ce->num));

  ce->fresh=(student*)malloc(sizeof(student)*ce->num);
  for(int i=0;i<ce->num;i++){
    printf("put your name:");
    scanf("%s",ce->fresh[i].name);
    printf("put your id:");
    scanf("%d",&(ce->fresh[i].id));
    printf("put your korean score:");
    scanf("%d",&(ce->fresh[i].score.kor));
    printf("put your programming score:");
    scanf("%d",&(ce->fresh[i].score.prog));
  }
  return ce;
}

void display_data(dept *ce){
  for(int i=0;i<ce->num;i++){
    printf("name:%s\n",ce->fresh[i].name);
    printf("id:%d\n",ce->fresh[i].id);
    printf("score\n");
    printf("korean:%d\n", ce->fresh[i].score.kor);
    printf("programming:%d\n",ce->fresh[i].score.prog);
  }
}

