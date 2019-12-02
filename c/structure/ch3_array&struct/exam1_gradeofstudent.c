#include<stdio.h>

typedef struct score_tag{
  double math;
  double english;
  double total;
}score;

typedef struct student{
  char ID[10];
  char name[32];
  score score;
}student;

void get_score(struct student std[5]);
void display_student(struct student std[5]);

int main(){
  student kpu_st[5]={{"20181122", "Lee"},
		     {"20181122", "Kim"},
		     {"20181120", "Park"},
		     {"20181119", "Rho"},
		     {"20181123", "Seo"} };

  get_score(kpu_st);
  display_student(kpu_st);
}

void get_score(struct student std[5]){
  for(int i=0;i<5;i++){
    printf("input your math score:");
    scanf("%lf",&std[i].score.math);
    printf("input your english score:");
    scanf("%lf",&std[i].score.english);
    std[i].score.total=std[i].score.math+std[i].score.english;
  }
}

void display_student(struct student std[5]){
  for(int i=0;i<5;i++){
    printf("your math score is %lf\n",std[i].score.math);
    printf("your english score is %lf\n",std[i].score.english);
    printf("your total score is %lf\n",std[i].score.total);
  }
}  
