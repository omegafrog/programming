#include<iostream>
#include<vector>
using namespace std;

class Coffee{
  virtual void Print()=0;
};

class Americano:public Coffee{
   void Print(){
    cout<<"I am Amercano.\n";
  }
  
};

class CaffeLatte:public Coffee{
   void Print(){
    cout<<"I am CaffeLatte.\n";
  }
};

class CaffeMoca:public Coffee{
   void Print(){
    cout<<"I am CaffeMoca.\n";
  }
};

class CoffeeMachine{
  vector<Coffee*> coffee;
  int size=0;
  static CoffeeMachine* instance;
  CoffeeMachine(){
    int size=0;
  };
  
public:
  void makeAmericano(){
    coffee.push_back(new Americano);
    size++;
  }
  void makeCaffeLatte(){
    coffee.push_back(new CaffeLatte);
    size++;
  }
  void makeCaffeMoca(){
    coffee.push_back(new CaffeMoca);
    size++;
  }
  static CoffeeMachine& getinstance(){
    if(!instance)
      instance=new CoffeeMachine();
    return *instance;
  }
  
};

  
