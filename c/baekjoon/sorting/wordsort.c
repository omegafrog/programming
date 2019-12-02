#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

typedef struct word{
  char word[51];
  int len;
}word;


int main(){
  int count;
  scanf("%d",&count);
  word wordlist[20005];

  
  for(int i=0;i<count;i++){
    scanf("%s",wordlist[i].word);
    wordlist[i].len=strlen(wordlist[i].word);
  }

  for(int i=1;i<count;i++){
    for(int j=0;j<count-i;j++){
      if(wordlist[j].len>wordlist[j+1].len){
	word temp1=wordlist[j+1];
	wordlist[j+1]=wordlist[j];
	wordlist[j]=temp1;
      }
    }
  }
  int startindex;
  int endindex=0;
  for(int i=0;i<count-1;i++){
    if(wordlist[i].len==wordlist[i+1].len){
      startindex=i;
      endindex=startindex;
      while(wordlist[i].len==wordlist[i+1].len){
	endindex++;
	i++;
      }
      for(int k=1;k<endindex-startindex+1;k++){
	for(int j=startindex;j<=endindex-k;j++){
	  if(strcmp(wordlist[j].word, wordlist[j+1].word)>0){
	    word temp2=wordlist[j+1];
	    wordlist[j+1]=wordlist[j];
	    wordlist[j]=temp2;
	  }
	}
      }
    }
    
  }
  for(int i=0;i<count-1;i++){
    printf("%s\n",wordlist[i].word);
    if(strcmp(wordlist[i].word, wordlist[i+1].word)==0){
      i++;
      continue;
    }
    else if(i==count-2) printf("%s\n",wordlist[count-1].word);
  }
}
