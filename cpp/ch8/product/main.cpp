#include "book.hpp"
#include "compactDisc.hpp"
#include "conversationBook.hpp"
#include "product.hpp"
#include <iostream>
#include <typeinfo>
#include <limits>

#define MAX_PRODUCT 100
using namespace std;

int main() {
  Product **pp = new Product *[100];
  int productIndex = 0;

  int choice = 0;
  int productKind = 0;
  cout << "***** product manipulation system *****"<<endl;
  while (1) {


	cout << "add product(1), lookup all products(2), quit(3) ? ";

	while(!(cin>>choice)){
	  cin.clear();
	  cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	cin.ignore();
	
    switch (choice) {
    case 1: { // add product

      cout << "kind of product ";
      cout << "book(1), musicDisc(2), conversationBook(3) ? ";
      while (!(cin >> productKind)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "wrong input. try again>>";
      }
	  cin.ignore();

      // choose kind of product
      switch (productKind) {
      case 1: { // product is book
        pp[productIndex++] = new Book(productIndex);
        break;
      }
      case 2: { // product is musicDisc
        pp[productIndex++] = new compactDisc(productIndex);
        break;
      }
      case 3: { // product is conversationBook
        pp[productIndex++] = new ConversationBook(productIndex);
        break;
      }
      }
	  break;
    }
    case 2: { // lookup all products
      for (int i = 0; i < productIndex; i++) {
        cout << "--- productID : " << pp[i]->getId() << endl;

        // dynamic_cast return null if downcasting is fail
        Book *book = dynamic_cast<Book *>(pp[i]);
        if (book) {
          cout << "product description>>" << book->getDescription() << endl;
          cout << "producer>>" << book->getProducer() << endl;
          cout << "cost>>" << book->getCost() << endl;
          cout << "title>>" << book->getTitle()<<endl;
          cout << "author>>" << book->getAuthor()<<endl;
          cout << "ISBN>>" << book->getISBN()<<endl;
		  continue;
        }

        compactDisc *musicDisc = dynamic_cast<compactDisc *>(pp[i]);
        if (musicDisc) {
          cout << "product description>>" << musicDisc->getDescription()
               << endl;
          cout << "producer>>" << musicDisc->getProducer() << endl;
          cout << "cost>>" << musicDisc->getCost() << endl;
          cout << "title>>" << musicDisc->getTitle() <<endl;
          cout << "singer>>" << musicDisc->getSinger() <<endl;
		  continue;
        }
        ConversationBook *converBook = dynamic_cast<ConversationBook *>(pp[i]);
        if (converBook) {
          cout << "product description>>" << converBook->getDescription()
               << endl;
          cout << "producer>>" << converBook->getProducer() << endl;
          cout << "cost>>" << converBook->getCost() << endl;
          cout << "title>>" << converBook->getTitle() << endl;
          cout << "author>>" << converBook->getAuthor() << endl;
          cout << "language>>" << converBook->getLanguage() << endl;
          cout << "ISBN>>" << converBook->getISBN() << endl;
		  continue;
        }
      }
	  break;
    }
    case 3: // end
    {
      return 0;
    }
    }
  }
}
