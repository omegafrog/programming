#include "product.hpp"

Product::Product(int id) 
{
  this->id = id;
  setDescription();
  setProducer();
  setCost();
}

void Product::setDescription(){
  cout << "product description>>";
  getline(cin, description);
  //cin.ignore();

}

void Product::setProducer()
{
  cout << "producer>>";
  while(!( cin >> producer)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout <<"wrong input. try again>>";
  }


}

void Product::setCost()
{
  cout <<"cost>>";
  while(!( cin >> cost)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout <<"wrong input. try again>>";
  }
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





