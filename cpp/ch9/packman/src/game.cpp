#include "game.hpp"

Game::Game() {
  srand((unsigned)time(0));
  hp = new Human(rand() % GRID_WIDTH, rand() % GRID_HEIGHT);
  mp = new Monster(rand() % GRID_WIDTH, rand() % GRID_HEIGHT);
  fp = new Food(rand() % GRID_WIDTH, rand() % GRID_HEIGHT);

  for (int i=0; i < GRID_HEIGHT; i++) {
    for (int j=0; j < GRID_WIDTH; j++) {
	  grid[i][j] = '-';
	}

  }


#if DEBUG
  cout << hp->getX() << " " << hp->getY() << endl;
  cout << mp->getX() << " " << mp->getY() << endl;
  cout << hp->getX() << " " << fp->getY() << endl;
#endif
}

void Game::startGame() {
  cout << "** packman start **" << endl;
  cout << endl;

  int gameState = 0;
  while (gameState == 0) {
    printGrid();
	grid[hp->getY()][hp->getX()]='-';
	grid[mp->getY()][mp->getX()]='-';
	grid[fp->getY()][fp->getX()]='-';
    hp->move();
    mp->move();
    fp->move();
    gameState = getGameState();

#if DEBUG
    cout << hp->getX() << " " << hp->getY() << endl;
    cout << mp->getX() << " " << mp->getY() << endl;
    cout << hp->getX() << " " << fp->getY() << endl;
    cout << gameState << endl;
#endif

    if (gameState == 1) {
      cout << "player win!" << endl;
      break;
    } else if (gameState == -1) {
      cout << "player is lose..." << endl;
      break;
    }
  }
}

void Game::printGrid() {
  int hX, hY, mX, mY, fX, fY; // object's point
  hX = hp->getX();
  hY = hp->getY();
  mX = mp->getX();
  mY = mp->getY();
  fX = fp->getX();
  fY = fp->getY();

  grid[hY][hX] = hp->getShape();
  grid[mY][mX] = mp->getShape();
  grid[fY][fX] = fp->getShape();

  for (int i = 0; i < GRID_HEIGHT; i++) {
    for (int j = 0; j < GRID_WIDTH; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }
}

int Game::getGameState() {
  int isHumanEatFood = 0, isMonsterEatHuman = 0, isMonsterEatFood = 0;
  isHumanEatFood = hp->collide(fp);
  isMonsterEatFood = mp->collide(fp);
  isMonsterEatHuman = mp->collide(hp);

  if (isHumanEatFood)
    return 1;
  else if (isMonsterEatFood || isMonsterEatHuman)
    return -1;
  else
    return 0;
}
