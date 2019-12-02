#include<iostream>
using namespace std;

class Circle{
public:
  int radius;
  Circle();
  Circle(int r);
  double getArea();
};
//////////////////////////////////////////////////////////////////////////////
//                        Circle::Circle:Circle(1){}
//                        Circle::Circle(int r){
//                               blabla~~;
//                        }
//                        Circle::Circle(int r=defaultval){
//                               blabla~~;
//                        }
Circle::Circle(){
  radius =1;
  cout<< "radius" << radius << " circle"<<endl;
}

Circle::Circle(int r){
  radius = r;
  cout<< "radius" << r << " circle"<<endl;
}



double Circle::getArea(){
  return radius*radius*3.14;
}

int main(){
  Circle donut;
  double area=donut.getArea();
  cout<<"area of donut is"<<area<<endl;

  Circle pizza(30);
  area=pizza.getArea();
  cout<<"area of pizza is"<<area<<endl;
}
