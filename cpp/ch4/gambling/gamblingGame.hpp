#ifndef __GAMBLINGAME_H__
#define __GAMBLINGAME_H__

#include <iostream>
#include "player.hpp"
using namespace std;

class gamblingGame{
 private:
  player pp[2]; // player array pointer

  
 protected:
  
 public:


  int isCorrect(int turn); // three num of slot is all same. turn means who's turn
  void startGame();
  
};
#endif
