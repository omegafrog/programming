#include<iostream>
#include<vector>
using namespace std;
class shape{
public:
  virtual void print()=0;
  virtual void delfig()=0;
};

class Line : public shape{
  void print()
  {
    cout <<"This is Line\n";
  }
  void delfig(){
    cout<<"delete Line.\n";
  }
    
};

class Circle : public shape{
  void print()
  {
    cout<<"this is circle.\n";
  }
  void delfig(){
    cout<<"delete circle\n";
  }
};

class Rectangle : public shape
{
  void print()
  {
    cout<<"This is rectangle\n";
  }
  void delfig()
  {
    cout<<"delete rectangle\n";
  }
};


class GraphicEditor{
private:
  vector<shape*> shapes;
  int size=0;
  static GraphicEditor* instance;
  GraphicEditor(){
    int size=0;
  }
public:
  void makeLine(){
    shapes.push_back(new Line);
    size++;
  }
  void makeCircle(){
    shapes.push_back(new Circle);
    size++;
  }
  void makeRectangle(){
    shapes.push_back(new Rectangle);
    size++;
  }
  void printGraphic(){
    cout<<"print all figures...\n";
    for(int i=0;i<size;i++)
      shapes[i]->print();
    cout<<"delete all figures...\n";
    for(int i=0;i<size;i++)
      shapes[i]->delfig();
  }

  ////////////////////////////////////////////////////
  // getinstance() is return the value of instance. //
  // so if you want to access method, then use like //
  //         GraphicEditor::getinstance().blablabla //
  ////////////////////////////////////////////////////
  
  static GraphicEditor& getinstance(){
    if(!instance){
      instance=new GraphicEditor();
    }
    return *instance;
  }
  
};

GraphicEditor* GraphicEditor::instance=NULL;


int main(){
  
  int choice;
  int choice2;
  for(;;){
    cout<<"1 : new figure\n2 : print&delete all figures\n3 : exit\n";
    cin>>choice;
    switch(choice){
    case 1:
      for(;;){
	cout<<"1 : new Line\n2 : new Circle\n3 : new Rectangle\n4 : end\n";
	cin>>choice2;
	switch(choice2){
	case 1:
	  cout<<"add new line\n";
	  GraphicEditor::getinstance().makeLine();
	  break;
	case 2:
	  cout<<"add new circle\n";
	  GraphicEditor::getinstance().makeCircle();
	  break;
	case 3:
	  cout<<"add new Rectangle\n";
	  GraphicEditor::getinstance().makeRectangle();
	  break;
	case 4:
	  cout<<"input complete.\n";
	  break;
	default:
	  cout<<"wrong input. try again\n";
	  break;
	}
	if(choice2==4) break;
      }
      break;
    case 2:
      GraphicEditor::getinstance().printGraphic();
      break;
    case 3:
      return 0;
      break;
    }
  }
}

