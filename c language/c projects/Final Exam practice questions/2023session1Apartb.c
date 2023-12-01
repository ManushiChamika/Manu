#include <stdio.h>

int main(){
	
	float salesArr[2][3];
	float total = 0, max = 0;
	int count;
	int i, j;
	
	for(i=0; i<2; i++){
		printf("Enter sales amount of sales person %d.\n", i+1);
		for(j=0; j<3; j++){
			printf("	Product %d: ", j+1);
			scanf("%f", &salesArr[i][j]);
			
			total = total + salesArr[i][j];
				
		}
			if(max < total){
				max = total;
				count = i+1;
			}
			total = 0;
	}
	
	printf("\n\nThe sales amount of 2 sales person for 3 products.\n");
	
	printf("\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%.2f\t\t", salesArr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("\nThe sales with the highest sales amount is sales person %d\n", count);
	
	return 0;
}