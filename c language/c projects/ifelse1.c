//Write a C program to find maximum between two numbers

#include <stdio.h>

int main(){
	
	float num_1, num_2;
	
	printf( "Enter number 1: " ); // prompt
	scanf( "%f", &num_1 ); // Read number 1
	
	printf( "Enter number 2: " ); // prompt
	scanf( "%f", &num_2 ); // read number 2
	
	// display output 
	if( num_1 > num_2 ){
		printf("%.2f is the maximum of the two numbers", num_1);
	} // End if
	else{
		printf("%.2f is the maximum of the two numbers", num_2);
    } // End else
	
	return 0;
	
} // end function main
