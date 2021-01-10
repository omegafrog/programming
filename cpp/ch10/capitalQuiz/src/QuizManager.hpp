#ifndef QUIZMANAGER_H
#define QUIZMANAGER_H

#include <iostream>
#include <vector>
#include <random>
using namespace std;

class Console;
class Nation;
class QuizManager {
private:
  vector<Nation*> mNations;
  Console *mConsole;

  friend Console;
public:
  QuizManager(){mConsole = 0;}
  ~QuizManager();
  
  void StartManage();
  void PrintMenu();
  void StartQuiz();
  void quit();
  void AddNation(Nation* newNation);
  
};


#endif /* QUIZMANAGER_H */
