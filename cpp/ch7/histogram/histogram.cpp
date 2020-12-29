#include "histogram.hpp"

Histogram::Histogram(): str(""), size(0)
  {
	for (int i=0; i < 26; i++) {
	  alphabet[i]=0;
	}

  }
Histogram::Histogram(string nString) : str(nstring), size(nstring.size())){
  for(int i=0;i<26;i++){
	alphabet[i]=0;
  }
}


void Histogram::toLower(string& str)
{
  int current=0;
  while(current<size){
	if(isupper(str[current])){
	  tolower(str[current]);
	}
	current++;
  }
}

string& Histogram::operator<<(string inputstr){
  str.append(inputstr);
  size+=inputstr.size();
  
  return *this;
}

string& Histogram::operator<<(char inputchar){
  string tmp(inputchar);
  str.append(tmp);
  size+=1;

  return *this;
}

void Histogram::operator!(){
  
}
