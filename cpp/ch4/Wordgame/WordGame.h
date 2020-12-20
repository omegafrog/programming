#ifndef __WORDGAME_H__
#define __WORDGAME_H__


#include <iostream>
#include "player.h"
#define START_STR "아버지"
using namespace std;

class wordGame{
private:
  int playerNum;
  player *pp; // pointer for player array
  string startStr;
  
protected:
  
public:
  wordGame();
  ~wordGame();

  void setPlayerNum();
  void setPlayers(); //add player to player pointer.
  int compWord(string preword, string currword); // compare preword's last word to currword's first word

  void play_game(); //

};
#endif
