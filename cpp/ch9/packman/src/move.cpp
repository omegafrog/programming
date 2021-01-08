#include "human.hpp"
#include "monster.hpp"

#define GRID_WIDTH 20
#define GRID_HEIGHT 10

void Human::move() {
  char direction;
  while (1) {
    cout << " left (a), down (s), up (w), right (d) >> ";
    cin >> direction;

    if (direction != 'a')
      if (direction != 's')
        if (direction != 'w')
          if (direction != 'd') {
            cout << "wrong inpu. try again." << endl;
            continue;
          }

    switch (direction) {
    case 'a': {
      if (x - distance >= 0) {
        x--;
        return;
      } else {
        cout << "Cannot exit the field!" << endl;
        continue;
      }
    }
    case 's': {
      if (y + distance >= 0) {
        y++;
        return;
      } else {
        cout << "Cannot exit the field!" << endl;
        continue;
      }
    }
    case 'w': {
      if ((y - distance) < GRID_HEIGHT) {
        y--;
        return;
      } else {
        cout << "Cannot exit the field!" << endl;
        continue;
      }
    case 'd': {
      if (x + distance < GRID_WIDTH) {
        x++;
        return;
      } else {
        cout << "Cannot exit the field!" << endl;
        continue;
      }
    }
    }
    }
  }
}

void Monster::move() {
  srand((unsigned)time(0));
  int direction = rand() % 3;

  while (1) {
    switch (direction) {
    case 0: // left
    {
      if (x - distance >= 0) {
        x -= distance;
        return;
      } else {
        direction = rand() % 3;
        continue;
      }
    }
    case 1: // down
    {
      if (y + distance >= 0) {
        y += distance;
		return;
      } else {
        direction = rand() % 3;
        continue;
      }
    }
    case 2: // up
    {
      if (y - distance < GRID_HEIGHT) {
        y -= distance;
		return;
      } else {
        direction = rand() % 3;
        continue;
      }
    }
    case 3: // right
    {
      if (x + distance < GRID_WIDTH) {
        x += distance;
		return;
      } else {
        direction = rand() % 3;
        continue;
      }
    }
    }
  }
}
