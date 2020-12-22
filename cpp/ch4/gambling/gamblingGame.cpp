#include "gamblingGame.hpp"
int gamblingGame::isCorrect(int turn) {
  int *slotsP;
  slotsP = pp[turn].getSlots();
  if (slotsP[0] == slotsP[1] && slotsP[1]==slotsP[2])
    return 1;
  else
    return 0;
}

void gamblingGame::startGame() {
  cout << "****** start gambling game. ******" << endl;

  cout << " first player name >>";
  string name1;
  cin >> name1;

  cout << "second player name >>";
  string name2;
  cin >> name2;
  cin.get();

  pp[0] = player(name1);
  pp[1] = player(name2);

  char enter;
  int turnCount = 0; // index for change player
  int *slots;
  while (1) {
    pp[turnCount].setSlots(); // make random slot

    slots = pp[turnCount].getSlots(); //get player's slot value

    cout << pp[turnCount].getName() << ":"; // playerName:

    enter = cin.get(); // get enter key

	cout << "                         " << slots[0] << "     " << slots[1]
		 << "      " << slots[2] << "      ";
           
    if (isCorrect(turnCount)) { // if slot is correct
      cout << pp[turnCount].getName()<<" is win!"<<endl;
	  break;
    } else { //slot is not correct
	  cout << "sorry"<<endl;
    }
	// player is only 2
    if (turnCount == 0)
      turnCount = 1;
    else
      turnCount = 0;
  }
}
