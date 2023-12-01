#include <stdio.h>

int main(){
	
	int ratings[3][4];
	int i, j, m;
	float max = 0, average = 0;
	int total = 0;
	
	for(i=0; i<3; i++){
		printf("Movie %d\n", i+1);
		for(j=0; j<4; j++){
			printf("Input rating of reviewer %d: ",j+1);
			scanf("%d", &ratings[i][j]);
			
			total = total + ratings[i][j];
		}	

		printf("\n");
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d ", ratings[i][j]);
		}
	
		printf("\n");
	}
	
	printf("\n");
	
    for (i = 0; i < 3; i++) {
        total = 0; // Reset the total for each movie
        
        for (j = 0; j < 4; j++) {
            total += ratings[i][j];
        }
        average = (float)total / 4.0;
        
         if (max < average) {
	            max = average;
	            m = i + 1;
	  	}
        printf("Movie %d\t%.2f\n", i + 1, average);
    }
	
	printf("\nMovie %d recieved the highest average rating\n", m);
	
	return 0;
}