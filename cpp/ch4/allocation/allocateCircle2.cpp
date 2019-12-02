#include<iostream>
#include"structpointer_circle.h"
using namespace std;

int main(){
  int circlenum;

  cout<<"circlenumber:";
  cin>>circlenum;
  int count=0;
  Circle *p=new Circle[circlenum];
  
  for(int i=0;i<circlenum;i++){
    int temp;
    cout<<"circle"<<i<<":";
    cin>>temp;
    (p+i)->setRadius(temp);
  }
  for(int i=0;i<circlenum;i++){
    cout<<(p+i)->getArea()<<" ";
    if((p+i)->getArea()>100&&(p+i)->getArea()<200)
      count++;
  }
  cout<<"number of circle that is bigger than 100 and smaller than 200 is "<<count<<endl;
  delete [] p;
}
  
    
