#include "airline.hpp"

Console AirLine::console;

AirLine::AirLine() {}

int AirLine::makeReserv(int scheduleTime, int index, string name) {

  // make new seat object
  Seat newSeat(index);
  newSeat.setName(name);
  newSeat.setEmptyState(0);

  // check whether index is correct or not
  if (0 > index || index > 7) {
    return WRONG_SEAT_EXCEPTION;
  }

  // check scheduleTime is correct.
  // index for schedules[]
  int scheduleIndex;
  switch (scheduleTime) {
  case MORNING: {
    scheduleIndex = 0;
    break;
  }
  case NOON: {
    scheduleIndex = 1;
    break;
  }
  case EVE: {
    scheduleIndex = 2;
    break;
  }
  default:
	return WRONG_SCHEDULE_EXCEPTION;
	break;
  }

  schedules[scheduleIndex].getSeat(index)=newSeat;
  // if (scheduleTime == MORNING) { if
  //   (schedules[0].getSeat(index).isEmpty())
  //   schedules[0].getSeat(index) = newSeat; } else if (scheduleTime
  //   == NOON) { if (schedules[1].getSeat(index).isEmpty())
  //   schedules[1].getSeat(index) = newSeat; } else if (scheduleTime
  //   == EVE) { if (schedules[2].getSeat(index).isEmpty())
  //   schedules[2].getSeat(index) = newSeat; } else { return
  //   WRONG_SCHEDULE_EXCEPTION; }
  return 0;
}

int AirLine::cancelReserv(int scheduleTime, int index, string name) {

  // check scheduleTime is correct.
  int scheduleIndex;
  switch (scheduleTime) {
  case MORNING: {
    scheduleIndex = 0;
    break;
  }
  case NOON: {
    scheduleIndex = 1;
    break;
  }
  case EVE: {
    scheduleIndex = 2;
    break;
  }
  default:
	return WRONG_SCHEDULE_EXCEPTION;
	break;
  }

  // check index is correct.
  if (0 > index || index > 8) {
	// cout << "wrong seat index." << endl;
    return WRONG_SEAT_EXCEPTION;
  }

  // reference for canceling seat.
  Seat &canceledSeat = schedules[scheduleIndex].getSeat(index);
  
  // compare seat index
  if (canceledSeat.isEmpty()) { 
	// cout << "this seat is already empty." << endl;
    return EMPTY_SEAT_EXCEPTION;
  }// compare name
  if (canceledSeat.getName().compare(name)!=0) { 
	// cout << "Reserved Seat's name is not equall to inserted name."
	// << endl;
    return WRONG_SEATNAME_EXCEPTION;
  }

  // if all parameter is right, set seat's empty state to 0.
  canceledSeat.setEmptyState(1);
  return 0;
}

Schedule* AirLine::returnPeekValue()
{
  return schedules;
}

Console& AirLine::getConsole(){
  return console;
}
