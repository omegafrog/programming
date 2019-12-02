#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
  Circle() { radius = 1; };
  Circle(int radius) { this->radius = radius; };
  void setRadius(int radius) { this->radius = radius; };
  double getArea() { return 3.14*radius*radius; };
  void readRadius(Circle &c){ cin>>radius; };
};


int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " <<donut.getArea() << endl;}
}

