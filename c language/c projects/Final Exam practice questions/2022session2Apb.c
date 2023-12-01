#include <stdio.h>
int main(){
	
	int image[4][4];
	int i, j;
	
	for(i=0; i<4; i++){
		printf("Values for row %d\n", i+1);
		for(j=0; j<4; j++){
			printf("	Values for row %d: ", j+1);
			scanf("%d", &image[i][j]);	
		}
	}
	
	printf("\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", image[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(image[i][j] < 55){
				image[i][j] = 0;
			}
			else{
				image[i][j] = 1;
			}
			
			printf("%d ", image[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}