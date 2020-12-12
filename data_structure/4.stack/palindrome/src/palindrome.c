#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "palindrome.h"
#include "stackType.h"

int is_palindrome(char term[])
{
    // printf("okay\n");
    int len=strlen(term);
    // printf("okay\n");
    
    stackType* s=new_stack();
    // printf("okay\n");
    
    for(int i=0;i<len;i++)
    {
        if(isalpha(term[i]))
        {
            push(s,tolower(term[i]));
        }
    }
    // print_stack(s);
    
    int size=sizeofStack(s);
    
    char reverseTerm[size];
    
    // printf("%d",len);
    // printf("%d",size);
    for(int i=0;i<len;i++)
    {
        if(isalpha(term[i]))
        {
            char c=pop(s);
            if(c!=term[i])
            {
                return 0;
            }
        }
    }
    return 1;
    // printf("%d ", term[0]);
    // printf("%d ", term[1]);
    // printf("%d ", term[2]);
    // printf("%d ", term[3]);
    // printf("%d ", reverseTerm[0]);
    // printf("%d ", reverseTerm[1]);
    // printf("%d ", reverseTerm[2]);
    // printf("%d ", reverseTerm[3]);
    
    // printf("%s, %s",term, reverseTerm);
    // printf("%d",strcmp(reverseTerm,term));
    // printf("%s\n%s",term,reverseTerm);
}

void interface()
{
    printf("문자열을 입력하시오:");
    char input[100];
    
    scanf("%[^\n]s",input);
    
    if(is_palindrome(input))
    {
        printf("회문입니다.\n");
    }
    else
    {
        printf("회문이 아닙니다.");
    }
}
