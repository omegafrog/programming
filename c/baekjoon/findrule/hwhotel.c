#include<stdio.h>
#include<malloc.h>

int main(){
  int *ptcase=NULL;
  int tcase=0;
  scanf("%d",&tcase);
  ptcase=(int*)malloc(sizeof(int)*tcase*3);
  for(int i=0;i<tcase;i++)
    scanf("%d%d%d",ptcase+3*i,ptcase+3*i+1,ptcase+3*i+2);

  int count=0;
  while(count<tcase){
    int h,w,n;
    h=*(ptcase+3*count);
    w=*(ptcase+3*count+1);
    n=*(ptcase+3*count+2);
    int floor,rnum;
    for(int i=0;i<=w;i++)
      if(i*h+1<=n && (i+1)*h>=n) rnum=i+1;
    if(n%h==0) floor=h;
    else floor=n%h;
    printf("%d%02d\n",floor,rnum);
    count++;
  }
}
