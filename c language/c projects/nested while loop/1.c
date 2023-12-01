#include <stdio.h>
#define size 6

int main(){
	
	char correctAnswers[size] = {'T', 'F', 'F', 'T', 'F', 'T'};
	char studentAnswers[size];
	int i, count = 0;
	
	for(i=0; i < size; i++){
		printf("Input answer %d: ",i+1);
		scanf(" %c", &studentAnswers[i]);	
	}
	
	printf("Correct Answers\n");
	
	for(i=0; i < size; i++){
		printf("%c, ",correctAnswers[i]);
	}
	
	printf("\nStudent Answers\n");
	
	for (i=0; i < size ; i++){
		printf("%c, ",studentAnswers[i]);
		
		if (studentAnswers[i] == correctAnswers[i]){
			count += 1;
		}
	}
	printf("\nNumber of correct answers : %d\n", count);

	return 0;
}