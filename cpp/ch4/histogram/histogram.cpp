#include "histogram.h"

Histogram::Histogram(string exp){
  this->exp=exp;
  toLower();
}

void Histogram::put(string exp){
  this->exp.append(exp);
  toLower();
}

void Histogram::putc(char ch){
  char *chs;
  chs = new char [2] ;
  
  chs[0]=ch;
  chs[1]='\0';
  
  this->exp.append(chs);
  toLower();
}

void Histogram::toLower(){
  // current position
  int curr=0;
  // while end of string
  while(curr<exp.length()){
	// if character is upper,
	if(isupper(exp[curr]))
	  // tolower
	  exp[curr]=tolower(exp[curr]);
	// character is lower
	else
	  // move pos to next char
	  curr++;
  }
}

void Histogram::setCharNum(){
  int count=0; // count for num of character
  int curr=0; // current position in string


  while(curr<exp.length()){
	if(isalpha(exp[curr])){
	  count++;

	}
	curr++;
  }
  charNum=count;
}

void Histogram::setAlphabetNum(){

  for(int i=0;i<26;i++){
	int count=0;
	int curr=0;

	//while end of exp
	while(exp.find(alphabet[i],curr)!=-1){
	  // if finding alphabet is exist
	  count++;
	  curr=exp.find(alphabet[i],curr)+1;
	}
	numOfAlphabet[i]=count;
  }
}

void Histogram::printStar(){
  for(int i=0;i<26;i++){
	cout << alphabet[i] << "(" << numOfAlphabet[i] << ")" << "   : ";
	for(int j=0;j<numOfAlphabet[i];j++)
	  cout << "*";
	cout << endl;
  }
  
}

void Histogram::print(){
  setAlphabetNum();
  setCharNum();

  cout << exp <<endl;

  cout << "number of all alphabet " << charNum <<endl;
  
  printStar();
  
}
