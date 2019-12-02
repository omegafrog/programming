#include<stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101
typedef struct{
    int degree; //다항식의 차수
    float coef[MAX_DEGREE]; 
}polynomial;

polynomial poly_add1(polynomial A, polynomial B){
    polynomial C; //result
    int Apos=0,Bpos=0,Cpos=0;
    int degree_a=A.degree;
    int degree_b=B.degree;
    C.degree=MAX(A.degree, B.degree);

    while(Apos<=A.degree&&Bpos<=B.degree){
        if(degree_a>degree_b){
            C.coef[Apos++]=A.coef[Apos++];
            degree_a--;
        }
        else if(degree_a==degree_b){
            C.coef[Apos++]=A.coef[Apos++]+B.coef[Bpos++];
            degree_a--; degree_b--;
        }
        else{
            C.coef[Bpos++]=B.coef[Bpos++];
            degree_b--;
        }
    }
    return C;
}