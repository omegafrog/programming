#include <stdio.h>
#include <stdlib.h>

#include "simple_linked_list.h"

void init_list(ListNode* head)
{
    
    head=NULL;
    
}

int is_empty(ListNode* head)
{

    return head==NULL;
    
}

ListNode* insert(ListNode* head, element item, int pos)
{
    
    ListNode* now=head;
    

    if(get_length(head)<=pos)
    {

        fprintf(stderr,"그 위치를 접근할 수 없습니다.\n");
        exit(1);

    }
    if(pos==0) insert_first(head, item);
    if(pos==get_length(head)-1) insert_last(head, item);
    for(int i=0;i<pos-1;i++)
    {

        now=now->next;

    }

//     추가할 새 노드를 만들고
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    // 데이터를 집어넣고
    newNode->term=item;
    newNode->next=now->next;
    now->next=newNode;
    
    return head;
}

ListNode* insert_last(ListNode* head, element item)
{
    
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    newNode->next=NULL;
    newNode->term=item;
    
    ListNode* now=head;
    
    while(now->next!=NULL)
    {
        
        now=now->next;
        
    }
    
    now->next=newNode;
    
    return head;
}

ListNode* insert_first(ListNode* head, element item)
{
    
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    newNode->term=item;
    newNode->next=head;
    head=newNode;
    
    return head;
    
}

ListNode* delete(ListNode* head, int pos)
{
    
    ListNode* now=head;
    ListNode* freedNode=NULL;
    
    if(is_empty(head))
    {
        
        fprintf(stderr,"list is empty.\n");
        exit(1);
        
    }
    else
    {
        
        if(get_length(head)<=pos)
        {
            
            fprintf(stderr,"그 요소에 접근할 수 없습니다.\n");
        }
        
        else
        {
            
            if(pos==0)
            {
                
                freedNode=head;
                head=head->next;
                free(freedNode);
                
            }
            else{
                for(int i=0;i<pos-1;i++)
                {

                    now=now->next;

                }

                freedNode=now->next;
                now->next=(pos==get_length(head)-1)?NULL :freedNode->next;
                free(freedNode);

            }
         
        }
    }
    
    return head;
}

term get_entry(ListNode* head, int pos)
{
    
    ListNode* returnNode=head;
    
    if(is_empty(head))
    {
        
        fprintf(stderr,"list is empty\n");
        
    }
    else
    {
        
        if(get_length(head)<pos)
        {
            
            fprintf(stderr,"그 요소에 접근할 수 없습니다.\n");
            exit(1);
            
        }
        
        for(int i=0;i<pos;i++)
        {
            
            returnNode=returnNode->next;
            
        }
        
        return returnNode->term;
    }
}

int get_pos(ListNode* head, ListNode* node)
{
    
    ListNode* now=head;
    int count=0;
    
    if(is_empty(head))
    {
        
        fprintf(stderr,"list is empty.\n");
        exit(1);
        
    }
    else
    {
        
        while(now!=node)
        {
            if(now->next==NULL) return -1;
            now=now->next;
            count++;
        }
        
    }
    return count+1;
}
int get_length(ListNode* head)
{
    
    ListNode* now=head;
    int count=0;
    
    if(is_empty(head))
    {
        
        return 0;
        
    }
    else
    {
        
         while(now->next!=NULL)
        {
        
            now=now->next;
            count++;
        
        }
    
    }
   
    
    return count+1;
}

void print_list(ListNode* head)
{
    if(is_empty(head))
    {
        fprintf(stderr,"list is empty.\n");
        exit(1);
    }
    ListNode* now=head;
    while(now->next!=NULL)
    {
        
        printf("%.2f^%d + ",now->term.coef,now->term.expon);
        now=now->next;
        
    }
    printf("%.2f^%d\n",now->term.coef,now->term.expon);
    
}