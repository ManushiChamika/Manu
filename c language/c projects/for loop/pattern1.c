#include <stdio.h>

int main(){
	
	FILE * vcard;
	
	int count1 = 0, count2 = 0, noOfDosages;
	char IDNo[20], name[20];
	int i = 0;
	 
	vcard = fopen("vcard.dat", "r");
	
	if(vcard  == NULL){
		printf("Error");
		return -1;
	}
	
	fscanf(vcard, "%s %s %d", IDNo , name, &noOfDosages);
	
	while(fscanf(vcard, "%s %s %d", IDNo , name, &noOfDosages) == 3){
	
		if(noOfDosages == 1){
			count1++;
		}
		else if(noOfDosages == 2){
			count2++;
		}
		
	i++;
	}
	
	printf("Student with one dosage: %d\n", count1);
	printf("Students with two dosages: %d", count2);
	
	fclose(vcard);
	
	return 0;
}
   