#include "Oval.h"


Oval::Oval():Oval(1,1) { };

Oval::Oval(int w, int h):width(w),height(h){ };

Oval::~Oval(){
  cout <<"width:"<<width<<'\n'<<"height"<<height<<endl; 
}

double Oval::getWidth(){
  return width;
}

double Oval::getHeight(){
  return height;
}

void Oval::set(int w, int h){
  width=w;
  height=h;
}

void Oval::show(){
  cout <<"width:"<<width<<'\n'<<"height"<<height<<endl; 
}
