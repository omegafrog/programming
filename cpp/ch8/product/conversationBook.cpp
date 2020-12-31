#include "conversationBook.hpp"

ConversationBook::ConversationBook()  : Book()
{
  setLanguage();
}

void ConversationBook::setLanguage()
{
  cout <<"language>>";
  cin >> language;
}

string ConversationBook::getLanguage()
{
  return language;
}

