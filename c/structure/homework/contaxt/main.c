#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#define BIG_MAXCOUNT 400000 // number of contact-big data
#define MIDDLE_MAXCOUNT 100000
#define SMALL_MAXCOUNT 5000
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))


typedef struct Person{
    int id;
  char name[20];
    double height;
}person;

person* quicksort_id(person* plist,int left,int right);
person* bubblesort_id(person* plist, int maxcount);
person* quicksort_name(person* plist, int left,int right);
person* bubblesort_name(person* plist, int maxcount);
void getdata(person*, int,  FILE*);
void fprintdata(person*, char, char, int);

int main(int argc, char *argv[]){
  char* fname1="big.txt";
  char* fname2="middle.txt";
  char* fname3="small.txt";
  char* name="name";
  char* id="id";
    
    FILE *fp1; //filepointer for read contact.txt
    fp1=fopen(argv[3],"r");
    
    // save memory for result
    person* plist;
    person* insultlist_quick_id;
    person* insultlist_quick_name;
    person* insultlist_bubble_id;
    person* insultlist_bubble_name;
    //variables for check clock.
    clock_t bstart, bend, qstart, qend;
    double bduration, qduration;
    
    
    
    if(strcmp(argv[3],fname1)==0){
        //allocate memory person*BIG_MAXCOUNT
        //memory for data in file contact-big
        plist=(person*)malloc(sizeof(person)*BIG_MAXCOUNT);
        
        //input data in plist
        getdata(plist,BIG_MAXCOUNT, fp1);
	
        //idorder
        if(strcmp(argv[2],id)==0){
            qstart=clock();
            //do quicksort-id
            insultlist_quick_id=quicksort_id(plist,0,BIG_MAXCOUNT-1);
            qend=clock();
            
            bstart=clock();
            //do bubblesort-id
            insultlist_bubble_id=bubblesort_id(plist,BIG_MAXCOUNT);
            bend=clock();
            
            qduration=(double)(qend-qstart)/CLOCKS_PER_SEC;
            bduration=(double)(bend-bstart)/CLOCKS_PER_SEC;
            printf("quick-sort processing time: %2.30f  sec\n",qduration);
            printf("bubble-sort processing time: %2.30f  sec\n",bduration);
            printf("==> big-idorder-qsort.txt, big-idorder-bsort.txt is created.");
            
	    fprintdata(insultlist_quick_id,'i','q',BIG_MAXCOUNT);
	    fprintdata(insultlist_bubble_id,'i','b',BIG_MAXCOUNT);
	}
        else if(strcmp(argv[2],name)==0){
            
            
            qstart=clock();
            //do quicksort-name
            insultlist_quick_name=quicksort_name(plist,0,BIG_MAXCOUNT-1);
            qend=clock();
            
            bstart=clock();
            //do bubblesort-name
            insultlist_bubble_name=bubblesort_name(plist,BIG_MAXCOUNT);
            bend=clock();
            
            qduration=(double)(qend-qstart)/CLOCKS_PER_SEC;
            bduration=(double)(bend-bstart)/CLOCKS_PER_SEC;
            printf("quick-sort processing time: %2.30f  sec\n",qduration);
            printf("bubble-sort processing time: %2.30f  sec\n",bduration);
            printf("==> big-nameorder-qsort.txt, big-nameorder-bubsort.txt is created.");
            
            fprintdata(insultlist_quick_name,'n','q',BIG_MAXCOUNT);
	    fprintdata(insultlist_bubble_name,'n','b',BIG_MAXCOUNT);
        }
        else{
            printf("wrong argument.");
            return 0;
        }
    }
    else if(strcmp(argv[3],fname2)==0){
      plist=(person*)malloc(sizeof(person)*MIDDLE_MAXCOUNT);

      getdata(plist,MIDDLE_MAXCOUNT,fp1);

       //idorder
        if(strcmp(argv[2],id)==0){
            
            
            qstart=clock();
            //do quicksort-id
            insultlist_quick_id=quicksort_id(plist,0,MIDDLE_MAXCOUNT-1);
            qend=clock();
            
            bstart=clock();
            //do bubblesort-id
            insultlist_bubble_id=bubblesort_id(plist,MIDDLE_MAXCOUNT);
            bend=clock();
            
            qduration=(double)(qend-qstart)/CLOCKS_PER_SEC;
            bduration=(double)(bend-bstart)/CLOCKS_PER_SEC;
            printf("quick-sort processing time: %2.30f  sec\n",qduration);
            printf("bubble-sort processing time: %2.30f  sec\n",bduration);
            printf("==> middle-idorder-qsort.txt, middle-idorder-bsort.txt is created.");

	    fprintdata(insultlist_quick_id,'i','q',MIDDLE_MAXCOUNT);
	    fprintdata(insultlist_bubble_id,'i','b',MIDDLE_MAXCOUNT);
	}
        else if(strcmp(argv[2],name)==0){
           
            
            qstart=clock();
            //do quicksort-name
            insultlist_quick_name=quicksort_name(plist,0,MIDDLE_MAXCOUNT);
            qend=clock();
            
            bstart=clock();
            //do bubblesort-name
            insultlist_bubble_name=bubblesort_name(plist,MIDDLE_MAXCOUNT);
            bend=clock();
            
            qduration=(double)(qend-qstart)/CLOCKS_PER_SEC;
            bduration=(double)(bend-bstart)/CLOCKS_PER_SEC;
            printf("quick-sort processing time: %2.30f  sec\n",qduration);
            printf("bubble-sort processing time: %2.30f  sec\n",bduration);
            printf("==> small-nameorder-qsort.txt, small-nameorder-bsort.txt is created.");


	    fprintdata(insultlist_quick_name,'n','q',MIDDLE_MAXCOUNT);
	    fprintdata(insultlist_bubble_name,'n','b',MIDDLE_MAXCOUNT);
	}
	
        else{
            printf("wrong argument.");
            return 0;
        }
    
    }
    else if(strcmp(argv[3],fname3)==0){
        plist=(person*)malloc(sizeof(person)*SMALL_MAXCOUNT);

	getdata(plist,SMALL_MAXCOUNT,fp1);
        //idorder
        if(strcmp(argv[2],id)==0){
            
            
            qstart=clock();
            //do quicksort-id
            insultlist_quick_id=quicksort_id(plist,0,SMALL_MAXCOUNT-1);
            qend=clock();
            
            bstart=clock();
            //do bubblesort-id
            insultlist_bubble_id=bubblesort_id(plist,SMALL_MAXCOUNT);
            bend=clock();
            
            qduration=(double)(qend-qstart)/CLOCKS_PER_SEC;
            bduration=(double)(bend-bstart)/CLOCKS_PER_SEC;
            printf("quick-sort processing time: %2.30f  sec\n",qduration);
            printf("bubble-sort processing time: %2.30f  sec\n",bduration);
            printf("==> small-idorder-qsort.txt, small-idorder-bsort.txt is created.");

	    fprintdata(insultlist_quick_id,'i','q',SMALL_MAXCOUNT);
	    fprintdata(insultlist_bubble_id,'i','b',SMALL_MAXCOUNT);
	}
        else if(strcmp(argv[2],name)==0){
           
            
            qstart=clock();
            //do quicksort-name
            insultlist_quick_name=quicksort_name(plist,0,SMALL_MAXCOUNT-1);
            qend=clock();
            
            bstart=clock();
            //do bubblesort-name
            insultlist_bubble_name=bubblesort_name(plist,SMALL_MAXCOUNT);
            bend=clock();
            
            qduration=(double)(qend-qstart)/CLOCKS_PER_SEC;
            bduration=(double)(bend-bstart)/CLOCKS_PER_SEC;
            printf("quick-sort processing time: %2.30f  sec\n",qduration);
            printf("bubble-sort processing time: %2.30f  sec\n",bduration);
            printf("==> small-nameorder-qsort.txt, small-nameorder-bsort.txt is created.");

	    fprintdata(insultlist_quick_name,'n','q',SMALL_MAXCOUNT);
	    fprintdata(insultlist_bubble_name,'n','b',SMALL_MAXCOUNT);
        }
        else{
            printf("wrong argument.");
            return 0;
        }
    }
    fclose(fp1);
    free(plist);
}

