#include<iostream>
#include "structpointer_circle.h"
using namespace std;

int main(){
  int radius;
  while(1){
    cout<<"input(integer bigger than 0, else quiet):"<<endl;
    cin>>radius;
    if(radius<0) break;
    Circle *p=new Circle(radius);
    cout<<"area is"<<p->getArea()<<endl;
    delete p;
  }
}
