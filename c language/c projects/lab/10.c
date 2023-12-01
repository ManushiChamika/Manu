/*Following is a sample C program,
 To input five integer numbers from the keyboard
 Write them to a text file called numbers.txt
 Read the written numbers from the text file and display them
i) Type the given C program in Dev C++.
ii) Compile and run the C program*/

#include <stdio.h>

int main(){
	
	FILE * numbers;
	
	int i, num;
	
	numbers = fopen("numbers.txt", "w");
	
	for(i=0; i<5; i++){
		printf("Input number %d: ", i+1);
		scanf("%d", &num);
		fprintf(numbers, "%d ", num);
	}
	fclose(numbers);
	
	numbers = fopen("numbers.txt", "r");

	fscanf(numbers, "%d ", &num);
	
	while(!feof(numbers))
	{
		printf("%d\t", num); 
		fscanf(numbers, "%d", &num); 
	}
	
	fclose(numbers);
	
	return 0;
}