int partition_id(person list[], int left, int right)
{
    person pivot,temp;
    int low,high;
    low = left;
    high = right+1;
    pivot = list[left];
    do { do
        low++;
        while(low<=right &&list[low].id<pivot.id);
        do
            high--;
        while(high>=left && list[high].id>pivot.id);
        if(low<high) SWAP(list[low], list[high],temp);
    } while(low<high);
    SWAP(list[left], list[high],temp);
    return high;
}

person* quicksort_id(person* plist,int left,int right){
    if(left<right){
        int q=partition_id(plist, left, right);
        quicksort_id(plist, left, q-1);
        quicksort_id(plist, q+1, right);
        
    }
    return plist;
}

int partition_name(person list[], int left, int right)
{
    person pivot,temp;
    int low,high;
    low = left;
    high = right+1;
    pivot = list[left];
    do { do
        low++;
        while(low<=right &&strcmp(list[low].name,pivot.name)<0);
        //strcmp(plist[j].name,plist[j+1].name)>0
        do
            high--;
        while(high>=left && strcmp(list[high].name,pivot.name)>0);
        if(low<high) SWAP(list[low], list[high],temp);
    } while(low<high);
    SWAP(list[left], list[high],temp);
    return high;
}



person* quicksort_name(person* plist, int left, int right){
    if(left<right){
        int q=partition_name(plist, left, right);
        quicksort_name(plist, left, q-1);
        quicksort_name(plist, q+1, right);
        
    }
    return plist;
}

