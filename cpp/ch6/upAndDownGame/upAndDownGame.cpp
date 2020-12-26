#include "upAndDownGame.hpp"

int upAndDown::answer=0;
int upAndDown::minValue=0;
int upAndDown::maxValue=99;

person upAndDown::p[2]={person("a"),person("b")};

void upAndDown::makeRandomAns(){
  srand((unsigned)time(0));
  int n = rand();
  upAndDown::answer=n%100;
}

bool upAndDown::isCorrect(person p){
  if(p.getAnswer()==answer)
	return 1;
  else {
    return 0;
  }
}

void upAndDown::printHint(){
  
  cout << "answer is between " << minValue << " and " << maxValue << "."<<endl;
}

void upAndDown::setMinMaxVal(int playerAnswer){
  if(playerAnswer <answer && minValue<playerAnswer )
	minValue=playerAnswer;
  else if(playerAnswer>answer && maxValue>playerAnswer)
	maxValue=playerAnswer;
}

void upAndDown::startGame(){
  cout << "start up&down game."<<endl;
  int i=0;
  makeRandomAns();
  while(1){
	printHint();
	setMinMaxVal(p[i].setAnswer());
	
	if(isCorrect(p[i]))
	  break;
	else{
	  if(i==1) i=0;
	  else i=1;
	}
  }
  cout << p[i].getName()<<" is win!!!"<<endl;
}
