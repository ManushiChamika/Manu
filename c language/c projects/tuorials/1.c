#include <stdio.h>

int main(){
	FILE * fptr;
	
	int num, ptr;
	
	fptr = fopen("number.dat.txt", "a+");
	
	if(ptr == NULL){
		printf("File cannot open\n");
		return -1;
	}
		printf("Enter number: ");
		scanf("%d", &num);
		                           
		fscanf(nfptr, "%d", &test);
		
		
	fclose(fptr);
	
	return 0;
}