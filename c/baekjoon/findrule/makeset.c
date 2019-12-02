#include<stdio.h>

int main(){
  FILE *fp;
  fp=fopen("set.txt","w");

  for(int i=0;i<1000000;i++){
    fprintf(fp,"%d\n",i);
  }
}
