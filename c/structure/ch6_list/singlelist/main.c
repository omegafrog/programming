#include<stdio.h>
#include<stdlib.h>
#include"singlelist.h"
#include"searchlist.h"

int main(void)
{
	SListNode *head = NULL;

	for (int i = 0; i < 5; i++) {
		head = insert_first(head, i);
		print_list(head);
	}
	for (int i = 0; i < 5; i++) {
		head = delete_first(head);
		print_list(head);
	}
	
	if (search_list(head, 30) != NULL)
	  printf("리스트에서 30을 찾았습니다. \n");
	else
	  printf("리스트에서 30을 찾지 못했습니다. \n");
	
	return 0;
}
