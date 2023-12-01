#include <stdio.h>
#include <string.h>

int main(){
	
	FILE * filePtr;
	
	int i, found, telPhone;
	char name[20];
	char sName[20];
	
	filePtr = fopen("Directory.dat", "a");
	
	for(i=0; i<5; i++){
		printf("Input name: ");
		scanf("%s", name);
		
		printf("Input telephone number: ");
		scanf("%d", &telPhone);
		
		fprintf(filePtr, "%s\t%d\n", name, telPhone);
		
	}
	
	fclose(filePtr);
	
	filePtr = fopen("Directory.dat", "r");
	
	printf("\n");
	
	printf("Search name: ");
	scanf("%s", sName);
	
	while (fscanf(filePtr, "%s %d", name, &telPhone) == 2) {
        if (strcmp(sName, name) == 0) { // Compare using strcmp
            printf("Telephone number: %d\n", telPhone);
            found = 1;
            break; // Exit the loop once a match is found
        }
    }

    if (!found) {
        printf("No name found!\n");
    }

	fclose(filePtr);

	return 0;
}