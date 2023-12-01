#include <stdio.h>

int main(){
	
	int identityMatrix[4][4] = {
    {1, 0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1},
	};
	
	int identityArr[4][4];
	int i, j, condition;
	
	for(i=0; i<4; i++){
		printf("Values for row %d\n", i+1);
		for(j=0; j<4; j++){
			printf("\tEnter element %d: ", j+1);
			scanf("%d", &identityArr[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", identityArr[i][j]);
		}
		printf("\n");
	}
	
	condition = 1;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(identityArr[i][j] == identityMatrix[i][j]){
				condition = 1;
			}
			else {
				condition = 0;
			}
		}
		printf("\n");
	}
	if(condition == 1){
			printf("Is it an identity matrix\n");
	}else{
		printf("It is not an identity matrix\n");
	}
	

	return 0;
}