#include<stdio.h>
#include<malloc.h>
#include<math.h>
int main(){
  int countlist[8001]={0,};
  double avg;
  int count;
  int center;
  
  int mode;
  int modeval;
  int range;
  
  scanf("%d",&count);

  int centerval=count/2+1;
  
  int inputnum;
  int countindex;
  int sum=0;
  int smallest=4000, biggest=-4000;
  for(int i=0;i<count;i++){
    scanf("%d",&inputnum);
    sum+=inputnum;
    countindex=inputnum+4000;
    countlist[countindex]++;
    
    if(smallest>inputnum)
      smallest=inputnum;
    if(biggest<inputnum)
      biggest=inputnum;
    }
  avg=sum/(double)count;
  
  modeval=countlist[smallest+4000];
  mode=smallest+4000;
  for(int i=smallest+4000;i<=biggest+4000;i++){
    
    if(modeval<countlist[i]){
      modeval=countlist[i];
      mode=i;
    }else if(modeval==countlist[i]){
      if(mode>i) {
	modeval=countlist[i];
	mode=i;
      }
    }
  }
  
  for(int i=smallest+4000;i<=biggest+4000;i++){
    if(modeval==countlist[i]){
      if(mode<i){
	mode=i;
	break;
      }
    }
  }

  range=biggest-smallest;
  int temp=countlist[smallest+4000];
  for(int i=smallest+4001;i<=biggest+4000;i++){
    countlist[i]+=temp;
    temp=countlist[i];
  }
  int y=smallest+4000;
  int lvalue=0;
  while(1){
    if(lvalue<centerval&&centerval<=countlist[y]){
      center=y;
      break;
    }
    lvalue=countlist[y];
    y++;
  }
  double tmp=fabs(avg);
  if((tmp-(int)tmp)*10>=5){
    if(avg>0) avg=(int)tmp+1;
    else avg=-((int)tmp+1);
  }
  else{
    if(avg>0) avg=(int)tmp;
    else avg=-((int)tmp);
  }
    
  mode-=4000;
  center-=4000;
  printf("%d\n%d\n%d\n%d\n",(int)avg,center,mode,range);
}
