#include <stdio.h>
int main(){
	
	int num, range, i;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	printf("Enter the range: ");
	scanf("%d", &range);
	
	for (i=1; i<= range; i++){
		
		printf("\n%d x %d = %d\n ", num, i, num * i);
		
	}
	return 0;
}