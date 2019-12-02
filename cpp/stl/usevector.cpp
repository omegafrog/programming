#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
using namespace std;

mt19937_64 rng(3244);
uniform_int_distribution<int> dist(0,500);


int main(){
  vector<int> v;
  
  for(int i=0;i<10;i++){
    v.push_back(dist(rng));
  }
  

  vector<int>::iterator it2;
  it2=v.begin();
  cout<<"\nbefore\n"<<endl;
  for(it2;it2!=v.end();it2++){
    cout<<*it2<<endl;
  }
  int indexa;
  int indexb;
  cout<<"\ndelete\na:";
  cin>>indexa;
  cout<<"b:";
  cin>>indexb;
  
  vector<int>::iterator it;
  it=v.begin()+indexa-1;
  for(int i=0;i<indexb-indexa+1;i++){
    it=v.erase(it);
  }
  ////////////////////////////////////////
  // v.erase(v.begin()+a, v.begin()+b); //
  ////////////////////////////////////////
  
  cout<<"\nafter\n"<<endl;
  it2=v.begin();
  for(it2;it2!=v.end();it2++){
    cout<<*it2<<endl;
  }
  
}
