#include<stdio.h>
#include<string.h>

int main(){
  int count=0;
  char string[105]={0,};
  scanf("%s",string);

  // printf("%s",string);
  
  char crostr[35][3]={"dz=","c=","c-","d-","lj", "nj", "s=", "z=","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","w","x","y","z","=","-"};
  
  char comp1[3];
  char comp2[2];

  for(int i=0;i<98;i++){
    int a=5;
    comp1[0]=string[i];
    comp1[1]=string[i+1];
    comp1[2]=string[i+2];
    if((comp1[0]==crostr[0][0])&&(comp1[1]==crostr[0][1])&&(comp1[2]==crostr[0][2])) a=0;
    if(a==0)
      string[i]=0,string[i+1]=0,string[i+2]=0,count++;
    /*    else if((a==0)&&(checker==1))
	  string[i]=0,string[i+1]=0,string[i+2]=0;*/
  }
  int p=1;
  while(strlen(crostr[p])==2){
    for(int i=0;i<99;i++){
      int b=5;
      comp2[0]=string[i];
      comp2[1]=string[i+1];
      if((comp2[0]==crostr[p][0])&&(comp2[1]==crostr[p][1])) b=0;
      if(b==0)
	string[i]=0,string[i+1]=0,count++;
      /*      else if((b==0)&&(checker==1))
	      string[i]=0,string[i+1]=0;*/
    }
    p++;
  }
  p=8;
  while(p<35){
    for(int i=0;i<100;i++){
      if(crostr[p][0]==string[i]) string[i]=0,count++;
      /* else if((crostr[p][0]==string[i])&&(checker==1)) string[i]=0;*/
    }
    p++;  
  }

  printf("%d",count);
}
