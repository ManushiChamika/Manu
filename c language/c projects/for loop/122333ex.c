#include <stdio.h>
int main(){
	
	int r, num, i, j, m = 1, square;
	
	printf("Enter Number: ");
	scanf("%d", &num);
	
	while ( num < 0 ){
	
		if ( num < 0 ){
			printf("Invalid number. Enter Number: ");
			scanf("%d", &num);
		}
	}
	while ( m <= num){
		square = m * m;
		r = square / m; 
			for (i=1; i <= r; i++){
				printf("\n");
				for (j=1; j <= r; j++){	
					printf("%d ", m);
				}
				printf("\n");			
			}
		m++;
		printf("\n");
	}
	return 0;
}