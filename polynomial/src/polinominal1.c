// 계수가 0이 아닌 항만 배열에 저장하는 방법.
#include "polinominal1.h"
#define MAX_TERMS 101

int avail; // 처음으로 비어있는 인덱스

// A = 8x^3 + 7x + 1 B = 10X^3 + 3X^2 + 1
term polynominal[MAX_TERMS]={{8,3}, {7,1}, {1,0}, {10,3}, {3,2}, {1,0}};
avail = 6;


void newTerm(float coef, int expon){
    polynominal[avail].coef=coef;
    polynominal[avail].expon=expon;
    avail++;
}
int compare(int op1, int op2){
    if(op1>op2) return 1;
    else if(op1<op2) return -1;
    else return 0;
}

void addPoly(int As, int Ae, int Bs, int Be, int* Cs, int* Ce){
    //ca,ce 왜쓴거임 ㅡㅡ
    
    *Cs=avail;;
    int tmpterm;
    while(As<=Ae&&Bs<=Be){
        switch(compare(polynominal[As].expon,polynominal[Bs].expon)){
            case 1 : // A의 차수가 B의 차수보다 클때
                newTerm(polynominal[As].coef,polynominal[As].expon);
                As++;
                break;
            case 0 : //A의 차수와 B의 차수가 같을 때
                tmpterm=polynominal[As].coef+polynominal[Bs].coef;
                if(tmpterm){
                    newTerm(polynominal[As].coef+polynominal[Bs].coef,polynominal[As].expon);
                    As++;Bs++;    
                }
                break;
            case -1 : //A의 차수가 B의 차수보다 작을 때
                newTerm(polynominal[Bs].coef,polynominal[Bs].expon);
                Bs++;
                break;
        }
    }
    // 위의 루프를 다 진행해도 A나 B의 남은 항들이 있을 수 있다. 이걸 넣어야한다.
    for(As;As<=Ae;As++)
    {
        newTerm(polynominal[As].coef,polynominal[As].expon);
    }
    for(Bs;Bs<=Be;Be++)
    {
        newTerm(polynominal[Bs].coef,polynominal[Bs].expon);
    }
    *Ce = avail-1;
}

void print_poly(int s, int e)
{
    for(int i=s;i<e;i++)
        printf("%3.1fx^%d + ", polynominal[i].coef, polynominal[i].expon);
    printf("%3.1fx^%d\n", polynominal[e].coef, polynominal[e].expon);
}