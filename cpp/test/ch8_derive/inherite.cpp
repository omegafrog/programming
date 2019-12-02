#include <iostream>
#include <string>
using namespace std;


class Point { 
	int x, y; //한 점 (x,y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint:public Point{
  int r,g,b;
public:
  void SetColor(int r, int g,int b);
  void printColor();
  
}
