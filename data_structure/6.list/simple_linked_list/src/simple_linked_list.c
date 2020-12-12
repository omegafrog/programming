#include <stdio.h>
#include <stdlib.h>

#include "simple_linked_list.h"

// 리스트 초기화
void init_list(ListNode* head)
{
    
    head=NULL;
    
}

// 공백 검사
int is_empty(ListNode* head)
{

    return head==NULL;
    
}

// 삽입(넣으려는 곳의 전과 후에 노드가 있을 때)
ListNode* insert(ListNode* head, element item, int pos)
{
    // pos까지 가기 위해서 현재 위치를 표시하는 노드 변수
    ListNode* now=head;
    
    // 노드를 추가하려는 위치가 잘못된 경우
    if(get_length(head)<=pos)
    {

        fprintf(stderr,"그 위치를 접근할 수 없습니다.\n");
        exit(1);

    }
    // 지정된 pos까지 이동함
    for(int i=0;i<pos-1;i++)
    {

        now=now->next;

    }

//     추가할 새 노드를 만들고
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    // 데이터를 집어넣고
    newNode->data=item;
    // 노드간 링크를 연결한다.
    newNode->next=now->next;
    now->next=newNode;
    
    // 함수의 parameter로 넘겨주는 값은 head의 주소 값이다. 이 head를 참조해서 값을 변경할 때는 상관없지 head의 값만 변경하면 main에 반영이 안된다.
    return head;
}

// 리스트 마지막에 노드 추가
ListNode* insert_last(ListNode* head, element item)
{
    
    // 추가될 새 노드 만들기
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    newNode->next=NULL;
    newNode->data=item;
    
    // 삽입위치 접근을 위한 변수
    ListNode* now=head;
    
    // 마지막 노드 전 노드까지 가서
    while(now->next!=NULL)
    {
        
        now=now->next;
        
    }
    // 추가하면되다
    now->next=newNode;
    
    return head;
}

// 리스트의 첫번째에 요소추가
ListNode* insert_first(ListNode* head, element item)
{
    // 추가될 새 노드 만들기
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    newNode->data=item;
    // 추가될 새 노드의 다음 노드는 현재의 head노드이므로 요러케해라
    newNode->next=head;
    
    head=newNode;
    
    return head;
    
}

// 삭제 연산, pos는 인덱스(0부터시작)
ListNode* delete(ListNode* head, int pos)
{
    
    // 원하는 위치 접근 노드와 삭제할 노드를 넣을 변수 생성
    ListNode* now=head;
    ListNode* freedNode=NULL;
    
    // 비어잇으면 삭제를못해요~
    if(is_empty(head))
    {
        
        fprintf(stderr,"list is empty.\n");
        exit(1);
        
    }
    else
    {
        // 잘못된 pos를 넣으면 안돼요~
        if(get_length(head)<=pos)
        {
            
            fprintf(stderr,"그 요소에 접근할 수 없습니다.\n");
        }
        
        else
        {
            // 삽입, 삭제는 첫번째에 추가할 때와 마지막에 추가할 때가 다른 경우와 방식이 다르다. 따로 만들어야될거같아용
            if(pos==0)
            {
                // 리스트의 첫째 요소를 삭제할 노드로 지정하고
                freedNode=head;
                // head에 삭제할 요소 다음 노드 주소를 넣는다
                head=freedNode->next;
                // 죽인다
                free(freedNode);
                
            }
            else
            {
                // 지우려는 노드 전번째 노드까지 가서
                for(int i=0;i<pos-1;i++)
                {

                    now=now->next;

                }

                freedNode=now->next;
                // 만약 마지막 요소를 지우는 거라면 다음 노드 위치가 NULL이 되야됨
                // 아니면 삭제한 노드의 링크값을 넣어야겟지
                now->next=(pos==get_length(head)-1)?NULL :freedNode->next;
                // 죽인다
                free(freedNode);

            }
         
        }
    }
    
    return head;
}
// pos의 노드값 반환
element get_entry(ListNode* head, int pos)
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
        
        return returnNode->data;
    }
}

// 리스트의 길이 반환
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
   
    // while문이 마지막 요소를 못 세기 때문에 이렇게 1을 더해준다.
    // 그럼 길이가 0일때는 어쩌냐고? 그래서 따로 빼놨다
    return count+1;
}

// 리스트 요소 전부출력
void print_list(ListNode* head)
{
    // 비어있으면 출력못해요~
    if(is_empty(head))
    {
        fprintf(stderr,"list is empty.\n");
        exit(1);
    }
    ListNode* now=head;
    while(now->next!=NULL)
    {
        
        printf("%d->",now->data);
        now=now->next;
        
    }
    printf("%d->",now->data);
    printf("NULL\n");
    
}