#include<stdio.h>

int main(){
  int year, day;
  scanf("%d%d",&year,&day);

  int sumday=-1;
  int startyear=1;
  for(startyear;startyear<year;startyear++){
    if(year==1){
      continue;}
    else if(startyear==2)
      sumday+=28;
    else if((startyear==4)||(startyear==6)||(startyear==9)||(startyear==11))
      sumday+=30;
    else
      sumday+=31;
  }
  sumday+=day;

  switch(sumday%7){
    case 0:
      printf("MON");
      break;
    case 1:
      printf("TUE");
      break;
    case 2:
      printf("WED");
      break;
    case 3:
      printf("THU");
      break;
    case 4:
      printf("FRI");
      break;
    case 5:
      printf("SAT");
      break;
    case 6:
      printf("SUN");
      break;
  }
}
