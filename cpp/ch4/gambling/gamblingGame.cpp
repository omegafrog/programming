#include "gamblingGame.hpp"

int gamblingGame::isCorrect(int turn){
  if(pp[turn].slots[0]==pp[turn].slots[1]==pp[turn].slots[2])
	return 1;
  else return 0;
}


