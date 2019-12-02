#include<stdio.h>
void decToBin1(int dec) {
	int binarr[20];
	int count = 0;
	do {
		*(binarr + count) = dec % 2;
		dec = dec / 2;
		count++;
	} while (!(dec/2==0));
	*(binarr + count) = dec;
	for (int x = count; x >= 0; x--)
		printf("%d", *(binarr + x));
}
/////////////////////¼öÁ¤Áß////////////////////////
void decToBin2(int dec,int *arr) {
	int binarr[20];
	int count = 0;
	do {
		*(binarr + count) = dec % 2;
		dec = dec / 2;
		count++;
	} while (!(dec / 2 == 0));

	*(binarr + count) = dec;
	
	int x = count+1;
	while(x<20)
		binarr[x] = '\0';

	int *ptr1 = *(binarr);
	int *ptr2 = *(binarr + count);

	for (int i = 0; i < count/2; i++) {
		int temp = *ptr1;
		binarr[i] = *ptr2;
		binarr[ count- i] = temp;
		ptr1++;
		ptr2--;
	}	
	arr = *binarr;
}


	/*for (int x = count; x >= 0; x--)
		printf("%d", *(binarr + x));*/


