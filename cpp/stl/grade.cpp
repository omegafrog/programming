#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class Student{
public:
  int id;
  int score;

  Student(int id, int score){
    this->id=id;
    this->score=score;
  }
};


int main(){
  list<Student> S;
  list<Student>::iterator it;
  list<Student>::iterator it2;
  it2=S.begin();
  while(1){
    it=S.begin();
    int id;
    int score;
    cout<<"new Student"<<endl;
    cout<<"id:";
    cin>>id;
    if(id==0) break;
    
    cout<<"score:";
    cin>>score;
    while(it->score>score){
      it++;
    }
    S.insert(it,1,Student(id,score));
  }
  for(it2=S.begin();it2!=S.end();it2++){
    cout<<"id:"<<it2->id<<"\n"<<"score:"<<it2->score<<endl;
    }
  
}
