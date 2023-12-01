#include <stdio.h>

int main(){
	
	int i, j, k, redCount = 0;
	char colour[4][4];
	int positions[4][2];
	
	for(i=0; i<4; i++){
	
		for(j=0; j<4; j++){
			printf("Input colour(R,G,B) of bulb %d: ", j+1);
			scanf(" %c",&colour[i][j]);
		}
		printf("\n");
		
	}
	for(i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("%c ",colour[i][j]);
			if(colour[i][j] == 'R'){
				positions[redCount][0] = i;
				positions[redCount][1] = j;
				redCount++;
			}
		}
		printf("\n");	
	}
	
	printf("\n\nRed LED bulb Positions\n");
	
	for(k=0; k < redCount ; k++){

		printf("[%d,%d] ", positions[k][0], positions[k][1] );
		
	}
	
	return 0;	
}