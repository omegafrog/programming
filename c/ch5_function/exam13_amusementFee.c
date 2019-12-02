#include<stdio.h>

int get_input();
void display(int);

int main(){
  int age;

  age = get_input();
  display(age);

}

int get_input(){
  int i;
  printf("input age:");
  scanf("%d",&i);
  return i;
}

void display(int num){
  int fee;
  if((num<=6)||(num>=70)){
    fee=0;
  } else if((num>=7)&&(num<=12)){
    fee=1000;
  } else if((num>=13)&&(num<=19)){
    fee=2000;
  } else {
    fee=3000;}

  printf("fee is %d.\n",fee);
}
