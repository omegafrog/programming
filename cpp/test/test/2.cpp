#include <iostream>
#include <vector>

using namespace std;

class Person {
public:
	virtual void WhoAmI() {
		cout << "I am person." << endl;
	}
};

class Professor : public Person {
  virtual void WhoAmI(){
    cout<<"I am professor.\n";
  }
};

class Student : public Person {
  virtual void WhoAmI(){
    cout<<"I am student.\n";
  }
};

class Developer : public Person {
  virtual void WhoAmI(){
    cout<<"I am developer.\n";
  }
};

int main()
{
	Person* arr[5];
	arr[0] = new Student();
	arr[1] = new Professor();
	arr[2] = new Student();
	arr[3] = new Student();
	arr[4] = new Developer();

	for (int i = 0; i < 5; i++)
		arr[i]->WhoAmI();

	for (int i = 0; i < 5; i++)
		delete arr[i];
}
