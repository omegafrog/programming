//10952
#include<stdio.h>
#include<stdlib.h>
int main(){
    int capacity=10;
    int i=0;
    while(1){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==0&&b==0) break;
        printf("%d\n",a+b);
        i++;
    }
}