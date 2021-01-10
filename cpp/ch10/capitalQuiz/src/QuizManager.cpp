#include "QuizManager.hpp"
#include "Console.hpp"
#include "Nation.hpp"

QuizManager::~QuizManager() {
  delete mConsole;
  mConsole = 0;
  mNations.clear();
}

void QuizManager::StartManage() {
  int menuIndex = 0;
  string nationName = "";
  string capitalName = "";

  cout << "***** Nation Quiz Game start *****" << endl;
  while (1) {
    // print menu
    PrintMenu();
    // get menu;
    menuIndex = Console::GetMenuIndex();
    // execute selected work
    switch (menuIndex) {
    case 1: { // add new Nations
      cout << "Manager have " << mNations.size() << " nations." << endl;
      cout << "Nation and capital(if no no, quit)" << endl;

      // get Nationname and capitalname.
      while (1) {
        cout << mNations.size() + 1 << ">>";
		cin >> nationName >> capitalName;
        // nationname == capitalname == "no", quit adding
        if (nationName.compare("no") == 0 && capitalName.compare("no") == 0) {
          break;
        } else { // add Nation

          for (int i = 0; i < mNations.size(); i++) {
            if (mNations[i]->GetNationName() == nationName) { // already exist
              cout << "already exist!" << endl;
              continue;
            }
          }
		  Nation *newNation = new Nation(nationName, capitalName);
          AddNation(newNation);
          continue;
        }
      }
      break;
    }
    case 2: { // Start Quiz
      StartQuiz();
      break;
    }
    case 3: { // quit manager
      quit();
      break;
    }
    }
  }
}

void QuizManager::PrintMenu() {
  cout << "add new Nations: 1, start quiz: 2, quit: 3>>";
}

void QuizManager::StartQuiz() {
  default_random_engine generator;
  uniform_int_distribution<int> distribution(0, mNations.size()-1);
  string capitalName;
  for (int i = 0;; i = distribution(generator)) {
    cout << "capital of " << mNations[i]->GetNationName() << "is ?";
    capitalName = Console::GetInputCapitalName();
    if (capitalName.compare("exit") == 0) {
      break;
    }
    if (mNations[i]->IsCorrect(capitalName)) {
      cout << "Correct!!" << endl;
    } else {
      cout << "NO!!" << endl;
    }
  }
}

void QuizManager::quit() { exit(0); }

void QuizManager::AddNation(Nation *newNation) { mNations.push_back(newNation); }
