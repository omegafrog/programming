#include "person.hpp"

person::person(string name){
  this->name = name;
  this->playerAnswer=-1;
}

int person::setAnswer(){
  cout << name << ">>";
  cin >> playerAnswer;
  return playerAnswer;
}
string person::getName() 
{
  return name;
}

int person::getAnswer(){
  return playerAnswer;
}

