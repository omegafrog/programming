#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <iostream>

using namespace std;

class Shape;
class UI;
class GraphicEditor {
protected:
  Shape *apStart, *apLast;
  int aSize;
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
