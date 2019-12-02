#include<stdio.h>
#include<malloc.h>
#include<string.h>

int groupChecker(char *p);

int main(){
  int stringCount;
  scanf("%d",&stringCount);

  char **p=NULL;

  p=(char **)malloc(sizeof(char *)*stringCount);


  int result=0;
  for(int i=0;i<stringCount;i++){
    *(p+i)=(char *)malloc(sizeof(char)*100);
    scanf("%s",*(p+i));

    if(groupChecker(*(p+i))==2) //1==non group string
      result++;

  }
  printf("%d",result);
}

int groupChecker(char *p){
  char alpa[100]={[0]=p[0]};

  int i=0;
  char temp=p[0];
  int y=0;
  while(*(p+i)!='\0'){
    if(*(p+i+1)!=0){
      if(*(p+i+1)!=*(p+i)){
	alpa[y]=*(p+i);
	y++;
      }
    }
    else if(p[strlen(p)]=='\0')
      alpa[y]=p[strlen(p)-1];
    i++;
  }
  //printf("alpastr=%s\n",alpa);

  int checker = 0;
  int x=0;
  int j=0;
  while(alpa[x]!='\0'){
    //printf("alpa=%c\n",alpa[x]);
    while(alpa[x]!=p[j]){
      j++;
    }
    while(p[j]!='\0'){
      if((alpa[x]==p[j])&&(checker==0))
	j++;
      else if(alpa[x]!=p[j]){
	checker=1;
	j++;
      }
      else{
	//printf("return 1\n");
	return 1;
      }
    }
    j=0;
    x++;
    checker=0;
  }
  //printf("return 2\n");
  return 2;
}

