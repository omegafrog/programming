//15552
#include<stdio.h>
#include<stdlib.h>

int main(){
    int tcase;
    scanf("%d",&tcase);
    for (int i = 0; i < tcase; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
}