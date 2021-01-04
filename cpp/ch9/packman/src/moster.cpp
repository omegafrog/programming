#include "monster.hpp"

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