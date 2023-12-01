#include <stdio.h>
#define size 6

int main(){
	
	int arrNum[size]= {0}, i;
	
	for(i=0; i<size; i++){
		printf("Input number %d",i+1);
		scanf("%d", arrNum[i]);			
	}
	printf("Enter values to the Array:\n ");
	
	for(i=0; i<size; i++){
		printf("%d ",arrNum[i]);
	}
	if(arrNum[0] < arrNum[1] < arrNum[2] < arrNum[3] < arrNum[4] < arrNum[5] < arrNum[6]);
	{
//		printf
	}
}