#include <stdio.h>
int main(){
	int rainfall[3][4];
	int maxRainfall[3];
	int i,j;
	
	for(i=0; i<3; i++){
		printf("Day %d\n", i+1);
		for (j=0; j<4; j++){
			printf("Input the rainfall of city %d: ", j+1);
			scanf("%d", &rainfall[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++){
		maxRainfall[i] = rainfall[i][0];	
		for(j=0; j<4; j++){
			if(maxRainfall[i] < rainfall[i][j]){
			maxRainfall[i]= rainfall[i][j];
			}
		}
		printf("\nThe maximum Rainfall for day %d is %d", i+1, maxRainfall[i]);
		maxRainfall[i] = 0;
		j = 0;
	}
	
			
	return 0;
}