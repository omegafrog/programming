#include "UI.hpp"
#include "GraphicEditor.hpp"
#include "Shape.hpp"

void UI::ShowMenu() { cout << "add(1), delete(2), peek(3), quit(4) >> "; }

int UI::GetMenu() {
  int choice = 0;
  while (!(cin >> choice) || (choice < 1 || choice > 4)) {
    cout << "wrong argument. try again." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "add(1), delete(2), peek(3), quit(4) >> ";
  }

  return choice;
}

int UI::GetShapeType() {
  // show Shape list
  for (int i = 0; i < SHAPE_NUM; i++) {
    cout << Shape::aShapeArray[i] << "(" << i+1 << ")";
  }

  // get input ShapeType
  int choice = 0;
  // input is wrong
  while (!(cin >> choice) || (choice < 1) || (choice > SHAPE_NUM)) {
    cout << "wrong argument. try again." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < SHAPE_NUM; i++) {
      cout << Shape::aShapeArray[i] << "(" << i << ")" << endl;
    }
  }
  return choice;
}

int UI::GetObjectIndex(GraphicEditor &ThisEditor) {
  int inputIndex = 0;
  cout << "select index>>";
  while (!(cin >> inputIndex) || (inputIndex < 1) ||
         (inputIndex > ThisEditor.mObjects.size())) {
    cout << "wrong value. try again." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "select index>>";
  }
  return inputIndex;
}
