#include<iostream>
using namespace std;

#include "coffeeMachine.h"

int main(){
  java java(5,5,5);
  java.show();

  int num=0;

  for(;;){
    scanf("%d",&num);
    switch(num){
    case 1:
      java.get_espresso();
      java.show();
      break;
    case 2:
      java.get_americano();
      java.show();
      break;
    case 3:
      java.get_sugarcoffee();
      java.show();
      break;
    case 4:
      java.fill_machine();
      java.show();
      break;
    }
  }
}
