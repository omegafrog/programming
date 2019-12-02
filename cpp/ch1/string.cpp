#include<iostream>
#include<string>
using namespace std;

int main(){
  string song("Falling in love with you");
  string elvis("Elvis Presley");
  string singer;

  cout<<"\""+song+"\""<<" of the singer is? ";
  cout<<"(hint:first char is "<<elvis[0]<<")";


  getline(cin,singer);//string input
  if(singer == elvis)
    cout<<"correct.\n";
  else
    cout<<"wrong. he is "+elvis+"."<<endl;

  return 0;
}

