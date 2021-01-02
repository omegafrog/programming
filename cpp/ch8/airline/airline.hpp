#ifndef AIRLINE_H
#define AIRLINE_H

#include "schedule.hpp"
#include <iostream>
#include <limits>

#define MAX_SCHEDULE_SIZE 3
#define MORNING 7
#define NOON 12
#define EVE 17

using namespace std;

class AirLine {
private:
  Schedule schedules[MAX_SCHEDULE_SIZE] = {Schedule(7), Schedule(12),
                                           Schedule(17)};

public:
  AirLine();
  ~AirLine() {}

  void makeReserv(int scheduleTime, int index, string name);
  void cancelReserv(int scheduletime, int index, string name);
  Schedule* returnPeekValue();
};

#endif /* AIRLINE_H */