#include<stdio.h>
#include<time.h>

int main(){
  int up,down,well_depth;
  clock_t start, stop;
  double duration;
  start=clock();
  scanf("%d%d%d",&up,&down,&well_depth);

  int day=1;
  int night=0; //noon==0, night==1
  int height=0;
  while(1){
    //noon
    if(night==0){
      height+=up;
      night=1;
      if(height>=well_depth) break;
    }
    else if(night==1){
      height-=down;
      night=0;
      day++;
    }
  }
  printf("%d",day);
  stop=clock();
  duration = (double)(stop-start)/CLOCKS_PER_SEC;
  printf("duration time is %f sec.\b", duration);
}
