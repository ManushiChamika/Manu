#include <stdio.h>
int main(){
	int i;
	char string[20] = {0};
	
	for(i=0 ; i<13; i++){
		printf("Enter the test: ");
		scanf("%s", &string);	
	}
	
	printf("original array ");
	
	for(i=0; i<13; i++){
		printf("%s ", string);
	}
	
	return 0;
}