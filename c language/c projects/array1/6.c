#include <stdio.h>

struct Book{
	
	char bookID[50];
	char title[40];
	int noOfCopies, noOfReaders;
	
};
	
int main(){
	
	struct Book Book[3];
	// Always initialize the variable to a value , because it contains garbage values
	int i, max = 0, j;
	
	for(i=0; i<3; i++){
		
		printf("Book %d\n",i+1);
		printf("Input the bookID: ");
		scanf("%s", Book[i].bookID);
	
		printf("Input the name of the book: ");
		scanf("%s", Book[i].title);
		
		printf("Input the no. of copies: ");
		scanf("%d", &Book[i].noOfCopies);
		
		printf("Input no.of readers: ");
		scanf("%d", &Book[i].noOfReaders);
		
		printf("\n");
	}
	for(i=0; i<3; i++){
		
		if(max < Book[i].noOfReaders){
			max = Book[i].noOfReaders;
			j = i+1;
		}
	}
	printf("Most popular book of the 3 is book %d",j);
	
	return 0;
}