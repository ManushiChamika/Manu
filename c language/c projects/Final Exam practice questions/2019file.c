#include <stdio.h>
int main(){
	
	int i=1;
	int loyaltyNumber, loNo, flag;
	char name[20];
	char newName[20];
	
	while (i<6){
		FILE * filePointer;
		
		filePointer = fopen("loyalty.dat", "a+");
		
		if(filePointer == NULL){
			printf("The file does not exist\n");
			return -1;
		}
		
	
		printf("Input name: ");
		scanf("%s", name);
		
		printf("Input loyalty number: ");
		scanf("%d", &loyaltyNumber);
		
		while(fscanf(filePointer, "%d%s", &loNo, newName) == 2){
			if(loyaltyNumber == loNo){
				flag = 1;
				printf("The loyalty number already exists.\n");	
				break;
			}
			else {
				flag = 0;
			}
		}
		
		
		if(flag == 0){
			fprintf(filePointer, "\n%d %s",loyaltyNumber, name );
			printf("The loyalty number is added\n");
		}
		
		printf("\n");
		i++;	
	
		fclose(filePointer);
	}
	return 0;
}