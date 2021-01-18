#include "GraphicEditor.hpp"

#include "Circle.hpp"
#include "Line.hpp"
#include "Rectangle.hpp"
#include "Shape.hpp"
#include "UI.hpp"

const string Shape::aShapeArray[SHAPE_NUM] = {"Line", "Circle", "Rectangle"};

GraphicEditor::GraphicEditor() {
  apStart = nullptr;
  apLast = nullptr;
  aInterface = new UI;
}

GraphicEditor::~GraphicEditor() {
  // delete all added shapes
  mObjects.clear();
  // delete UI
  delete aInterface;
}

// add Shape first of list
void GraphicEditor::Add(const int typeIndex) {
  Shape *newShape = 0;
  if (typeIndex == 1) { // Shape is line
    newShape = new Line;
  } else if (typeIndex == 2) { // Shape is Circle
    newShape = new Circle;
  } else if (typeIndex == 3) { // Shape is Rectangle
    newShape = new Rectangle;
  }
    // cout << newShape->ToString()<<endl; okay
    mObjects.push_back(newShape);
    apStart = mObjects[0];
    apLast = mObjects[mObjects.size() - 1];

}

void GraphicEditor::Delete(const int index) {
  auto it = mObjects.begin();
  if (index == 1) { // delete first object.
    mObjects.erase(it);
  } else if (index == mObjects.size()) { // delete last
    mObjects.erase(mObjects.end() - 1);
  } else { // delete either first object or
    for (int i = 0; i < index; i++) {
      it++;
    }
    mObjects.erase(it);
  }
}

void GraphicEditor::Peek() {
  int i=0;
  auto it = mObjects.begin();
  if (mObjects.size()!=0) {
    for (it;it!=mObjects.end();it++) {
      cout << (i++) + 1 << ":";
      (*it)->Draw();
	  cout << endl;
    }
  }
}

void GraphicEditor::Quit() { exit(0); }

void GraphicEditor::StartEditor() {

  while (1) {

    UI::ShowMenu();
    int choice = UI::GetMenu();

    switch (choice) {
    case 1: { // add Object
      Add(UI::GetShapeType());
      break;
    }
    case 2: { // delete object
      Delete(UI::GetObjectIndex(*this));
      break;
    }
    case 3: { // peek all object
      Peek();
      break;
    }
    case 4: { // quit program
      Quit();
      break;
    }
    default: {
    }
    }
  }
}
