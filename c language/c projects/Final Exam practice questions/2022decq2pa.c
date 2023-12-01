#include <stdio.h>
int main(){
	
	int numArr[8];
	int i, N;
	
	for(i=0; i<8; i++){
		printf("Input number %d: ",i+1);
		scanf("%d",&numArr[i]);
	}
	
	printf("\n");
	
	for(i=0; i<8; i++){
		printf("%d ",numArr[i]);	
	}
	
	printf("\n");
	
	printf("Input the number of positions to be shifted: ");
	scanf("%d",&N);
	
	if(N>0 && N<8){
		
		int temporary[8];
		
		for(i=0; i<8; i++){
			temporary[(i + N ) % 8] = numArr[i];
		}
		
		for(i=0; i<8; i++){
			numArr[i] = temporary[i];
		}
		
		printf("\n\nIf n = %d, after moving all the %d positions to right\n", N,N);
		
		for(i=0; i<8; i++){	
			printf("%d ", numArr[i]);
		}
	}
	else{
		printf("Invalid input for number of positions to shift\n");
	}
	
	return 0;
}