#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <iostream>
using namespace std;

class Shape;
class UI;
class GraphicEditor {
private:
  Shape *apStart, *apLast;
  int aSize;
  UI *aInterface;
public:
  GraphicEditor();
  virtual ~GraphicEditor(){}

  void Add(const int typeIndex) const;
  void Delete(const int index) const;
  void Peek() const;
  void Quit() const;

  void StartEditor() const;
};


#endif /* GRAPHICEDITOR_H */
