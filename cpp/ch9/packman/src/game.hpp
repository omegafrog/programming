#ifndef GAME_H
#define GAME_H

#include "food.hpp"
#include "human.hpp"
#include "monster.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define GRID_WIDTH 20
#define GRID_HEIGHT 10
using namespace std;

class Game {
private:
  Human *hp;
  Monster *mp;
  Food *fp;
  char grid[GRID_HEIGHT][GRID_WIDTH];

  void printGrid();
  int getGameState(); // game is preceeding, return 0. player win the
  // game, return 1. player lose the game, return -1.
public:
  Game();
  ~Game() {
    delete hp;
    delete mp;
    delete fp;
  }

  void startGame();
};

#endif /* GAME_H */
