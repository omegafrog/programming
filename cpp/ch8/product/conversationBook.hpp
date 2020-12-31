#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H

#include <iostream>
#include "book.hpp"
using namespace std;

class ConversationBook : protected Book{
private:
  string language;
public:
  ConversationBook();

  void setLanguage();

  string getLanguage();
};


#endif /* CONVERSATIONBOOK_H */
