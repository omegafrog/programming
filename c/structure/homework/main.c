#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"TypePerson.h"
#include"typequeue.h"


int main(int argc, char *argv[])
{
  QueueType q;
  person p;
  char temp1[100];
  FILE *fp;
  fp=fopen(argv[1],"r");
  
  init_queue(&q);
  printf("--iput data--\n");
  while (!is_full(&q))
    {
      for(int i=0;i<3;i++){
	switch(i){
	case 0:
	  fscanf(fp, "%s",temp1);
	  p.id=atoi(temp1);
	  break;
	case 1:
	  fscanf(fp, "%s",temp1);
	  strcpy(p.name,temp1);
	  break;
	case 2:
	  fscanf(fp, "%s",temp1);
	  p.height=atof(temp1);
	  break;
	}
      }
      enqueue(&q,p);
      queue_print(&q);
    }
  printf("queue is full.\n\n");

  printf("--data dequeue--\n");
  while (!is_empty(&q)){
      p = dequeue(&q);
      printf("dequeued person : id:%d name:%s height:%.2f\n",p.id, p.name, p.height);
      queue_print(&q);
      printf("\n");
  }
  return 0;
  fclose(fp);
}
    
