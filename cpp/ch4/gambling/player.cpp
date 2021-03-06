#include "player.hpp"

player::player() : player(""){

}

player::player(string name){
  for (int i = 0; i < 3; i++) {
    slots[i] = 0;
  }
  this->name = name;
}

player::~player(){};

string player::getName(){
  return name;
}

void player::setSlots(){
  srand((unsigned)time(0)); // make random seed
  for(int i=0;i<3;i++){
	slots[i]=rand()%3; // rand return 0 to 32767. modulus 3 return 0, 1, 2
  }
}

int* player::getSlots(){
  return slots;
}
