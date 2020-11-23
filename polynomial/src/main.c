#include<stdio.h>
#include "polinominal1.h"
void addPoly(int As, int Ae, int Bs, int Be, int* Cs, int* Ce);
void print_poly(int s, int e);
int main(){
    int As=0, Ae=2, Bs = 3, Be = 5, Cs, Ce;
    addPoly(As, Ae, Bs, Be, &Cs, &Ce);
    print_poly(As, Ae);
    print_poly(Bs, Be);
    
    print_poly(Cs, Ce);
    return 0;
}