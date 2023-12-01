#include <stdio.h>
#define size 10

int main(){
	
	int intArr[size] ={0};
	int i;
	
	for(i=0; i<size; i++){
		printf("Input a number: ");
		scanf("%d", &intArr[i]);
	}
	printf("\n\nNumber series: ");
	
	for(i=0; i<size ; i++){
		printf("%d ",intArr[i]);
	}
	printf("\n\nPositive numbers: ");
	
	for(i=0; i<size; i++){
		if(intArr[i] > 0){
			printf("%d ", intArr[i]);
		}
	}
	printf("\n\nNegative numbers: ");
	
	for(i=0; i<size; i++){
		if(intArr[i] < 0){
			printf("%d ", intArr[i]);
		}
	}
	
	return 0;
}