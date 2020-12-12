#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// start부터end까지 임의의 값 반환.
int getrandom(int start, int end,int clock)
{
    srand(clock);
    int range=end-start+1;
    return (unsigned int)rand()%range;
}