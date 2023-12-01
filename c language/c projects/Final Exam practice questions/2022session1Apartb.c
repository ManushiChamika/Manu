#include <stdio.h>

int main(){
	
	int identityArr[4][4];
	int arr[4][4];
	int i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Enter element %d: ",j+1);
			scanf("%d", &identityArr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<4 ; j++){
			printf("%d ",identityArr[i][j] );
		}
		printf("\n");
	}
	
	int isIdentity = 1; // Assume it's an identity matrix

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j && identityArr[i][j] != 1) {
                isIdentity = 0; // If diagonal elements are not 1, it's not an identity matrix
            } else if (i != j && identityArr[i][j] != 0) {
                isIdentity = 0; // If non-diagonal elements are not 0, it's not an identity matrix
            }
        }
    }

    // Output the identity check result
    if (isIdentity) {
        printf("The entered matrix is a 4x4 identity matrix.\n");
    } else {
        printf("The entered matrix is not a 4x4 identity matrix.\n");
    }
    
    return 0;
}