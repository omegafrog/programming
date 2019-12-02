#include<stdio.h>
#include<malloc.h>

int alpa(int, int);

int main(){
  int roopnum;
  scanf("%d",&roopnum);
  
  int *p=(int*)malloc(sizeof(int)*roopnum);
  
  int start,end;
  for(int i=0;i<roopnum;i++){
    scanf("%d%d",&start,&end);
    *(p+i)=alpa(start,end);
  }
  
  for(int i=0;i<roopnum;i++)
    printf("%d\n",*(p+i));
}

int alpa(int start, int end){
  int ans=0;
  int count = end-start;

  int n=1;

  for(;;){
    if(count>=2*n){
      count-=2*n;
      n++;
      ans+=2;
    }
    else
      break;
  }
  if(count>n+1)
    ans+=2;
  else if(count==0);
  else 
    ans+=1;
  return ans;
}

   
   
      
