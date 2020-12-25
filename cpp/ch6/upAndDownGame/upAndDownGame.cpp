#include "upAndDownGame.hpp"

int upAndDown::answer=0;
person upAndDown::p[2]={person("a"),person("b")};

void upAndDown::makeRandomAns(){
  srand((unsigned)time(0));
  int n = rand();
  upAndDown::answer=n%100;
}

bool upAndDown::isCorrect(int& value){
  if(upAndDown::getAns()==value)
	return 1;
  else
	return 0;
}

int upAndDown::getAns(){
  return answer;
}

void upAndDown::question(person& p)
{
  cout << "answer is between " << p.getValue()<< " and " << upAndDown::answer <<"."<<endl;
}

