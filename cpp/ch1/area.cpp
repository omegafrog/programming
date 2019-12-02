#include<iostream>
#define PI 3.14
using namespace std;


namespace A{
  double area(int r){
    return PI*r*r;//area of circle
  
  }
}

namespace B {
  double area(int r){
    return r*r;//area of square
  
  }
}

int main(){
  int n=3;
  char c='#';
  cout<<c<<5.5<<'-'<<n<<"hello"<<true<<"\n";
  cout<<"n+5="<<n+5<<'\n';
  cout<<"area is "<<A::area(n);
  cout<<"area is "<<B::area(n);
  
}
