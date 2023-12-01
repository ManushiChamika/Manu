#include <stdio.h>

int main(){
	
	int i, j;
	int ID;
	int answers[4];
	int cAnswer[4]={1,4,2,3};
	int count = 0;
		
	FILE * filePtr;
	
	filePtr = fopen("answers.dat", "a");
	
	if(filePtr == NULL){
		printf("The file does not exist\n");
		return -1;
	}
	
	for(i=0; i<5; i++){
		printf("Input student ID: ");
		scanf("%d", &ID);
		
		for (j = 0; j < 4; j++) {
            printf("Input answer of question %d (1, 2, 3, 4, 5): ", j + 1);
            scanf("%d", &answers[j]);
    	}
		
		fprintf(filePtr, "%d\t%d %d %d %d\n", ID, answers[0], answers[1], answers[2], answers[3]);
			
		for(j=0; j<4; j++){
			if(cAnswer[j] == answers[j] ){
				count ++;
			}
		}
		
		printf("The number of correct answers : %d\n", count);
		
		printf("\n");
			
		count = 0;	
	}
	
	fclose(filePtr);
	
	return 0;
}
