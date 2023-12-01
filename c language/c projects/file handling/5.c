#include <stdio.h>

int main(){
	int noOfDosages;
	char name[50];
	char stdRegNo[50];
	int count1 = 0, count2 = 0;
	
	FILE * vcard;
	
	vcard = fopen("vcard.dat", "r");
	
	if (vcard == NULL){
		printf("Error!");
		return -1;
	}
		// 3 means the number of format specifiers
		
		while(fscanf(vcard, "%s %s %d",name, stdRegNo, &noOfDosages) == 3){
			
			if(noOfDosages == 1){
				count1++;
			}
			else if(noOfDosages == 2){
				count2++;
			}
		
		}
	
	fclose(vcard);
		
	printf("\nNO Of Students with 1 dosage: %d\n", count1);
	printf("NO Of Students with 2 dosages: %d", count2);
	
	
	return 0;
}