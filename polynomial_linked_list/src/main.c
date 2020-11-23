#include <stdio.h>

#include "simple_linked_list.h"
#include "polinominal1.h"

int main()
{
    
    ListNode* A=NULL;
    A=newTerm(A,3,12);
    A=newTerm(A,2,8); 
    A=newTerm(A,1,0);
    ListNode* B=NULL;
    B=newTerm(B,8,12); B=newTerm(B,-3,10); B=newTerm(B,10,6);
    
    print_poly(A); print_poly(B);
    ListNode* C=NULL;
    C=addPoly(A,B);
    print_poly(C);
    
    return 0;
}
