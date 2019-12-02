#include<iostream>
using namespace std;

#include "coffeeMachine.h"

void java::get_espresso(){
  water-=1;
  coffee-=1;
}
void java::get_americano(){
  coffee-=1;
  water-=2;
}
void java::get_sugarcoffee(){
  coffee-=1;
  water-=2;
  sugar-=1;
}
void java::fill_machine(){
  coffee=10;
  water=10;
  sugar=10;
}
void java::show(){
  cout<<"coffeee:"<<coffee <<"water:"<<water <<"sugar:"<<sugar <<endl;
  cout<<"1. espresso"<<endl<<"2. americano"<<endl<<"3.sugarcoffeee"<<endl<<"4.fillcoffeeemachine"<<endl;
}

java::java(int c, int w, int s){
  coffee=c;
  water=w;
  sugar=s;
}

  
