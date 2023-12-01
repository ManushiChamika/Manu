#include<stdio.h>
int main(){
	int N, i, j;
	
	while(N <= 0){
		
		printf("Enter Number: ");
		scanf("%d", &N);
	
		if(N < 0)
			printf("Invalid Number.\n");
		else{
			break;
		}
	}
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			printf("* ");
		}
		printf("\n\n");
	}
	
	
	return 0;
}