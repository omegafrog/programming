#include "gamblingGame.hpp"
int gamblingGame::isCorrect(int turn){
  int* slotsP;
  slotsP=pp[turn].getSlots();
  if(slotsP[0]==slotsP[1]==slotsP[2])
	return 1;
  else return 0;
}

void gamblingGame::startGame(){
  cout << "****** start gambling game. ******" <<endl;

  cout << " first player name >>";
  string name1;
  cin >> name1;

  cout << "second player name >>";
  string name2;
  cin >> name2;

  pp[0]=player(name1);
  pp[1]=player(name2);

  char enter;
  int turnCount=0;
  int* slots;
  while(!isCorrect(turnCount)){
	slots=pp[turnCount].getSlots();

	cout << pp[turnCount].getName() << ":";

	enter =cin.get();

	cout << "                         " <<slots[0] << "     " <<slots[1] << "      " <<slots[2] << "      sorry!"<<endl;
	if (turnCount==0) turnCount=1;
	else turnCount=0;
  }
  	cout << pp[turnCount].getName() << ":";

	enter =cin.get();

	
	cout << "                         " << slots[0] << "     " << slots[1] << "      " <<slots[2] << "      "<< pp[turnCount].getName() << "is win!";
}
