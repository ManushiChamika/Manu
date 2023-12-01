#include <stdio.h>

int main(){
	
	char strArr[15];
	int i;
	
	for(i=0; i<15; i++){
		printf("Input character %d: ", i+1);
		scanf(" %c", &strArr[i]);
	}
	
	printf("\n");
	printf("Original Array\n");
	
	for(i=0; i<15; i++){
		printf("%c ", strArr[i]);
	}
	
	printf("\n\nReversed Array\n");
	
	for(i=15; i>=0 ; i--){
		printf("%c ", strArr[i]);
	}
		
	return 0;
}