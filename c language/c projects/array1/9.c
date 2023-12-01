#include <stdio.h>
#define size 10

int main(){
	int myArray[size];
	int i, total = 0;
	float average;
	int largeNum[size];
	int k = 0;
	
	for(i=0; i<size; i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &myArray[i]);
		
		total += myArray[i];		
	}
	average = (float)total / 10.0;

	printf("\n\nAverage : %.1f", average);
		
	printf("\n\nmyArray: ");
	
	for(i=0; i<size; i++){
		printf("%d ", myArray[i]);
	}
	
	for(i=0; i<size; i++){
		if(myArray[i] > average){
			largeNum[k] = myArray[i];//store value in largeNum
			k++;	
		}
	}
		printf("\n\nlargeNum: ");
		
		for(i=0; i<k; i++){
			printf("%d ", largeNum[i]);	
		}
	return 0;
}
/*We declare the largeNum array to store the numbers greater than the average.

We use the largeNumCount variable to keep track of the number of elements in largeNum.

During the iteration through myArray, if a number is greater than the average, we store it in the largeNum array and increment the largeNumCount.

After the loop, we iterate through largeNum and print the numbers greater than the average.

This code will correctly store and display the numbers greater than the average in the largeNum array.*/

