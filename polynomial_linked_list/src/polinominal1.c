// 계수가 0이 아닌 항만 배열에 저장하는 방법.
#include <stdio.h>
#include <stdlib.h>

#include "simple_linked_list.h"
#include "polinominal1.h"

// #define MAX_TERMS 101



// int avail; // 처음으로 비어있는 인덱스

// // A = 8x^3 + 7x + 1 B = 10X^3 + 3X^2 + 1
// term polynominal[MAX_TERMS]={{8,3}, {7,1}, {1,0}, {10,3}, {3,2}, {1,0}};
// avail = 6;

ListNode* newTerm(ListNode* head, float coef, int expon){
    // polynominal[avail].coef=coef;
    // polynominal[avail].expon=expon;
    // avail++;
    term newterm={coef,expon};
    
    
    // 리스트가 비어있으면
    if(is_empty(head))
    {
        
        head=insert_first(head,newterm);
        
    }
    // 리스트에 노드가 있다면
    else
    {
        head=insert_last(head,newterm);
    }
    return head;
}
int compare(int op1, int op2){
    if(op1>op2) return 1;
    else if(op1<op2) return -1;
    else return 0;
}

ListNode* addPoly(ListNode* A, ListNode* B){
    //ca,ce 왜쓴거임 ㅡㅡ
    int As=0;
    int Ae=get_length(A)-1;
    int Bs=0;
    int Be=get_length(B)-1;
    
    ListNode* C = NULL;
    
    int tmpterm;
    while(As<=Ae&&Bs<=Be){
        switch(compare(get_entry(A,As).expon,get_entry(B,Bs).expon)){
            case 1 : // A의 차수가 B의 차수보다 클때
                C=newTerm(C,get_entry(A,As).coef,get_entry(A,As).expon);
                As++;
                break;
            case 0 : //A의 차수와 B의 차수가 같을 때
                tmpterm=get_entry(A,As).coef+get_entry(B,Bs).coef;
                if(tmpterm){
                    C=newTerm(C,tmpterm,get_entry(A,As).expon);
                    As++;Bs++;    
                }
                break;
            case -1 : //A의 차수가 B의 차수보다 작을 때
                C=newTerm(C,get_entry(B,Bs).coef,get_entry(B,Bs).expon);
                Bs++;
                break;
        }
    }
    // 위의 루프를 다 진행해도 A나 B의 남은 항들이 있을 수 있다. 이걸 넣어야한다.
    for(As;As<=Ae;As++)
    {
        C=newTerm(C,get_entry(A,As).coef,get_entry(A,As).expon);
    }
    for(Bs;Bs<=Be;Be++)
    {
        C=newTerm(C,get_entry(B,Bs).coef,get_entry(B,Bs).expon);
    }
    return C;
}

void print_poly(ListNode* node)
{
   print_list(node);
}





