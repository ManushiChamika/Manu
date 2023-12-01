#include <stdio.h>

int main(){
	
	FILE * number;
	
	int num, test;

//--------------------------------------------------------------------	
	number = fopen("number.dat", "a+");
	
	if(number == NULL){
		printf("file does not exist");
		return -1;
	}
	
		printf("Enter number: ");
		scanf("%d", &num);
	
	/*The code reads the first number from the file using fscanf 
	and stores it in the variable test.*/
	fscanf(number, "%d", &test);
	
	//checks if entered number already exists
	while(!feof(number)){
		if(test == num){
			printf("The number already exists in number.dat\n");
			return -1;
		}
		else{
			fscanf(number, "%d", &test);
		}
	}
	//adding the number to the file
	/*If the entered number is not found in the file, it
	 means the number is unique. In this case, it appends 
	 the entered number to the end of the file using fprintf.*/
	fprintf( number,"%d\t", num);
	fclose(number);                                      
//--------------------------------------------------------------------
	/*After adding the number to the file, the code reopens
	 the file in read-only mode ("r").It reads and displays 
	 all the numbers stored in the file using a while loop. 
	 This loop also checks for the end of the file with feof.*/
	 
	number = fopen("number.dat","r");      
	         
	/*fscanf(number, "%d", &num);: This line uses fscanf to read
	 the first integer from the file pointed to by number and 
	 store it in the variable num. It reads an integer from the 
	 file according to the specified format ("%d") and stores it 
	 in num.*/
	fscanf(number, "%d", &num);
	
	/*while (!feof(number)) {: This is the beginning of a while 
	loop that checks whether the end of the file (EOF) has been 
	reached. feof is a function that returns true when the end of
	 the file has been reached, but it doesn't return true until 
	 after an attempted read past the end of the file. So, it's 
	 used to control the loop. If the end of the file has been 
	 reached, the loop exits.*/
	while(!feof(number))
	{
		printf("%d\t", num);//prints to console
		/*fscanf(number, "%d", &num);: After printing the value,
		 this line reads the next integer from the file using fscanf 
		 and stores it in num. This prepares num for the next 
		 iteration of the loop.*/
		fscanf(number, "%d", &num);
	}
	
	fclose(number);	
//----------------------------------------------------------------	
	return 0;
}