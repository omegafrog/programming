#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
using namespace std;


class player{
 private:
  string name;
  string word; //word player talked
 protected:
  
public:
  player();
  ~player();

  void setName();
  void setWord();
  string getWord();
  string getName();
};
#endif
