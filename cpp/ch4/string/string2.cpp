#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&'); // 문자열 입력
	cin.ignore();

	string quarry;
	string find;
	cout<<"find:";
	getline(cin, find, '\n');

	cout<<"replace:";
	getline(cin, quarry, '\n');
	int startindex=0;
	while(s.find(find,startindex)!=-1){
	  
	  int findex=s.find(find,startindex);
	    
	  
	  s.replace(findex,quarry.size(),quarry);
	}
	cout<<s;
}
	  
