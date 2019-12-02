#include<stdio.h>


int main(){
  int timetable[]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
  char inputstr[16];
  
  scanf("%s",inputstr);
  
  int time=0;
  int i=0;
  while(inputstr[i]!='\0'){
    time+=timetable[(int)inputstr[i]-'A'];
    i++;
  }
  printf("%d",time);
  
}
