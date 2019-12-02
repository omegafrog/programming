#include<iostream>
#include"stand.h"
using namespace std;

stand::stand(){power=1; lightvalue=0;};
stand::~stand(){cout<<"turn off. good bye...."<<endl;};

void stand::turnon() { power=1; };
void stand::turnoff() { power=0, lightvalue=0; };
void stand::lightvalueup() {lightvalue==4?lightvalue=1:lightvalue++;};
void stand::display() { cout<<"power:"<<power<<" light:"<<lightvalue<<endl;}
int stand::get_lightvalue() { return lightvalue;};

  
  


  

  
