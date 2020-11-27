#include<stdio.h>
typedef struct{
    float coef; //계수
    int expon;  //차수
}term;

void newTerm(float coef, int expon);
void addPoly(int As, int Ae, int Bs, int Be, int* Cs, int* Ce);
void print_poly(int s, int e);
