#include<stdio.h>

void func_hanoi(int floor, char from, char tmp, char to);
int count =0;
int main(){
    int floor = 4;
    
    func_hanoi(floor, 'A','B','C');
    printf("%d",count);
    return 0;
}

void func_hanoi(int floor, char from, char tmp, char to){
    if (floor==1){
        printf("move 1th %c to %c\n",from, to);
        count++;
    }
    else{
        // printf("%d",floor);
// n-1개의 원반을 tmp로 옮겨놓고        
        func_hanoi(floor-1, from, to, tmp);
// 가장 아래의 원반을 to로 옮기고        
        printf("move %dth %c to %c\n",floor,from, to);
// tmp로 옮겨진 n-1개의 원반을 다시 to로 이동한다.
        func_hanoi(floor-1, tmp, from, to);
    }

}