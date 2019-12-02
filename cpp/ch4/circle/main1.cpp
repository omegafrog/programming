#include<iostream>
#include"structpointer_circle.h"

int main(){
  Circle pizza;
  Circle donut(30);

  cout<<pizza.getArea()<<endl;

  Circle *p;
  p=&donut;

  cout<<donut->getArea()<<endl;

  p=&pizza;
  cout<<pizza->getArea()<<endl;
}

	       
