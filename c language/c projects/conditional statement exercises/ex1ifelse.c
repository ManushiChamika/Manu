#include <stdio.h>
int main(){
	
	int customerType, electricityUnits;
	float price, surcharge, monthlyCharge;
	
	printf("Enter the type of customer(1- Domestic customer and 2- Samurdhi customer): ");
	scanf("%d", &customerType);
	
	switch(customerType){
		case 1: printf("Enter the number of electricity units used for a month: ");
				scanf("%d", &electricityUnits);
				
				if(electricityUnits <= 100 ){
					price = 10;
					printf("The price for first hundred units is Rs. %.2f\n", price);
				}else{
					surcharge = 1.2;
					price = 30 * surcharge;
					printf("The price for above hundred units is Rs. %.2f\n", price);
					electricityUnits = 100 - electricityUnits;
				}
				break;
		
		case 2: printf("Enter the number of electricity units used for a month: ");
				scanf("%d", &electricityUnits);
				
				if(electricityUnits <= 100 ){
					price = 10;
					printf("The price for first hundred units is Rs. %.2f\n", price);
				}else{
					price = 30;
					printf("The price for above hundred units is Rs. %.2f\n", price);
				}
				break;
				
	}

	monthlyCharge = price * electricityUnits;
	printf("The monthly charge is %.2f\n", monthlyCharge);
	
	
	return 0;
}
