#include<iostream>
using namespace std;

class rectangle{
public:
  int width;
  int height;

  int getArea(){
    return width*height;
  }
};

int main(){
  rectangle rect;
  rect.width =2;
  rect.height=3;
  cout<<"area:"<<rect.getArea()<<endl;
}
