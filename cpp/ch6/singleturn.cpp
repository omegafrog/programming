#include<iostream>
#include<string>
using namespace std;
class inputBuffer{
private:
  string input;
  int strlen;
  static inputBuffer* instance;
  inputBuffer(){
    strlen=0;
  }
public:
  void getInput(){
    getline(cin,input, '\n');
  }

  void printinput(){
    int singlenum=0;
    int startindex=0;
    while(1){
      int findex=input.find("Single",startindex);
      if(findex==-1) break;
      startindex=findex+6;
      singlenum++;
    }
  }

  static inputBuffer& getinstance(){
    if(!instance){
      instance=new inputBuffer();
    }
    return *instance;
  }
};

  
  
