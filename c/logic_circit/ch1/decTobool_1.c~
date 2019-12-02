#include<stdio.h>
#include<malloc.h>
#include<string.h>

int get_dec();
int put_bit(int);
void changeDec(int, int);//input bit and decnum, give bool to p_bit
void changeComp(int);// input bit, give 2's compliment to p_compbit
void changeHexa(int);// input bit, give hexadecimal number to p_hexabit
void display( int);// input bit, display numbers
int power(int, int);

char *p_bit = NULL;
char *p_compbit = NULL;
char *p_hexabit=NULL;

int main() {
  char t;
  int decnum;
  for (;;) {
    printf("press t to start\n");
    printf("if you want to quit, press 'q'\n");
    scanf("%c", &t);
    switch (t) {
    case 'q':
      return 0;
    case 't':
      decnum = get_dec();//decimal number input

      int bit;
      bit = put_bit(decnum);

      changeDec(decnum, bit);
      changeComp(bit);
      changeHexa(bit);
      
      display(bit);
    }
  }
}

int get_dec() {
  int decnum;
  printf("dec:");
  scanf("%d", &decnum);
  getchar();
  return decnum;
}

int power(int x, int n) {
  int res = 1;
  for (int i = 0; n>i; i++) {
    res *= x;
  }
  return res;
}

int put_bit(int decnum) {
  int i = 0;
  for (;;) {
    if (decnum == 0) {
      return 1;
    }
    else if ((power(2, i) <= decnum) && (power(2, i + 1) >= decnum)) {
      return i + 1;
    }
    else
      i++;
  }
}

void changeDec(int decnum, int bit) {
  p_bit = (char*)malloc(sizeof(char)*(bit));
  for (int i = 0; i<bit; i++) {
    *(p_bit + i) = '0';
  }
  for (bit - 1; bit >= 0; bit--) {
    if (decnum >= power(2, bit)) {
      decnum -= power(2, bit);
      *(p_bit + bit) = '1';
    }
  }
}

void changeComp(int bit) {
  p_compbit = (char*)malloc(sizeof(char)*(bit));
  strcpy(p_compbit, p_bit);
  int compbit = 0;
  for (int i = 0; i < bit; i++) {
    if (*(p_bit + i) == '1') {
      compbit = i;
      break;
    }
  }
  for (int i=compbit + 1; i < bit; i++) {
    if (*(p_compbit + i) == '1') *(p_compbit + i) = '0';
    else *(p_compbit + i) = '1';
  }
}

void changeHexa(int bit){
  if(bit==4) p_hexabit=(char*)malloc(sizeof(char)*1);
  else p_hexabit=(char*)malloc(sizeof(char)*(bit/4+1));
    
  int hexanum=0;
  int x=0;
  if(bit<4){
    for(x;x<bit;x++){
      hexanum+=((int)*(p_bit+x)-48)*power(2,x);
    }
    *(p_hexabit)=(char)hexanum;
  }
  else{
    while(x<bit){
      for(int i=0;i<4;i++){
	if(x>=bit)
	  break;
	else{
	  hexanum+=((int)*(p_bit+x)-48)*power(2,i);
	  x++;
	}
      }
      if(hexanum>=10)
	*(p_hexabit+(x+1)/4-1)=(char)(hexanum+55);
      else
	*(p_hexabit+(x+1)/4-1)=(char)(hexanum+48);
      hexanum=0;
    }
  }
}
			     
			       
    
void display(int bit){
  //print bool
  printf("bool:");
  for (int i = bit - 1; i >= 0; i--)
    printf("%c", *(p_bit + i));  
  printf("\n");
  
  //print 2's compliment
  printf("2's compliment:");

  for (int i = bit - 1; i >= 0; i--)
    printf("%c", *(p_compbit + i));
  printf("\n");

  //print hexadecimal
  printf("hexadecimal number:0x");

  for(int i=bit/4;i>=0;i--)
    printf("%c", *(p_hexabit+i));
  printf("\n");
}
