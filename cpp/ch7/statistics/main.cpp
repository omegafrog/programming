#include "statistics.hpp"
#include <iostream>
using namespace std;

int main(){
  Statistics stat;
  if(!stat) cout<<"no statistic data now."<<endl;

  int x[5];
  cout << "five integers>>";
  for (int i=0; i < 5; i++) {
    cin >> x[i];
  }

  for (int i=0; i < 5; i++) {
    stat << x[i];
  }
  stat << 100 << 200;
  ~stat;

  int avg;
  stat >> avg;
  cout << "avg=" << avg << endl;

}
