#include "human.hpp"

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