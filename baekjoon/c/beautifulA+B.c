//11021
#include<stdio.h>
#include<stdlib.h>
int main(){
    int tcase;
    scanf("%d",&tcase);
    int* result=(int*)malloc(sizeof(int)*tcase);
    for (int i = 0; i < tcase; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        result[i]=a+b;
    }
    for (int i = 0; i < tcase; i++)
    {
        printf("Case #%d: %d\n",i+1,result[i]);
    }   
}