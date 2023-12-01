#include <stdio.h>

int main(){
	
	int i = 1;
	
	while(i<=2){
	
	FILE * filePtr;
	
	int ID, flag = 0, IDNo;
	char name[20], emplName[20];
	char NIC[20], NICNo[20];
	
	filePtr = fopen("employee.dat", "r");
	
	printf("Input customer ID: ");
	scanf("%d", &ID);
	
	printf("Employee name: ");
	scanf("%s", name);
	
	printf("NIC: ");
	scanf("%s", NIC);
	
	printf("\n");
	
	while(fscanf(filePtr, "%d %s %s", &IDNo, emplName, NICNo) == 3){
			if (ID == IDNo){
				flag = 1;
				break;
			}
	}
	
	fclose(filePtr);
	
	filePtr = fopen("employee.dat", "a+");
	
		if(flag == 0){
			fprintf(filePtr, "\n%d %s %s", ID, name, NIC);
			printf("The file is added to the file\n");
		}
		else if(flag == 1){
			printf("The file already exists\n");
		}
	

	fclose(filePtr);
	i++;
	printf("\n");
	}
	return 0;
}