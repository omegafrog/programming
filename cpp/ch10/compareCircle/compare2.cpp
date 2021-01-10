#include <iostream>
using namespace std;

class Comparable {
private:
  
public:
  virtual bool operator > (Comparable& op2)=0;
  virtual bool operator < (Comparable& op2)=0;
  virtual bool operator == (Comparable& op2)=0;
  
};

class Circle : public Comparable{
private:
  int mRadius;
public:
  Circle(int radius=1) { this->mRadius = radius;}
  ~Circle(){}

  bool operator>(Comparable &op2) {
    Circle *c1  = dynamic_cast<Circle*>(&op2);
    return this->mRadius > c1->mRadius;
  }
  bool operator<(Comparable &op2){
	Circle *c1  = dynamic_cast<Circle*>(&op2);
    return this->mRadius < c1->mRadius;
  }
  bool operator==(Comparable &op2) {
    Circle *c1 = dynamic_cast<Circle *>(&op2);
    return this->mRadius == c1->mRadius;
  }
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
