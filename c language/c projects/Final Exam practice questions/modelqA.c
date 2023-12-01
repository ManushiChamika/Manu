#include <stdio.h>

int main(){
	
	int i, j, m, n;
	float total = 0, min = 1e9, average = 0, max = 0, usage[4][7];
	
	for(i=0; i<4; i++){
		printf("Week %d\n", i+1);
		
		for(j=0; j<7; j++){
			printf("Electricity usage of day %d: ", j+1);
			scanf("%f",&usage[i][j]);
			
			total = total + usage[i][j];
			
			if (max < usage[i][j]){
				max = usage[i][j];
				m = j+1;
			}
			if(min > usage[i][j]){
				min = usage[i][j];
				n = j+1;
			}
		}
		average = total / 28.0;
	
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<4 ; i++){
		for(j=0; j<7; j++){
			printf("%.1f  ",usage[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDay of the month with maximum usage: %d\n", m);
	printf("Maximum usage in units: %.2f\n", max);
	printf("Day of the month with minimun usage: %d\n", n);
	printf("Minimum usage in units: %.2f\n", min);
	printf("Total usage for the month: %.2f\n", total);
	printf("Average usage for the month: %.2f\n", average);
	
	return 0;
}