#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "product.hpp"
using namespace std;

class Book : protected Product{
private:
  int isbn;
  string author;
  string title;
public:
  Book();


  void setISBN();
  void setAuthor();
  void setTitle();
  
  int getISBN();
  string getAuthor();
  string getTitle();
  
};



#endif /* BOOK_H */
