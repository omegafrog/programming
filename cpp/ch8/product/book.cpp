#include "book.hpp"

Book::Book(int id):Product(id)
{
  setISBN();
  setAuthor();
  setTitle();
}

void Book::setISBN()
{
  cout <<"ISBN>>";
  while(!( cin >> isbn)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout <<"wrong input. try again>>";
  }

}

void Book::setAuthor()
{
  cout <<"Author>>";
  while(!( cin >> author)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout <<"wrong input. try again>>";
  }
}

void Book::setTitle()
{
  cout <<"title>>";
  while (!(cin >> title)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "wrong input. try again>>";
  }
}

int Book::getISBN()
{
  return isbn;
}

string Book::getAuthor()
{
  return author;
}

string Book::getTitle()
{
  return title;
}






