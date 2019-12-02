#include<stdio.h>
#include<malloc.h>

int main(){
  int num;
  
  scanf("%d",&num);
  getchar();//clear input buffer
  char ans[num][81];//make 2dim array
  int allscore[num];//make a array save the output

  
  for(int i=0;i<num;i++){
    fgets(ans[i],sizeof(char[81]),stdin);
  }

  int z=0;
  while(z<num)
    allscore[z]=0,z++;//initialize the array to 0;
  
  int i=0;
  int score=0;
  for(int x=0;x<num;x++){
    while(ans[x][i]!=10){
      if(ans[x][i]=='O'){
	score++;
      }
      else{
	score=0;
      }
      allscore[x]+=score;
    i++;
    }
    score=0;
    i=0;
  }
  for(int i=0;i<num;i++)
  printf("%d\n",allscore[i]);
}
