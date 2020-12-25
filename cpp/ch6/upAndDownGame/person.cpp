#include "person.hpp"

person::person(string name){
  this->name = name;
}

int& person::setValue(){
  cout << name << ">>";
  cin >> value;
  int& ref=value;
  return ref;
}
int person::getValue() 
{
  return value;
}

