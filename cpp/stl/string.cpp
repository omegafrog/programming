#include<iostream>
#include<string>
using namespace std;

int main(){
  string string1;
  cout<<"string:";
  getline(cin,string1);
  char alpabet[][26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','w','x','y','z',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  char find;
  for(int i=0;i<26;i++){
    find=alpabet[0][i];
    int startindex=0;
    
    while(string1.find(find,startindex)!=-1){
      alpabet[1][i]++;
      startindex=string1.find(find,startindex)+1;
    }
  }
  char ansalpa;
  int ans=0;
  for(int i=0;i<26;i++){
    if(ans<(int)alpabet[1][i]){
      ans=(int)alpabet[1][i];
      ansalpa=alpabet[0][i];
    }
  }
  cout<<"ans"<<ansalpa<<"\n"<<ans<<endl;
}
