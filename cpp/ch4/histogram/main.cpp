#include <iostream>
#include "histogram.h"

using namespace std;
int main(){
  Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
  elvisHisto.put("falling in love with you");
  elvisHisto.putc('-');
  elvisHisto.put("Elvis Presley");
  elvisHisto.print();
}
