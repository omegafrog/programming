#include<stdio.h>
#include<malloc.h>
#include<time.h>
////////////////////////////////
//sigan choguaaaaaaaaaaaaaaaa///////////////

typedef struct kaingCalender{
  int max_x;
  int max_y;
  int x;
  int y;
}KCalender;

//int do_Kaing(KCalender *k);
int do_Kaing_1(int,int,int,int);
int main(){
  
  clock_t start1, stop1,start2,stop2,start3,stop3;
  double duration1,duration2,duration3;
  
  int count;
  scanf("%d",&count);

  start3=clock();


  
  
  /*
     KCalender *kp;                                                          
     kp=(KCalender*)malloc(sizeof(KCalender)*count);                         
									     
     int* resultp;                                                           
     resultp=(int*)malloc(sizeof(int)*count);                                
									     
									     
     for(int  i=0;i<count;i++){                                              
       start1=clock();                                                       
       scanf("%d%d%d%d",&(kp+i)->max_x,&(kp+i)->max_y,&(kp+i)->x,&(kp+i)->y);
       stop1=clock();                                                        
       duration1=(double)(stop1-start1)/CLOCKS_PER_SEC;                      
       printf("%f\n",duration1);                                             
									     
       start2=clock();                                                       
       *(resultp+i)=do_Kaing(kp+i);                                          
       stop2=clock();                                                        
       duration2=(double)(stop2-start2)/CLOCKS_PER_SEC;                      
       printf("%f\n",duration2);                                             
     }                                                                       
  */

  int *rp;
  rp=(int*)malloc(sizeof(int)*count);
  
  for(int i=0;i<count;i++){
    start1=clock();
    int max_x,max_y,x,y;
    
    scanf("%d%d%d%d",&max_x,&max_y,&x,&y);
    stop1=clock();
    duration1=(double)(stop1-start1)/CLOCKS_PER_SEC;                       
    printf("%f\n",duration1);
    
    *(rp+i)=do_Kaing_1(max_x,max_y,x,y);
  }
   
  /*
     for(int  i=0;i<count;i++)     
       printf("%d\n",*(resultp+i));
   */
    for(int i=0;i<count;i++)
      printf("%d\n",*(rp+i));
    
    stop3=clock();
    

    duration3=(double)(stop3-start3)/CLOCKS_PER_SEC;
      
    printf("%f\n",duration3);
   
    //free(kp);
  //free(resultp);
}

/*
   int do_Kaing(KCalender *k){
     clock_t start,stop;
     double duration;
     int result=1;
     int x=1,y=1;
     
     start=clock();
     while(!(x==k->x&&y==k->y)){
       result++;
       if(x==k->max_x&&y==k->max_y){
	 stop=clock();
	 duration=(stop-start)/CLOCKS_PER_SEC;
	 printf("%f\n",duration);
	 return -1;
       }
       if(x==k->max_x) x=1;
       else x++;
       if(y==k->max_y) y=1;
       else y++;
       
     }
     stop=clock();
     
     duration=(stop-start)/CLOCKS_PER_SEC;
     printf("%f\n",duration);
     return result;
   }
 */
int do_Kaing_1(int max_x,int max_y, int x, int y){
  clock_t start,stop;
  double duration;
  int result=1;
  int tx=1,ty=1;
  
  start=clock();
  while(!(tx==x&&ty==y)){
      result++;
      if(tx==max_x&&ty==max_y)
	return -1;

      if(tx==max_x)tx=1;
      else tx++;
      if(ty==max_y)ty=1;
      else ty++;
    }
    
    stop=clock();
    duration=(stop-start)/CLOCKS_PER_SEC;
    printf("%f\n",duration);
    return result;
}
