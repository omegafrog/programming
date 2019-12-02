#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//type_person
typedef struct{
  int id;
  char name[10];
  double height;
}person;
typedef person element;

//type_double_linked_list

typedef struct Dlistnode{
  element data;
  struct Dlistnode *pre;
  struct Dlistnode *next;
}Dlistnode;


//function_double_linked_list

void dinsert(Dlistnode *pre, element data);
void ddelete(Dlistnode *head, Dlistnode *removed);
void init(Dlistnode *head);
void print_dlist(Dlistnode *head);

void dinsert(Dlistnode *pre, element data){
  Dlistnode *append;
  append=(Dlistnode*)malloc(sizeof(Dlistnode));
  append->data=data;
  append->next=pre->next;
  append->pre=pre;
  pre->next->pre=append;
  pre->next=append;
}

void ddelete(Dlistnode *head, Dlistnode *removed){
  if(removed==NULL) return;
  removed->pre->next=removed->next;
  removed->next->pre=removed->pre;
  free(removed);
  
}

void init(Dlistnode *head){
  head->next=head;
  head->pre=head;
}

/*=======================================\
|                                        |
| void print_dlist(Dlistnode *head){     |
|   Dlistnode *p;                        |
|   for(p=head->next;p!=head;p=p->next){ |
|     printf("<-| |%d| |-> ", p->data);  |
|   }                                    |
|   printf("\n");                        |
|}                                       |
\=======================================*/

void print_dlist(Dlistnode *head){
  Dlistnode *p;
  for(p=head->next;p!=head;p=p->next){
    printf("<-| |%d %s %lf| |->", p->data.id, p->data.name, p->data.height);
  }
  printf("\n");
}


int main(int argc, char *argv[]){
  //variables for file I/O
  FILE *fp;
  fp=fopen(argv[1],"r");

  Dlistnode *head=(Dlistnode*)malloc(sizeof(Dlistnode));
  init(head);

  for(;;){
    person tmp={0,"\0",0};
    fscanf(fp,"%d",&tmp.id);
    if(tmp.id==0) break;
    fscanf(fp,"%s",tmp.name);
    fscanf(fp,"%lf",&tmp.height);
    
    if(head->next==head)
      dinsert(head,tmp);
    else{
      Dlistnode *p;
      for(p=head->next;p!=head;p=p->next){
	if(strcmp(tmp.name, p->data.name)<0){
	  dinsert(p->pre,tmp);
	  break;
	}
	else if(p->next==head){
	  dinsert(p,tmp);
	  break;
	}
      }
    }
    print_dlist(head);
   }
  fclose(fp);
}
    
    
  
  
