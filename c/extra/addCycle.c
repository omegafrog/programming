#include<stdio.h>

int dFunc(int num);
int main(){
	register int i = 1,j=1;	

	for(i=1;i<10000;i++){
		int count = 0;
		for(j=1;j<10000;j++){
			if(i==dFunc(j)){
				count++;
				break;
			}
			else continue;
		}
		if(count==0)
			printf("%d\n",i);
	}
}


int dFunc(int num){
	/*int number[5];
	int result;

	if(num<10){
		number[0]=(int)num;
		//printf("%d",number[0]);
		result = number[0]+num;
	}

	else if(num<100){
		number[0]=(int)(num-num/10*10);
		number[1]=(int)(num-number[0])/10;
		//printf("%d%d",number[1],number[0]);
		result = number[1]+number[0]+num;
	}
	else if(num<1000){
		number[0]=(int)(num-num/10*10);
		number[2]=(int)(num/100);
		number[1]=(int)(num-number[2]*100-number[0]);
		//printf("%d%d%d",number[2],number[1],number[0]);
		result = number[2]+number[1]+number[0]+num;
	}
	else{
		number[3]=(int)(num/1000);
		number[2]=(int)(num/100-10*number[3]);
		number[1]=num/10-100*number[3]-10*number[2];
		number[0]=num-num/10*10;
		//printf("%d%d%d%d",number[3],number[2],number[1],number[0]);
		result = number[3]+number[2]+number[1]+number[0]+num;
	}
	return result;
	*/
	int value;
	value = num + (num / 1000) % 10 + (num / 100) % 10 + (num / 10) % 10 + num % 10;
	return value;

}

