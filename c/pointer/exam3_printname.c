#include<stdio.h>
#include<string.h>

void get_data(char (*p)[256]);
void display(char (*p)[256]);

int main(){
  char str[5][256];

  get_data(str);
  display(str);
}

void get_data(char (*p)[256]){
  for(int i=0;i<5;i++){
    printf("input your name:");
    fgets(p[i],255,stdin);
    p[i][strlen(p[i])-1]='\0';
  }
}

void display(char (*p)[256]){
  for(int i=0;i<5;i++){
    printf("%s\n",p[i]);
  }
} 
