#ifndef __SLINKED_LIST_H__
#define __SLINKED_LIST_H__

// simple linked list!
#define element int

typedef struct ListNode {
    element data;
    struct ListNode* next;
} ListNode;

void init_list(ListNode* head);
int is_empty(ListNode* head);
ListNode* insert(ListNode* head, element item, int pos);
ListNode* insert_last(ListNode* head, element item);
ListNode* insert_first(ListNode* head, element item);
ListNode* delete(ListNode* head, int pos);
// pos 위치의 요소를 반환한다.
element get_entry(ListNode* head, int pos);
int get_length(ListNode* head);
void print_list(ListNode* head);

#endif