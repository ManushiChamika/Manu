#include <stdio.h>
int main(){
	
	int num, sum = 0, i, element[50];
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &num);
	
	printf("Input %d elements in the array:\n", num);
	
	for (i=0; i<num ;i++){
		
		printf("Element - %d: ", i);
		scanf("%d", &element[i]);
	
	}
	for (i=0; i < num; i++){
		sum = sum + element[i];
	}
	printf("\nSum of all the elements stored in the array is: %d\n", sum);
}