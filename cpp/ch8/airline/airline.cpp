#include "airline.hpp"

AirLine::AirLine() 
{
  
}

void AirLine::makeReserv(int scheduleTime, int index, string name)
{
  
  Seat newSeat(index);
  newSeat.setName();
  newSeat.setEmptyState();
  
  
  if(scheduleTime == MORNING){
	if(schedules[0].getSeat(index).isEmpty()){
	  schedules[0].getSeat(index) = newSeat;
	}
  }else if(scheduleTime == NOON){
	if(schedules[1].getSeat(index).isEmpty())
	  schedules[1].getSeat(index)=newSeat;
  }else if(scheduleTime == EVE){
	if(schedules[2].getSeat(index).isEmpty())
	  schedules[2].getSeat(index)=newSeat;
  }else{
	cout << "wrong scheduleTime."<<endl;
	return;
  }
  
  
}


