#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class person{
  string name;
  int playerAnswer;
public:
  person(string name);  

  int setAnswer();
  string getName();
  int getAnswer();
};

#endif /* PERSON_H */
