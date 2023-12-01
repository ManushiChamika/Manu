#include <stdio.h>

int main(){
	float marks[5][2];
	float finalMark[5];
	int i, j;
	
	for(i=0; i<5; i++){
		printf("student %d\n", i+1);
	
		for(j=0; j<2; j++){
			
			if(j==0){
			
				printf("Input mark 1 of student %d: ", i+1);
				scanf("%f", &marks[i][j]);
			}
			else if(j==1){
			
				printf("Input mark 2 of student %d: ", i+1);
				scanf("%f", &marks[i][j]);
			}
		}
	}
		for (i=0; i<5; i++){	
			finalMark[i] = marks[i][0] * 40.0/100.00 + marks[i][1] * 60.0/100.00;
			printf("\nFinal mark of student %d is %.2f\n", i+1, finalMark[i]);
		}
		printf("\n");
	
	return 0;	
}