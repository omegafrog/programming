#include "book.hpp"

Book::Book():Product()
{
  setISBN();
  setAuthor();
  setTitle();
}

void Book::setISBN()
{
  cout <<"ISBN>>";
  cin >> isbn;
}

void Book::setAuthor()
{
  cout <<"Author>>";
  cin>>author;
}

void Book::setTitle()
{
  cout <<"title>>";
  cin>>title;
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






