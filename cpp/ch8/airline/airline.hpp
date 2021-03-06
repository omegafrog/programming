#ifndef AIRLINE_H
#define AIRLINE_H

#include "schedule.hpp"
#include <iostream>
#include <limits>

#define MAX_SCHEDULE_SIZE 3
#define MORNING 7
#define NOON 12
#define EVE 17

#define WRONG_SEAT_EXCEPTION 1
#define EMPTY_SEAT_EXCEPTION 2
#define WRONG_SEATNAME_EXCEPTION 3
#define WRONG_SCHEDULE_EXCEPTION 4

using namespace std;

class AirLine;
class Console {
private:

public:
  Console();
  ~Console(){}

  void interface(AirLine& airline); // print menu
  void printSeats(Schedule schedule); // print selected schedule's seats 
  void peek(Schedule* schedules); // print all schedule's seats
  
  // get input from user and return
  int setScheduleTime();
  int setSeatIndex();
  string setName();
};

class AirLine {
private:
  Schedule schedules[MAX_SCHEDULE_SIZE] = {Schedule(7), Schedule(12), Schedule(17)};
  static Console console;

public:
  AirLine();
  ~AirLine() {}
  
  
  Console& getConsole();
  int makeReserv(int scheduleTime, int index, string name);
  int cancelReserv(int scheduletime, int index, string name);
  Schedule* returnPeekValue();

};



#endif /* AIRLINE_H */
