#include <stdio.h>

int main(){
	
	FILE * filePtr;
	
	char stdID[20];
	int cAnswers[4] = {1,4,2,3};
	int answer[4];
	int i, j;
	int count = 0;
	
	filePtr = fopen("answer.dat", "w+");
	
	if(filePtr == NULL){
		printf("The file does not exist!\n");
		return -1;
	}
	
	for(i=0; i<5; i++){
		printf("Student ID: ");
		scanf("%s", stdID );
		
		for(j=0;j<4; j++){
			printf("Answer of MCQ %d (1-5): ", j+1);
			scanf("%d", &answer[j]);
		}
		fprintf(filePtr, "%s\t%d %d %d %d\n", stdID, answer[0], answer[1], answer[2], answer[3]);
		
		printf("\n");
	}
	
	fclose(filePtr);
	
	filePtr = fopen("answer.dat", "r");
	
	if(filePtr == NULL){
		printf("The file does not exist!\n");
		return -1;
	}
	
	while(fscanf(filePtr, "%s %d %d %d %d", stdID, &answer[0], &answer[1], &answer[2], &answer[3]) == 5){
		for(j= 0; j<4; j++){
			if(answer[j] == cAnswers[j]){
			count++;
			}
		}
		
		printf("%s\t%d\n", stdID, count);
		count = 0;	
	}
	printf("\n");
	
	
	fclose(filePtr);
	
	return 0;
}