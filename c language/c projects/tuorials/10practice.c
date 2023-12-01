#include <stdio.h>

int main(){
	
	FILE * number;
	
	int i;
	char typeOfAppoinment;
	char name[50];
	int count1 = 0, count2 = 0, count3 = 0;
	
	number = fopen("appoinment.dat", "w+");
	
	if(number == NULL){
		printf("File doesnt exist!");
		return -1;
	}
	
	for(i=0 ; i<5; i++){	
		printf("Enter patient's name of patient %d: ", i+1);
		scanf("%s", &name);
		
		printf("Enter type of appoinment of patient %d (C,S,T): ", i+1);
		scanf(" %c", &typeOfAppoinment);
		
		printf("\n");
		

		fprintf(number, "%s\t\t%c\n", name, typeOfAppoinment);
	}

	fclose(number);
	
	printf("Appoinment Type\t\tNumber of patients\n");
	
	number = fopen("appoinment.dat", "r");
	
	for(i=0; i<5; i++){
	
		fscanf(number , "%s %c" , name, &typeOfAppoinment );
		
		if(typeOfAppoinment =='C'){
			count1++;
		}
		else if(typeOfAppoinment == 'S'){
			count2++;
		}
		else if(typeOfAppoinment == 'T'){
			count3++;
		}
	}
	
	printf("Consulting\t\t%d\n", count1);
	printf("Scanning\t\t%d\n", count2);
	printf("Testing \t\t%d\n", count3);
	
	fclose(number);
	
	return 0;
}