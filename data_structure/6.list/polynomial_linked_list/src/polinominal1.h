#ifndef __POLINOMINAL1_H__
#define __POLINOMINAL1_H__
// typedef struct{
//     float coef; //계수
//     int expon;  //차수
// }term;

ListNode* newTerm(ListNode* head,float coef, int expon);
ListNode* addPoly(ListNode* A, ListNode* B);
void print_poly(ListNode* node);

#endif