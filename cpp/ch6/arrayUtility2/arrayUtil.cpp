#include "arrayUtil.hpp"

arrayUtility2::arrayUtility2() {
  size = 5;
  s1 = new int [5];
  s2 = new int [5];
  #ifdef DEBUG
  cout << s1 << " " << s2 << " " << size << endl;
  #endif
}

int *arrayUtility2::concat(int *s1, int *s2, int size) {
  int *returnArr = new int[size * 2];

  for (int i = 0; i < size * 2; i++) {
    if (i > size-1) {
      returnArr[i] = s2[i - size];
    } else {
      returnArr[i] = s1[i];
    }
  }
  #ifdef DEBUG
  for(int i=0;i<size*2;i++){
	cout << returnArr[i] << " ";
  }  cout << endl;
  for(int i=0;i<size;i++){
	cout << s1[i] << " ";
  }	cout << endl;
  for(int i=0;i<size;i++){
	  cout << s2[i] << " ";
  }  cout << endl;
  #endif
  return returnArr;
}

int *arrayUtility2::remove(int *s1, int *s2, int size, int retSize) {
  int index = 0;
  if (retSize != 0) {
    int *s3 = new int[3];
    for (int i = 0; i < retSize; i++) {
      if (s1[i] != s2[i]) {
        s3[index] = s1[i];
        index++;
      }
    }
	/*debug*/
#ifdef DEBUG
  for(int i=0;i<size;i++){
	cout << s1[i] << " ";
  }	cout << endl;
  for(int i=0;i<size;i++){
	  cout << s2[i] << " ";
  }  cout << endl;
  for(int i=0;i<retSize;i++){
	cout << s3[i] << " ";
  }cout << endl;
#endif

    return s3;
  } else {
    return 0;
  }
}

int arrayUtility2::getRetSize(int *s1, int *s2, int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
	for(int j=0;j<size;j++){
	  if(s1[i]==s2[j])
		count++;
	}    
  }
  return size-count;
}

int** arrayUtility2::setArray() {
  int** tmp = new int* [2];
  tmp[0]=new int [5];
  tmp[1]=new int [5];
  
  string inputX;
  string inputY;

  while (1) {
    cout << "input five integers. append in array x."
         << ">>";
    getline(cin, inputX,'\n');

    istringstream ss(inputX); // make stringstream
    int counter = 0;
    string stringBuffer;

    while (getline(ss, stringBuffer, ' ')) { // string use stringstream to getline's inputstream
      if (counter < size) {
        s1[counter] = stoi(stringBuffer);
		tmp[0][counter]=s1[counter];
        counter++;
      } else if(counter==size){
		break;
      } else{
		counter++;
	  }
		
    }
    if (counter < size) {
      cout << " less than 5 number." << endl;
      continue;
    } else if(counter>size){
	  cout << "more than 5 number."<<endl;
	  continue;
    } else{
	  break;
	}
  }
  while (1) {
    cout << "input five integers. append in array y."
         << ">>";
	getline(cin, inputY,'\n');

    istringstream ss(inputY); // make stringstream
    int counter = 0;
    string stringBuffer;

    while (getline(ss, stringBuffer,
                   ' ')) { // string use stringstream to getline's inputstream
      if (counter < size) {
        s2[counter] = stoi(stringBuffer);
		tmp[1][counter]=s2[counter];
        counter++;
      } else if (counter == size) {
        break;
      } else {
		counter++;
      }
    }
    if (counter < size) {
      cout << " less than 5 number." << endl;
      continue;
    } else if (counter>size){
      cout << "more than 5 number." << endl;
      continue;
    } else {
      break;
    }
  }
    return tmp;
}
