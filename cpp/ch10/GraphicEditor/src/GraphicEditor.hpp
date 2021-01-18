#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <iostream>
#include <vector>

using namespace std;

class Shape;
class UI;
class GraphicEditor {
protected:
  Shape *apStart, *apLast;
  vector<Shape*> mObjects;
  UI *aInterface;

public:
  GraphicEditor();
  virtual ~GraphicEditor();

  void Add(const int typeIndex);
  void Delete(const int index);
  void Peek();
  void Quit();

  friend UI;

  void StartEditor();
};

#endif /* GRAPHICEDITOR_H */
