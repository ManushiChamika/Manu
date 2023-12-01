#include <stdio.h>

int main(){
	
	int i, mark1, mark2, mark3, N=1, totalMarks;
	char answer;
	
	for (i=1; i<=N; i++){
	
	printf("Enter the marks of student %d (between 0-10)\n", N);
	
	printf("Mark 1 - ");
	scanf("%d", &mark1);
	
	printf("Mark 2 - ");
	scanf("%d", &mark2);
	
	printf("Mark 3 - ");
	scanf("%d", &mark3);
	
	totalMarks = mark1+ mark2+ mark3;
	printf("\nTotal marks - %d\n" , totalMarks);
	
	printf("\nDo you want to enter mark of another student(y or Y / n or N)? : ");
	scanf(" %c", &answer);
	
		if(answer == 'Y' || answer == 'y'){
			N++;
		}
		else{
			break;
		}
		printf("\n");
	}
	
	
	
}