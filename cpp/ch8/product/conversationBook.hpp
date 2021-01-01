#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H

#include <iostream>
#include "book.hpp"
using namespace std;

class ConversationBook : public Book{
private:
  string language;
public:
  ConversationBook(int id);

  void setLanguage();

  string getLanguage();
};


#endif /* CONVERSATIONBOOK_H */
