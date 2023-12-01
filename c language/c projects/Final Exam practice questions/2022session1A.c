#include <stdio.h>

int main(){
	
	int numArr[8], i, n;
	
	for(i=0; i<8; i++){
		printf("Number %d: ", i+1);
		scanf("%d", &numArr[i]);
	}
	
	printf("\n");
	
	for(i=0; i<8; i++){
		printf("%d ",numArr[i]);
	}
	
	// Input the number of positions to shift (n)
    printf("\n\nEnter the number of positions to shift to the right: ");
    scanf("%d", &n);

    // Perform the right shift
	if (n > 0 && n < 8) {
        int temp[8]; // Temporary array to store shifted values
        
        /*i is the current index of the element in the
		 original array.
		n is the number of positions to shift to the right.
		% 8 is used to ensure that the new position wraps around
		 to the beginning of the array if it exceeds the array 
		 size (8).
		For example, if i is 3, and n is 2, then (i + n) % 8 
		would be (3 + 2) % 8, which equals 5. This means the
		 element at index 3 in the original array is shifted 
		 to index 5 in the temporary array.*/
		for (i = 0; i < 8; i++) {
            temp[(i + n) % 8] = numArr[i];
        }
        for (i = 0; i < 8; i++) {
            numArr[i] = temp[i];
        }

        printf("\nIf n = %d , after moving all the 2 positions to the right\n", n);
        for (i = 0; i < 8; i++) {
            printf("%d ", numArr[i]);
        }
    } else {
        printf("\nInvalid input for the number of positions to shift. It should be between 1 and 7.\n");
    }
	
	printf("\n");

	return 0;
}

