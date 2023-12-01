#include <stdio.h>

int main(){
	int i, N=1, mark1, mark2, mark3, totalMarks;
	
		printf("How many students are in the module : ");
		scanf("%d", &N);
		
	for(i=1; i<=N ; i++){
	
		printf("\nEnter the marks of student %d (between 0-10)\n", i);
		
		printf("mark 1- ");
		scanf("%d", &mark1);
		
		printf("mark 2- ");
		scanf("%d", &mark2);
		
		printf("mark 3- ");
		scanf("%d", &mark3);
		
		totalMarks = mark1 + mark2 + mark3;
		printf("\nTotal marks - %d\n", totalMarks);
		
		printf("\n");
	}
	return 0;
	
}