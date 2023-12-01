/*Write a program in C to create and store information in a text file.
Test Data :
Input a sentence for the file : This is the content of the file test.txt.
Expected Output :

 The file test.txt created successfully...!! */
 
 #include <stdio.h>
 
 int main(){
 	
 	FILE * fptr;
 	
 	fptr = fopen("test.txt", "r");
 	
 	if(FILE == NULL){
 		printf("File does not exist\n");
 		return -1;
	 }
 	
 }