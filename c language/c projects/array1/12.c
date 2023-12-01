#include <stdio.h>
#define size 8

int main(){
	
	int num[size], i , count = 0;
	
		for(i=0; i<size; i++){
			printf("Input number %d: ",i+1);
			scanf("%d", &num[i]);
		
		while(num[i] < 1 || num[i] > 5){
			printf("Invalid number. Input number %d: ",i+1);
			scanf("%d", &num[i]);
		}	
	}
	
	printf("\nnum array: ");
	for(i=0; i<size ; i++){
		printf("%d ", num[i]);
	}
	for (i=1; i<size -1; i++){
		if(num[i] == 1 || num[i+1] == 3){
			count++;
		}
	}
	printf("\nNumber of times the pattern 1 3 appear: %d\n", count);
	
	return 0;
}