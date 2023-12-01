#include <stdio.h>

int main(){
	
	int i, j, N = 7;
	
	for (i=1 ; i <= N; i++){
		for (j=1 ; j <= i ; j++){
			printf("*");
		}
			
	printf("\n");
	}	
	for (i=1 ; i <= N; i++)	{
		for (j=i ; j<= N; j++){
			if ( i % 2 != 0){
				printf("*");
			}
			else {
				break;
			}
		}
//		if (i % 2 != 0){
			printf("\n");
//		}
	}
	return 0;
}
