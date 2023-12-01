#include <stdio.h>
int main(){
	
int num[10];
int i;
	
	for(i=0; i<10; i++){
		
		printf(" element %d: ", i);
		scanf("%d", &num[i]);
		
	}
	
	printf("\nElements in the array are : ");
	for (i=0; i<10; i++){
		printf("%d ", num[i]);
			
	}
	printf("\n");

return 0;
}

