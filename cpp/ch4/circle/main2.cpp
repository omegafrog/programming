#include <iostream>
#include"structpointer_circle.h"
using namespace std;

int main(){
  Circle circleArray[3]={Circle(10),Circle(20),Circle(30)};
  for(int i=0;i<3;i++)
    cout<<"area is "<<circleArray[i].getArea()<<endl;
}
