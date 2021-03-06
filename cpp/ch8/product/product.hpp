#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <limits>

using namespace std;

class Product{
private:
  int id;
  string description;
  string producer;
  int cost;


public:

  Product(int id);
  virtual ~Product() {};
  
  // setter
  void setDescription();
  void setProducer();
  void setCost();
  
  // getter

  int getId();
  string getDescription();
  string getProducer();
  int getCost();
  
};


#endif /* PRODUCT_H */
