#include <stdio.h>

int main(){
	
	FILE * filePtr;
	
	int i = 1, number;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
	char movieType, ticketType;
	
	filePtr = fopen("purchase.dat", "w+");
	
	while(i <= 5){
		
		printf("Input the movie(H/F/S): ");
		scanf(" %c", &movieType);
		
		printf("Input ticket type(B/N): ");
		scanf(" %c", &ticketType);
	
		printf("Input the number of tickets: ");
		scanf("%d",&number);
		
		fprintf(filePtr, "%c\t%c\t%d\n", movieType, ticketType, number);
		
		printf("\n");
		
		i++;
	}	
	fclose(filePtr);
	
	filePtr = fopen("purchase.dat", "r");
	
	while(fscanf(filePtr, "%c\t%c\t%d\n", &movieType, &ticketType, &number) == 3){
	
		if(movieType == 'H' && ticketType == 'B'){
			count1 += number;
		}
		else if(movieType == 'H' && ticketType == 'N'){
			count2 += number;
		}
		else if(movieType == 'F' && ticketType == 'B'){
			count3 += number;
		}
		else if(movieType == 'F' && ticketType == 'N'){
			count4 += number;
		}
		else if(movieType == 'S' && ticketType == 'B'){
			count5 += number;
		}
		else if(movieType == 'S' && ticketType == 'N'){
			count6 += number;
		}
	
	}
	fclose(filePtr);
	
	printf("Harry point\n");
	printf("\tBalcony - %d\n", count1);
	printf("\tNormal - %d\n", count2);
	
	printf("Frozen-II\n");
	printf("\tBalcony - %d\n", count3);
	printf("\tNormal - %d\n", count4);
	
	printf("Sherlock Homes\n");
	printf("\tBalcony - %d\n", count5);
	printf("\tNormal - %d\n", count6);
	
	return 0;
}