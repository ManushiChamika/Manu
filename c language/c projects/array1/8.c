#include <stdio.h>
#define size 6

int main(){
	int numArr[size];
	int i;
	
	for(i=0; i<size; i++){		
		printf("Number %d: ", i+1);
		scanf("%d", &numArr[i]);	
	}
	printf("\n\nNumber Series: ");
	
	for (i=0; i<size ; i++){
			printf("%d ",numArr[i]);
	}
	
	printf("\n\nOdd Numbers: ");
	
	for(i=0; i<size; i++){
		if(numArr[i] % 2 != 0){
			printf("%d ", numArr[i]);
		}
	}
	printf("\n\nEven Numbers: ");
	
	for(i=0; i<size; i++){
		if(numArr[i] % 2 == 0){
			printf("%d ", numArr[i]);
		}
	}
	return 0;
}