#include <stdio.h>
int main(){
	
	int num, i , element[50];
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &num);
	
	printf("Input %d elements to be stored in the array:\n", num );
		
		for (i=0; i<num; i++){
			
			printf("Element - %d: ",i);
			scanf("%d", &element[i]);
			
		}
		printf("The elemnts stored in the first array are:\n ");
		
		for(i=0; i<num; i++){
			
			printf("%d ", element[i]);
				
		}
		printf("\nThe elemnts copied into the second array are:\n ");
		for(i=0; i<num;  i++){
			printf("%d ", element[i]);
		}
	
}