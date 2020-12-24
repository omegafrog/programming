
# morse.cpp#

## Introduction ##
Class morse is get alphabetically written small string, digit number and special character(slash, question mark, comma, period, plus, equal) and change it to morse string.
After changing string to morse, It reversely change morse to string.

morse is composed to morse.cpp, and it's header file morse.hpp

## about morse class ##
### member variable ###
1. string alphabet[26]
   string array for morse-encrypted alphabet character. Index means [i]th alphabet.
2. string digit[10]
   String array for morse-encrypted digit number character. Index mens number.
3. string slash, question, comma, period, plus, equal
   String array for morse-encrypted special char.
4. String text
   String for input text(alphabetically written)
5. String morseWord
   String for morse-encrypted text. It is seperated by some rules.
   1. morse word is seperated by alphabet word. There is a space char between them. 
   2. Space char in text, It is changed to two space char ex)\" \" -> \"  \"
   

### memeber function ###

morse have three member function
1. morse() : constructor. 
2. string& text2morse(string text)
3. string morse2Text(string& morse, string text)




