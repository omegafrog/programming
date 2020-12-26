#include "arrayUtil.hpp"
using namespace std;

int main(){
  arrayUtility2 au1;
  int** tmp;
  tmp = au1.setArray();
  int* s3;
  
  s3 = arrayUtility2::concat(tmp[0],tmp[1],5);
  cout << " print concated array."<<endl;
  for(int i=0;i<10;i++){
	cout << s3[i]<<" ";
  }
  cout << endl;
  cout << " array x[] - y[] is" <<endl;
  int* s4;
  int retSize= au1.getRetSize(tmp[0], tmp[1], 5);
  s4 = arrayUtility2::remove(tmp[0],tmp[1],5,retSize);
  for(int i=0;i<retSize;i++){
	cout << s4[i] << " ";
  }
  cout << endl;
}