person* bubblesort_id(person* plist,int maxcount){
    
    for(int i=1;i<maxcount;i++){
        for(int j=0;j<maxcount-i;j++){ 
            if(plist[j].id>plist[j+1].id){
                person temp=plist[j+1];
                plist[j+1]=plist[j];
                plist[j]=temp;
            }
        }
    }
    return plist;
}
person* bubblesort_name(person* plist, int maxcount){
    for(int i=1;i<maxcount;i++){
        for(int j=0;j<maxcount-i;j++){
            if(strcmp(plist[j].name,plist[j+1].name)>0){
                person temp=plist[j+1];
                plist[j+1]=plist[j];
                plist[j]=temp;
            }
        }
    }
    return plist;
}
void getdata(person* plist, int maxcount,  FILE* fp1 ){
 for(int i=0;i<maxcount;i++){
      fscanf(fp1, "%d", &plist[i].id);
      fscanf(fp1, "%s", plist[i].name);
      fscanf(fp1, "%lf", &plist[i].height);
        } 
}
void fprintdata(person* insultlist, char ordermode, char sortmode,  int maxcount){
  FILE *fpq; //filepointer for save quicksort result
  FILE *fpb; //filepointer for save bubblesort result
  //big
  if(maxcount==BIG_MAXCOUNT){
    //idorder
    if(ordermode=='i'){
      //quicksort
      if(sortmode=='q'){
	fpq=fopen("big-idorder-qsort.txt","w");
	for(int i=0;i<BIG_MAXCOUNT;i++)
	  fprintf(fpq,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpq);
      }
      //bubblesort
      else if(sortmode=='b'){
	fpb=fopen("big-idorder-bubsort.txt","w");
	for(int i=0;i<BIG_MAXCOUNT;i++)
	  fprintf(fpb,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpb);
      }
    }
    //nameorder
    else if(ordermode=='n'){
      //quicksort
      if(sortmode=='q'){
	fpq=fopen("big-nameorder-qsort.txt","w");
	for(int i=0;i<BIG_MAXCOUNT;i++)
	  fprintf(fpq,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpq);
      }
      //bubblesort
      else if(sortmode=='b'){
      fpb=fopen("big-nameorder-bubsort.txt","w");
      for(int i=0;i<BIG_MAXCOUNT;i++)
	fprintf(fpb,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
      fclose(fpb);
      }
    }
  }

  //middle
  else if(maxcount==MIDDLE_MAXCOUNT){
    //idorder
    if(ordermode=='i'){
      //quicksort
      if(sortmode=='q'){
	fpq=fopen("middle-idorder-qsort.txt","w");
	for(int i=0;i<MIDDLE_MAXCOUNT;i++)
	  fprintf(fpq,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpq);
      }
      //bubblesort
      else if(sortmode=='b'){
	fpb=fopen("middle-idorder-bubsort.txt","w");
	for(int i=0;i<MIDDLE_MAXCOUNT;i++)
	  fprintf(fpb,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpb);
      }
    }
    //nameorder
    else if(ordermode=='n'){
      //quicksort
      if(sortmode=='q'){
	fpq=fopen("middle-nameorder-qsort.txt","w");
	for(int i=0;i<MIDDLE_MAXCOUNT;i++)
	  fprintf(fpq,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpq);
      }
      //bubblesort
      else if(sortmode=='b'){
      fpb=fopen("middle-nameorder-bubsort.txt","w");
      for(int i=0;i<MIDDLE_MAXCOUNT;i++)
	fprintf(fpb,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
      fclose(fpb);
      }
    }
  }

  //small
  else{
     //idorder
    if(ordermode=='i'){
      //quicksort
      if(sortmode=='q'){
	fpq=fopen("small-idorder-qsort.txt","w");
	for(int i=0;i<SMALL_MAXCOUNT;i++)
	  fprintf(fpq,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpq);
      }
      //bubblesort
      else if(sortmode=='b'){
	fpb=fopen("small-idorder-bubsort.txt","w");
	for(int i=0;i<SMALL_MAXCOUNT;i++)
	  fprintf(fpb,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpb);
      }
    }
    //nameorder
    else if(ordermode=='n'){
      //quicksort
      if(sortmode=='q'){
	fpq=fopen("small-nameorder-qsort.txt","w");
	for(int i=0;i<SMALL_MAXCOUNT;i++)
	  fprintf(fpq,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
	fclose(fpq);
      }
      //bubblesort
      else if(sortmode=='b'){
      fpb=fopen("small-nameorder-bubsort.txt","w");
      for(int i=0;i<SMALL_MAXCOUNT;i++)
	fprintf(fpb,"%d\t%s\t%.2f\n",insultlist[i].id,insultlist[i].name,insultlist[i].height);
      fclose(fpb);
      }
    } 
  }
  
}

      
