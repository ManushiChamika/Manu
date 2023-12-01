#include <stdio.h>
#include <string.h>

int main(){
	
	FILE * studentCount;
	
	char mostPopularSubject[50];
	char subjectName[10];
	int count, max = 0;
	
	studentCount = fopen("studentCount.dat", "r");
	
		if(studentCount == NULL){
			printf("The file doesnt exist");
			return -1;
		}
		
	printf("%20s %15s\n", "Subject Name", "Student Count");
	
	while(fscanf(studentCount, "%s %d", subjectName, &count) == 2){
		
		printf("%20s %15d\n", subjectName, count);
		
		if(max < count){
			max = count;
			strcpy(mostPopularSubject, subjectName);// copying the subject name to mostPopularSubject
		}
			
	}
	
	fclose(studentCount);
	
	printf("\n\nMost Popular book is: %s\n", mostPopularSubject);
	
	return 0;
}