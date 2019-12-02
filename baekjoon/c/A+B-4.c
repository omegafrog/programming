//10951
#include<stdio.h>

int main(){
    while(1){
        int a,b;
        char error=scanf("%d%d",&a,&b);
        if(error==EOF) break;
        printf("%d\n",a+b);
    }
}