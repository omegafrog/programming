#ifndef STAND_H
#define STAND_H
/////////////////////////////////////////////////////////////
/////////////// one-button stand ////////////////////////////
/////////////////////////////////////////////////////////////

//turn on to press button('b'), and turn off the button twice rapidly(I suppose this action 'B')
//when stand is turn on, press the button to make light brighter.
//light level is 0 to 4, 0:off, 1:min, 4:max
//If you turn off the stand, print good bye.

class stand{
  int power; // state of turn on/off
  int lightvalue;  // state of lightvalue: off=0, 1:min~4:max
 public:
  void turnon();  // power=1, lightvalue=1
  void turnoff(); // power=0, lightvale=0
  void lightvalueup(); //lightvalue level up.
  void settimer(int tm);
  void display();
  int get_lightvalue();
  stand();
  ~stand();
};

#endif
  
  
