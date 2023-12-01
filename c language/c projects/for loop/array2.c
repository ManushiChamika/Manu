#include <stdio.h>
int main(){
	
	int num, i, element[50];
	
	printf("Input the number of elements in the array: ");
	scanf("%d", &num);
	
	printf("Input %d number of elements in the array : \n", num);
	
	num=num-1;
	
	for(i = 0; i <= num; i++){
		
		printf("Element %d: ", i);
		scanf("%d", &element[i]);
	}
	printf("The values stored into the array are:\n" );
	for(i=0; i<= num; i++){
		printf("%d ", element[i]);
	}
	printf("\nThe values stored into the array are:\n" );
	for (i = num; i>= 0; i--){
		printf("%d ", element[i]);
	}
	return 0;
}