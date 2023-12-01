#include <stdio.h>

int main(){
	
	float rainArr[7];
	int i;
	float average,  max = 0, min = 1e9 , k = 1.0, total = 0;
	
	
	for(i=0; i<7; i++){
		printf("Input the of day %d: ", i+1);
		scanf("%f", &rainArr[i]);
	}
	
	printf("\n");
	
	for(i=0; i<7; i++){
		printf("%.1f ",rainArr[i]);
	}
	
	printf("\n\n");
	
	for(i=0; i<7; i++){
		printf("Day 1 to %d\n", i+1);
		
		total = total + rainArr[i]; 
		average = total / k ;
		
			if(max < rainArr[i] ){
				max = rainArr[i] ;
			}
			if(rainArr[0] >= rainArr[i] ){
				min = rainArr[i] ;
			}
			
		printf("Average rainfall: %.2f mm\n", average);
		printf("Maximum rainfall: %.2f mm\n", max);
		printf("Minimum rainfall: %.2f mm\n\n", min);
		
		k++;
	}	
	
	return 0;
}