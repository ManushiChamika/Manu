#include <stdio.h>

int main(){
	
	FILE * filePointer;
	
	char name[20];
	int employeeNum, attendence, i;
	
	filePointer = fopen("attendence.dat", "w+");
	
	for(i=1; i<=2; i++){
		printf("Employee number: ");
		scanf("%d", &employeeNum);
		
		printf("Name: ");
		scanf("%s", name);
		
		printf("Attendence state for 7 days(0-absent, 1-present): ");
		scanf("%d", &attendence);
		
		fprintf(filePointer, "%d\t%s\t%d\n", employeeNum, name, attendence);
		
		
		printf("\n");
		
		
		}
		
		
	fclose(filePointer);
		
	return 0;
}