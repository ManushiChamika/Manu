#include <stdio.h>

int main(){
	
	FILE * filePtr;
	
	int order, number = 0;
	int transactionID = 100;
	char typeOfPizza, size;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
	
	filePtr = fopen("outletOrders.dat", "a");
	
	while(1){
		
		printf("Input order number(enter -99 to end): ");
		scanf("%d", &order);
		
		if(order == -99){
			break;
		}
	
		printf("Enter type of pizza(V-Veggie/C-Chicken/S-Seafood): ");
		scanf(" %c", &typeOfPizza);
		
		printf("Enter size(R-Regular/L-Large): ");
		scanf(" %c", &size);
		
		printf("Enter no.of pizzas: ");
		scanf("%d", &number);
		
		fprintf(filePtr, "%d\t%c\t%c\t%d\n", transactionID, typeOfPizza, size, number);
		

		transactionID = transactionID + 1;
		
		printf("\n");
	}
	
	fclose(filePtr);
	
	filePtr = fopen("outletOrders.dat", "r");
	
	while(fscanf(filePtr, "%d %c %c %d" , &transactionID, &typeOfPizza, &size, &number) == 4){
		if(typeOfPizza == 'V' && size == 'R'){
			count1 += number;
		}
		else if(typeOfPizza == 'V' && size == 'L' ){
			count2 += number;
		}
		else if(typeOfPizza == 'C' && size == 'R' ){
			count3 += number;
		}
		else if(typeOfPizza == 'C' && size == 'L' ){
			count4 += number;
		}
		else if(typeOfPizza == 'S' && size == 'R' ){
			count5 += number;
		}
		else if(typeOfPizza == 'S' && size == 'L' ){
			count6 += number;
		}
	}
	
	fclose(filePtr);
	
	printf("Veggie Pizza\n");
	printf("\tRegular - %d\n", count1);
	printf("\tLarge - %d\n", count2);
	
	printf("Chicken Pizza\n");
	printf("\tRegular - %d\n", count3);
	printf("\tLarge - %d\n", count4);
	
	printf("Seafood Pizza\n");
	printf("\tRegular - %d\n", count5);
	printf("\tLarge - %d\n", count6);

	return 0;
}