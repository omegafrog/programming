#include "morse.hpp"

morse::morse() {
  alphabet[0] = ".-";
  alphabet[1] = "-...";
  alphabet[2] = "-.-.";
  alphabet[3] = "-..";
  alphabet[4] = ".";
  alphabet[5] = "..-.";
  alphabet[6] = "--.";
  alphabet[7] = "....";
  alphabet[8] = "..";
  alphabet[9] = ".---";
  alphabet[10] = "-.-";
  alphabet[11] = ".-..";
  alphabet[12] = "--";
  alphabet[13] = "-.";
  alphabet[14] = "---";
  alphabet[15] = ".--.";
  alphabet[16] = "--.-";
  alphabet[17] = ".-.";
  alphabet[18] = "...";
  alphabet[19] = "-";
  alphabet[20] = "..-";
  alphabet[21] = "...-";
  alphabet[22] = ".--";
  alphabet[23] = "-..-";
  alphabet[24] = "-.--";
  alphabet[25] = "--..";

  digit[0] = "-----";
  digit[1] = ".----";
  digit[2] = "..---";
  digit[3] = "...--";
  digit[4] = "....-";
  digit[5] = ".....";
  digit[6] = "-....";
  digit[7] = "--...";
  digit[8] = "---..";
  digit[9] = "----.";

  slash = "-..-.";
  question = "..--..";
  comma = "--..--";
  period = ".-.-.-";
  plus = ".-.-.";
  equal = "-...-";
}

string& morse::text2morse(string text) {
  // index to check current position.
  int current = 0;
  while (current < text.length()) {
    // if text[current] is alphabet
	if(isalpha(text[current])){
	  //check alphabet[0](a) to alphabet[25](z)
		for (int i = 0; i < 26; i++) {
		  // 'a' is 97 to ascii
			char c=(i + 97);

			// text[current] is char. not string
			// find correct alphabet char,
		  if (text[current]==c) {
			//print
			cout << alphabet[i] << " ";
			// morse word is appended to morseWord.
			  morseWord.append(alphabet[i]);
			  // 1 morse word is seperated by space char
			  morseWord.append(" ");
			  // 
			current++;
			break;
		  }
		}
		continue;
	}
    // text[current] is digit
	if(isdigit(text[current])){
	  // check text[current] is which digit char
		for (int i = 0; i < 10; i++) {
			char c=(i + 48);
		  if (text[current]==c) {
			cout << digit[i] << " ";
			// morse word is appended to morseWord.
			  morseWord.append(digit[i]);
			  // 1 morse word is seperated by space char
			  morseWord.append(" ");
			current++;
			break;
		  }
		}
		continue;
	}
	// text[current] is special char
	if( text[current]=='/'){
		cout << slash << " ";
		morseWord.append(slash);
		  morseWord.append(" ");
		current++;
		continue;
	}
	   else if(text[current]=='?'){
		   cout<<question << " ";
		   morseWord.append(question);
		  morseWord.append(" ");
		   current++;
		   continue;
	   }
	   else if(text[current]=='.'){
		   cout<<comma << " ";
		   morseWord.append(comma);
		  morseWord.append(" ");
		   current++;
		   continue;
	   }
	   else if(text[current]==','){
		   cout<<period << " ";
		   morseWord.append(period);
		  morseWord.append(" ");
		   current++;
		   continue;
	   }
	   else if(text[current]=='+'){
		   cout<<plus << " ";
		   morseWord.append(plus);
		  morseWord.append(" ");
		   current++;
		   continue;
	   }
	   else if(text[current]=='='){
		   cout<<equal << " ";
		   morseWord.append(equal);
		  morseWord.append(" ");
		   current++;
		   continue;
	   }
	  // text[current] is space
	  if(text[current]==' '){
		//space char 's morse word is "  "
		  cout << "  ";
		  morseWord.append("  ");
		  current++;
		  continue;
	  }
  }
	cout << endl;
	// return morseWord's reference
	return morseWord;
}
void morse::morse2Text(string& morse,string text){
  // current position 
	int current=0;
	// Changed character number.
	int charNum=0;

	// if first word is space,
	if (morseWord.substr(0,2).compare("  ")){
		current=2;
		charNum=1;
	}
	while(charNum<text.length()){
	  // text's first space index, started finding at current
		int toIndex=morse.find(" ",current);
		// One space char is delimiter of morse word,
		// current to toIndex is one morse word.
		if(toIndex-current>0){
		  // get morseword
			string morseword=morse.substr(current, toIndex-current);

			// compare with alphabet
			for(int i=0;i<26;i++){
				if(morseword.compare(alphabet[i])==0){
					cout << static_cast<char>(i+97);
					current=toIndex+1;
					charNum++;
					break;
				}
			}
			// compare with digit num
			for(int i=0;i<10;i++){
				if(morseword.compare(digit[i])==0){
					cout << static_cast<char>(i+48);
					current=toIndex+1;
					charNum++;
					break;
				}
			}

			// compare with special num
			if(morseword.compare(slash)==0){
				cout << "/" ;
				current=toIndex+1;
					charNum++;
				continue;
			}
			else if(morseword.compare(question)==0){
				cout<< "?";
				current=toIndex+1;
					charNum++;
				continue;
			}
			else if(morseword.compare(comma)==0){
				cout<<".";
				current=toIndex+1;
					charNum++;
				continue;
			}
			else if(morseword.compare(period)==0){
				cout<<",";
				current=toIndex+1;
					charNum++;
				continue;
			}
			else if(morseword.compare(plus)==0){
				cout<<"+";
				current=toIndex+1;
					charNum++;
				continue;
			}
			else if(morseword.compare(equal)==0){
				cout<<"=";
				current=toIndex+1;
					charNum++;
				continue;
			}

			
		}
		// space char.
		else{
			cout << " " ;
			current = current+2;
			charNum++;
		}
		
	}
	
	
}
