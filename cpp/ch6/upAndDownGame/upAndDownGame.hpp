#ifndef __UPDOWNGAME_H__
#define __UPDOWNGAME_H__
#include <iostream>
#include "person.hpp"
#include <ctime>
#include <cstdlib>
using namespace std;

class upAndDown
{
private:
  static int answer;
  static person p[2];
  static int minValue;
  static int maxValue;

  
  static void makeRandomAns();
  static bool isCorrect(person p);
  static void setMinMaxVal(int answer);
  static void printHint();
public:
  static void startGame();

};

#endif
