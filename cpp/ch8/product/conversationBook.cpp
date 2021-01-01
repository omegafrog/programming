#include "conversationBook.hpp"

ConversationBook::ConversationBook(int id)  : Book(id)
{
  setLanguage();
}

void ConversationBook::setLanguage()
{
  cout <<"language>>";
  cin >> language;
  cin.get();
}

string ConversationBook::getLanguage()
{
  return language;
}

