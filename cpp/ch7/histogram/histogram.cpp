#include "histogram.hpp"

Histogram::Histogram(): str(""), size(0)
  {
	for (int i=0; i < 26; i++) {
	  alphabet[i]=0;
	}

  }
Histogram::Histogram(string nString) : str(nString), size(nString.size()){
  toLower(str);
  for(int i=0;i<26;i++){
	alphabet[i]=0;
  }
}


void Histogram::toLower(string& str)
{
  int current=0;
  
  while(current<str.size()){
	if(isupper(str[current])){
	  str[current]=tolower(str[current]);
	}
	current++;
  }
}

void Histogram::countAlpha()
{
  for (int i=0; i < 26; i++) {
    int current = 0; // index of current position
	while(current<size){
	  if(str[current]==static_cast<char>(i+97))
		alphabet[i]+=1;
	  current++;
	}
  }
}

int Histogram::getTotalAlphabetCount()
{
  int count=0;
  for (int i=0; i < 26; i++) {
    count+=alphabet[i];
  }
  return count;
}

void Histogram::printStar(int index)
{
  for (int i=0; i < alphabet[index]; i++) {
    cout <<"*";
  }

}




Histogram& Histogram::operator<<(string inputstr){
  toLower(inputstr);
  str.append(inputstr);
  size+=inputstr.size();

  
  return *this;
}

Histogram& Histogram::operator<<(char inputchar){
  if(isupper(inputchar))
	inputchar = tolower(inputchar);
  char* tmp = &inputchar;
  str.append(tmp,1);
  size+=1;


  return *this;
}

void Histogram::operator!(){
  cout << str << endl;

  countAlpha();
  
  cout << "total number of alphabet :" << this->getTotalAlphabetCount()<<endl;
  for (int i=0; i < 26; i++) {
    cout << static_cast<char>(97+i)<<":";
	printStar(i);
	cout << endl;
  }
}

