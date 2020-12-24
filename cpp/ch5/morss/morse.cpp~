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
  int current = 0;
  while (current < text.length()) {
    // if text[current] is alphabet
	if(isalpha(text[current])){
		for (int i = 0; i < 26; i++) {
			char c=(i + 97);

		  // string tmp(&cp); // alphabet
		  if (text[current]==c) {
			cout << alphabet[i] << " ";
			  morseWord.append(alphabet[i]);
			  morseWord.append(" ");
			current++;
			break;
		  }
		}
		continue;
	}
    // text[current] is digit
	if(isdigit(text[current])){
		for (int i = 0; i < 10; i++) {
			char c=(i + 48);
		  if (text[current]==c) {
			cout << digit[i] << " ";
			  morseWord.append(digit[i]);
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
		  cout << "  ";
		  morseWord.append("  ");
		  current++;
		  continue;
	  }
  }
	cout << endl;
	return morseWord;
}
void morse::morse2Text(string& morse,string text){
	int current=0;
	int charNum=0;
	
	if (morseWord[0]==' '){
		current=1;
		charNum=1;
	}
	while(charNum<text.length()){
		int toIndex=morse.find(" ",current);
		if(toIndex-current>0){
			string morseword=morse.substr(current, toIndex-current);
			
			for(int i=0;i<26;i++){
				if(morseword.compare(alphabet[i])==0){
					cout << static_cast<char>(i+97);
					current=toIndex+1;
					charNum++;
					break;
				}
			}
			
			for(int i=0;i<10;i++){
				if(morseword.compare(digit[i])==0){
					cout << static_cast<char>(i+48);
					current=toIndex+1;
					charNum++;
					break;
				}
			}
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
		else{
			cout << " " ;
			current = current+2;
			charNum++;
		}
		
	}
	
	
}
