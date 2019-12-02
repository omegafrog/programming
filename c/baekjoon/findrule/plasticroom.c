#include<stdio.h>
#include<string.h>
#include<time.h>



int main(){
  // FILE *fp1,*fp2;
  //fp1=fopen("set.txt","rw");
  //fp2=fopen("result.txt","w");
  //clock_t start1,start2,start3,start4,start,stop1,stop2,stop3,stop4,stop;
  //double duration1,duration2,duration3,duration4,duration;
  //for(;;){
  int numset[2][8]={{0,1,2,3,4,5,7,8},{0,0,0,0,0,0,0,0}};

  int sixnine=0;

  char inputset[1000000];
  //start=clock();
  //start1=clock();
  scanf("%s",inputset);
  //fscanf(fp1,"%s",inputset); printf("%s",inputset);
  //if(strcmp(inputset,"999999")==0)break;
  int len;
  len = strlen(inputset);
  
  for(int j=0;j<len;j++){ //56
      for(int i=0;i<8;i++){
	if(inputset[j]-48==numset[0][i])
	  numset[1][i]++;
	else if(inputset[j]=='6'||inputset[j]=='9'){
	  sixnine++;
	  break;
	}
      }
  }
  //  stop1=clock();
  
  //start2=clock();
  int max1=0,max2=0;
  if(sixnine!=0){
    if(!(sixnine%2))max1=sixnine/2;
    else max1=sixnine/2+1;
  }
  
  //stop2=clock();
  
  //start3=clock();
  for(int i=0;i<8;i++)
    if(numset[1][max2]<numset[1][i])  max2=i;
  //stop3=clock();
  //start4=clock();
  max1>numset[1][max2]?printf("%d",max1):printf("%d",numset[1][max2]);
  /*  fprintf(fp2,"input:%s max1:%d numset[1][max2]:%d max2:%d\n",inputset,max1,numset[1][max2],max2);*/
  /*
     stop4=clock();
     stop=clock();
     duration1=(stop1-start1)/CLOCKS_PER_SEC;
     duration2=(stop2-start2)/CLOCKS_PER_SEC;
     duration3=(stop3-start3)/CLOCKS_PER_SEC;
     duration4=(stop4-start4)/CLOCKS_PER_SEC;
     duration=(stop-start)/CLOCKS_PER_SEC;
     printf("duration1:%f \n duration2:%f\nduration3:%f\nduration4:%f\nduration:%f\n",duration1, duration2, duration3, duration4,duration);
   */
  //  }
  //fclose(fp1);
  //fclose(fp2);
}


      
