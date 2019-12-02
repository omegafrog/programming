#include<iostream>

class Person{
private:
  double money;
  void addMoney(int money){
    this->money+=money;
  }

  static int sharedMoney;
  static void addShared(int n){
    sharedMoney+=n;
  }
};
int Person::sharedMoney=10;//static variable must be declared on global scope.

  


  
