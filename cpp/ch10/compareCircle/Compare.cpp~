#include <iostream>
using namespace std;

class Circle {
private:
  int mRadius;
public:
  Circle(int radius=1) { this->mRadius = radius;};
  ~Circle(){}

  bool operator>(Circle op2){ return this->mRadius>op2.mRadius;}

  int GetRadius() { return mRadius;}
};

template <class T>
T GetBigger(T a, T b){
  if(a > b) return a;
  else return b;
}

int main(){
  int a = 20, b=50, c;
  c = GetBigger(a, b);
  cout << c << endl;
  Circle waffle(10), pizza(20), y;
  y = GetBigger(waffle, pizza);
  cout << y.GetRadius ()<< endl;
}
