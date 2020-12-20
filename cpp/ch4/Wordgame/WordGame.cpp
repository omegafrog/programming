#include "WordGame.h"

//generator
wordGame::wordGame(){
  playerNum=0;
  pp = 0;
  startStr= START_STR;
}

// destructor
wordGame::~wordGame(){}

// get num of player
void wordGame::setPlayerNum(){
  cout << "How many players play the game?";
  cin >> playerNum;
}

// make player's object
void wordGame::setPlayers(){
  pp = new player [playerNum];


  for(int i=0;i<playerNum;i++){
	pp[i].setName();
  }
}

// compare previous word's last word to current word's first word
int wordGame::compWord(string preword, string currword){
  // current word's first word - string is korean, so u have to compare 2 bytes
  char currWord1=currword.at(0);
  char currWord2=currword.at(1);
  // previous word's last word
  char preWord1=preword.at(preword.size()-3);
  char preWord2=preword.at(preword.size()-2);


  // if
  if(currWord1==preWord1 && currWord2==preWord2)
	return 1;
  else
	return 0;
}

void wordGame::play_game(){
  cout<<"start wordGame."<<endl;

  addPlayerNum();
  addPlayers();

  cout << "starting word is "<<START_STR <<endl;

  int currindex=0, preindex=-1;
  // compare start str to first player
  
  pp[currindex].setWord();
  // if first player is wrong
  if(!compWord(START_STR,pp[currindex].getWord()))
	return ;

  
  do{
	preindex=currindex;
	currindex=(currindex+1)%playerNum;
	
	pp[(currindex)%playerNum].setWord();
	


	  
  }while(compWord(pp[preindex].getWord(),pp[currindex].getWord()));
  cout << pp[currindex].getName() << " is lose!"<<endl;
}
