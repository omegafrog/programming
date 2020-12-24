#include <iostream>
#include "morse.hpp"

int main(){
	morse m1;
	
	string s1;
	getline(cin, s1);
	m1.morse2Text(m1.text2morse(s1),s1);
}
