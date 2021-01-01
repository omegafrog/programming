#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <limits>
#include "product.hpp"
using namespace std;

class Book : public Product{
private:
  int isbn;
  string author;
  string title;
protected:
  void setISBN();
  void setAuthor();
  void setTitle();

public:

  Book(int id);  
  int getISBN();
  string getAuthor();
  string getTitle();
  


  
};



#endif /* BOOK_H */
