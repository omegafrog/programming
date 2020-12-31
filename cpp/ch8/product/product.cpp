#include "product.hpp"

int Product::id = 0;

Product::Product() 
{
  id++;
  setDescription();
  setProducer();
  setCost();
}

void Product::setDescription(){
  cout << "product description>>";
  getline(cin, description);

}

void Product::setProducer()
{
  cout << "producer>>";
  cin >> producer;

}

void Product::setCost()
{
  cout <<"cost>>";
  cin >> cost;

}



int Product::getId()
{
  return id;
}

string Product::getDescription()
{
  return description;
}

string Product::getProducer()
{
  return producer;
}

int Product::getCost()
{
  return cost;
}



