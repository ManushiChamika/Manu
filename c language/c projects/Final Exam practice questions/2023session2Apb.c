#include <stdio.h>

int main(){
	
	int matrixS[4][4];
	int i, j, symmetricMatrix = 1;
	
	
	for(i=0; i<4 ; i++){
		printf("Values for row %d\n", i+1);
		for(j=0; j<4; j++){	
			printf("\tEnter element %d: ", j+1);
			scanf("%d", &matrixS[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<4 ; i++){
		for(j=0; j<4; j++){
			printf("%d ", matrixS[i][j]);
		}
		printf("\n");
	}
	
	if(matrixS[1][0] == matrixS[0][1] && matrixS[2][0] == matrixS[0][2] && matrixS[3][0] == matrixS[0][3] && matrixS[3][1] == matrixS[1][3] && matrixS[2][1] == matrixS[1][2] && matrixS[3][2] == matrixS[2][3])
		printf("\nThis is symmetric matrix.\n");
	else{
		printf("\nThis is not a symmetric matrix.\n");
	}
	printf("\n");
	
	return 0;
}