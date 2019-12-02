#include<stdio.h>

typedef struct friendinfo{
  char name[256];
  char phonenum[11];
  char hobbie[256];
  char address[256];
}friendinfo;

int main(){
  friendinfo f1={"john","01012345678","soccer","abcstreet12345"};
  friendinfo f2={"matt","01013243546","baseball","bacstreet1324"};
  friendinfo f3={"pablo","12345t654","fiosdnviods","dioafnewiosdvn"};
  friendinfo f4={"aksdfj","2134565432","alkfndviwoes","faeiwonvisof"};
  frinedinfo f5={"jdiofane","1346543234","faionesvisdfj","ioanefsdfnkdn"};

  friendinfo[5]={f1,f2,f3,f4,f5};
  for(int i=0;i<5;i++){
      printf("name:%s, phonenumber:%s, hobbie:%s, address:%s",friendinfo[i].name,friendinfo[i].phonenum,friendinfo[i].hobbie,friendinfo[i].address);
  }
}

