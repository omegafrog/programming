#include "schedule.hpp"

Schedule::Schedule(int scheduleTime) { this->scheduleTime = scheduleTime; }

void Schedule::setSeats(string name, int index, bool state) {
  seats[index].setName(name);
  seats[index].setEmptyState(state);
}

void Schedule::setScheduleTime(int scheduleTime) {
  
  this->scheduleTime = scheduleTime;
}

Seat &Schedule::getSeat(int index) { return seats[index]; }

int Schedule::getScheduleTime() { return scheduleTime; }
