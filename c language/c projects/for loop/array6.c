#include <stdio.h>
int main(){
	
	int i, j;
	float size[3][5], total;
	float avgSize[3];
	
	for(i=0; i<3;i++){
	
	total = 0;
	
	printf("Machine %d\n", i+1);
	
		for(j=0; j<5; j++){
			printf("Enter size of chocolate ball %d: ", j+1);
			scanf("%f", &size[i][j]);	
			total = total + size[i][j];
			avgSize[i] = total / 5.0;
			
		}
		
	printf("\n");
	
	}
		for(i=0;i<3; i++){
			
			printf("The average size of each machine %d is: %.2f\n", i+1, avgSize[i]);
		}
		
	return 0;
}