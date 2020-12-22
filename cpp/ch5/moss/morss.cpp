#include "morss.hpp"

morss::morss() {
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
  quote = "-...-";
}

void morss::text2Morss(string text) {
  int current = 0;
  while (current <= text.length()) {
    // if text[current] is alphabet
    for (int i = 0; i < 26; i++) {
      string tmp(i + 97); // alphabet
      if (text[current].compare(tmp)) {
        cout << alphabet[i];
        current++;
        continue;
      }
    }
    // text[current] is digit
    for (int i = 0; i < 10; i++) {
      string tmp(i + 48);
      if (text[current].compare(tmp)) {
        cout << digit[i];
        current++;
        continue;
      }
    }
	// text[current] is special char
	if( text[current].compare(slash)){

	  
  }
