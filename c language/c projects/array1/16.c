#include <stdio.h>
#define size 8

int main(){
	int num[size] = {0};
	int count = 0, i;
	
	for(i=0; i<size; i++){
		printf("Input number %d: ", i+1);
		scanf("%d",&num[i]);

	}
	printf("\n\nnum array: ");
	for(i=0; i<size; i++){
		printf("%d ", num[i]);
	}
	printf("\n\nNumber of times the pattern 1 3 appear: ");
	for(i=0; i< size - 1; i++){
		if(num[i] == 1 && num[i+1] == 3){
			count ++;
		}
	}
	printf("%d",count);
	return 0;
}