#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class person{
  string name;
  int value;
public:
  person(string name);  

  int& setValue();
  int getValue();
};

#endif /* PERSON_H */
