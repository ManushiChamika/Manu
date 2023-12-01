#include <stdio.h>
#define size 10

int main(){
	int myArray[size] = {0};
	int i, total = 0, k;
	int largeNum[size] = {0};
	float average;
	
	for(i=0; i<size; i++){
		printf("Input number %d: ", i+1);
		scanf("%d", &myArray[i]);
	}
	
	printf("Enter the number series: ");
	
	for(i=0; i<size; i++){
		printf("%d ", myArray[i]);
		total += myArray[i];
	}
	average = (float)total / 10.0;
	
	printf("\n\nAverage : %.1f", average);
	
	for(i=0; i<size ; i++){
		if(myArray[i] > average){
			largeNum[k] = myArray[i];
			k++;
		}
	}
	
	printf("\n\nValues greater than the average: ");
	
	for(i=0; i<k; i++){
		printf("%d ",largeNum[i]);
	}
	return 0;
}