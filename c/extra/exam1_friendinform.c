#include<stdio.h>

typedef struct friendinfo{
  char name[256];
  int phonenum[11];
  char hobbie[256];
  char address[256];
}friendinfo;

int main(){
  friendinfo f1={"john",01012345678,"soccer","abcstreet12345"};
  friendinfo f2={"matt",01013243546,"baseball","bacstreet1324"};
  friendinfo f3={"pablo",12345t654,"fiosdnviods","dioafnewiosdvn"};
  friendinfo f4={"aksdfj",2134565432,"alkfndviwoes","faeiwonvisof"};
  frinedinfo f5={"jdiofane",1346543234,"faionesvisdfj","ioanefsdfnkdn"};

  printf("name:%s, phonenumber:%d, hobbie:%s, address:%s",f1.name,f1.phonenum,f1.hobbie,f1.address};
  printf("name:%s, phonenumber:%d, hobbie:%s, address:%s",f2.name,f2.phonenum,f2.hobbie,f2.address};
  printf("name:%s, phonenumber:%d, hobbie:%s, address:%s",f3.name,f3.phonenum,f3.hobbie,f3.address};
  printf("name:%s, phonenumber:%d, hobbie:%s, address:%s",f4.name,f4.phonenum,f4.hobbie,f4.address};
  printf("name:%s, phonenumber:%d, hobbie:%s, address:%s",f5.name,f5.phonenum,f5.hobbie,f5.address};
}

