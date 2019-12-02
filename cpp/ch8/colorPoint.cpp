#include <iostream>
#include <string>
using namespace std;

class Point{
  int x,y;
public:
  void set(int x, int y){ this->x=x; this->y=y;}
  void showPoint(){
    cout<< "("<< x << ","<<y<<")"<<endl;
    
  }
};

//protected: want to use 
class ColorPoint:public Point{
  int r,g,b;
public:
  void setColor(int r,int g, int b);
  void showColorPoint();
  
}
