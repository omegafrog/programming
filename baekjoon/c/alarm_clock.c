//2884
#include<stdio.h>

int main(){
    int hour,min;
    scanf("%d%d",&hour,&min);
    if(min>45)
        printf("%d %d",hour,min-45);
    else{
        if(hour==0){
            hour=23;
            min=min-45+60;
        }
        else{
        hour-=1;
        min=min-45+60;
        }
        printf("%d %d",hour,min);
    }
}