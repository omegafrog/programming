#include<iostream>
#include"stand.h"
using namespace std;

int main(){
  stand s;
  char temp='B';
  cout<<"press 'b' to turn on."<<endl;
  
  

  while(1){
    cin>>temp;
    if(temp=='b'){
      s.turnon();
      s.lightvalueup();
      s.display();
      cout<<"press 'b' to make light bright."<<endl;
      cout<<"press 'B' to turn off."<<endl;
    }
    else if(temp=='b'&&s.get_lightvalue()!=0){
      s.lightvalueup();
      s.display();
      cout<<"press 'b' to make light bright."<<endl;
      cout<<"press 'B' to turn off."<<endl;
    }
    else if(temp=='B'){
      s.turnoff();
      s.display();
      break;}
    else{
      cout<<"wrong input. please again."<<endl;}
  }
}

    
