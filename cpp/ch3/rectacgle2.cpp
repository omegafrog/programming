#include<iostream>
using namespace std;

class Rectangle{
public:
  int width;
  int height;
  Rectangle():Rectangle(10,10){}
  Rectangle(int s):Rectangle(s,s){}
  Rectangle(int w,int h){
  width=w;
  height=h;
  cout<<"width:"<<w<<"height:"<<h<<endl;
  }
  bool isSquare(){
    if(width==height) return 1;
    else return 0;
  }
};
int main(){
  Rectangle rect1;
  Rectangle rect2(3,5);
  Rectangle rect3(3);

  if(rect1.isSquare()) cout<<"rect1 is square"<<endl;
  if(rect2.isSquare()) cout<<"rect2 is square"<<endl;
  if(rect3.isSquare()) cout<<"rect3 is square"<<endl;
}
