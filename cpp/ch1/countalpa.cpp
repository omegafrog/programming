#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
  char input[10000];
  cout<<"please put string: ";
  cin.getline(input, 10000,';');

  int len=0;
  len = strlen(input);
  
  /*  for(int i=0;i<len;i++){
    if(isupper(input[i])){
    input[i]=tolower(input[i]);
    //cout<<input[i];
    }
    }*/
  char alpabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int countalpa[26]={0,};
  
  for(int x=0;x<len;x++){
    for(int i=0;i<26;i++){
      if(alpabet[i]==tolower(input[x]))
	countalpa[i]++;
    }
  }

  for(int i=0;i<26;i++){
    cout<<alpabet[i]<<":";
      for(int x=1;x<=countalpa[i];x++){
	cout<<'*';
      }
    cout<<endl;
  }
}

    
