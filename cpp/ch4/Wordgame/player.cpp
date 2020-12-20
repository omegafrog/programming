#include "player.h"

player::player(){
}

player::~player(){}

void player::setName(){
  cout <<"player's name:";
  cin >>name;
}
void player::setWord(){
  cout <<name<<">>";
  cin >>word;
}

string player::getWord(){
  return word;
}

string player::getName(){
  return name;
}
