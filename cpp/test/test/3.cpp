#include <iostream>
#include <vector>

using namespace std;

class Circle {
	int radius;
public:
  Circle(){
    radius=3;
  }
	Circle(int radius) {
		this->radius = radius;
	}
	int GetRadius()
	{
		return radius;
	}
};

//private->public
class Pizza : public Circle
{
public:
  Pizza(){};
    	int GetWidth()
	{
		return GetRadius() * GetRadius() * 3.14;
	}
};


////////////////////////////////////////////////////이 부분은 수정하지 마시오
class DominoPizza : public Pizza
{
public:
	int GetWidth()
	{
		//이 부분에서 에러가 나는 이유를 주석으로 설명하고
		//에러가 발생하지 않도록 수정하라
	        //pizza객체가 circle객체를 private로 상속하기 때문에 getradius또한 private라서 객체외부에서 접근이 안된다.
		return GetRadius() * GetRadius() * 3.14;
	}
};

int main()
{
	//pizza객체가 생성되지 않는 이유를 주석으로 설명하고
	//에러가 발생하지 않도록 수정하라
        //생성자가 없어서 만들어주어야 하는데, 인자를 주지 않는 생성자를 만들기 위해서는 기본 클래스에도 인자가 없는 생성자를 만들어주어야 한다.
       
	Pizza pizza;
}
///////////////////////////////////////////////////////////////////////ÀÌºÎºÐÀº ¼öÁ¤ÇÏÁö ¸¶½Ã¿À
