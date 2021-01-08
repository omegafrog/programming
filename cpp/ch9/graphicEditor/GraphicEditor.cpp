#include "GraphicEditor.hpp"

string Shape::aShapeArray[]={"Line", "Circle", "Rectangle"};

GraphicEditor::GraphicEditor() 
{
  apStart = nullptr;
  apLast = nullptr;
  aSize = 0;
  aInterface = new UI;
}

GraphicEditor::~GraphicEditor()
{
  // delete all added shapes
  Shape *pCurrentShape = apStart;
  while (pCurrentShape != nullptr) {
    delete pCurrentShape;
    pCurrentShape = pCurrentShape->GetApNextObject();
  }
  // delete UI
  delete aInterface;
}

void GraphicEditor::Add(const int typeIndex)
{
  Shape* newShape = 0;
  if(typeIndex == 0){ // Shape is line
	newShape = new Line;
  }else if(typeIndex == 1){ // Shape is Circle
	newShape = new Circle;
  }else if(typeIndex == 2){ // Shape is Rectangle
	newShape = new Rectangle;
  }
  
  apStart = 
}

void GraphicEditor::Delete(const int index)
{
  

  
}

