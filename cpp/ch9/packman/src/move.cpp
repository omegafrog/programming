#include "human.hpp"
#include "monster.hpp"

void Human::move(){
	char direction;
	cout << " left (a), down (s), up (w), right (d) >> ";
	cin >> direction;
	
	while( direction != 'a' || direction != 's' || direction != 'w' || direction != 'd'){
		cout << "wrong value. try again."<<endl;
		cout << " left (a), down (s), up (w), right (d) >> ";
		cin >> direction;
	}
		
	switch(direction){
		case 'a':
			{
				x--;
				break;
			}
		case 's':
			{
				y--;
				break;
			}
		case 'w':
			{
				y++;
				break;
			}
		case 'd':
			{
				x++;
				break;
			}
	}
}

void Monster::move(){
	srand((unsigned)time(0));
	int direction = rand()%3;
	
	switch(direction){
		case 0: // left
			{
				x-=distance;
				break;
			}
		case 1: // down
			{
				y-=distance;
				break;
			}
		case 2: // up
			{
				y+=distance;
				break;
			}
		case 3: // right
			{
				x+=distance;
				break;
			}
	}
}