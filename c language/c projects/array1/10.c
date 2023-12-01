#include <stdio.h>
#define size 7

int main(){
	int num[size], i, count[6] = {0}, j;
	
	for(i=0; i<size; i++){
		printf("Input number %d: ",i+1);
		scanf("%d", &num[i]);
		
		while(num[i] < 1 || num[i] > 5){
			printf("Invalid number. Input number %d: ",i+1);
			scanf("%d", &num[i]);
		}
		count[num[i]]++;
	}
	
 	printf("Num array: ");

    for(i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\nNumber of times each number appears:\n");

    for(j = 1; j <= 5; j++) {
        printf("%d appears %d times.\n", j, count[j]);
    }
	return 0;
}