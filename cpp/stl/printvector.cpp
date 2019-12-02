#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Cpoint{
public:
  int x;
  int y;
  Cpoint(int x,int y){
    this->x=x;
    this->y=y;
  }
  void printxy(){
    cout<<"("<<x<<","<<y<<")"<<endl;
  }
};

bool compare(Cpoint& c1, Cpoint& c2){ //when return is 0, change.
  return c1.x>c2.x;
}

int main(){
  vector<Cpoint> C;

  int i=0;
  while(1){
    int gx;
    int gy;
    cout<<"x:";
    cin>>gx;
    cout<<"y:";
    cin>>gy;
    
    C.push_back(Cpoint(gx,gy)); // insert vector member

    i++;
    if(gx==0&&gy==0)
      break;
  }
  sort(C.begin(),C.end(),compare); 
  vector<Cpoint>::iterator it; //it=&Cpoint

  for(it=C.begin(); it!=C.end();it++){ 
    it->printxy();
  }
    
  
}
