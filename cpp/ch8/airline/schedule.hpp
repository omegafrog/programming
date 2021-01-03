#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "seat.hpp"
#include <iostream>
#include <limits>

#define MAX_SEATS_SIZE 8
using namespace std;

class Schedule {
private:
  Seat seats[MAX_SEATS_SIZE] = {Seat(0), Seat(1), Seat(2), Seat(3),
                                Seat(4), Seat(5), Seat(6), Seat(7)};
  int scheduleTime;

public:
  Schedule(int scheduleTime);
  ~Schedule() {}

  void setSeats(string name, int index, bool state);
  void setScheduleTime(int scheduleTime);

  Seat &getSeat(int index);
  int getScheduleTime();
};

#endif /* SCHEDULE_H */
