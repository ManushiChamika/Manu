#include <stdio.h>
int main(){
	int type, noOfPizza;
	char size, onlineOrder, loyalty, creditCard;
	float amount = 0.00, cost, discount, netAmount;	
	
	while (type >= 0){
		printf("Input pizza type (1 or 2), Enter (-1) to stop: ");
		scanf("%d", &type);
		
		if (type == -1){
			printf("\nInvalid pizza type!\n");
			break;
		}
			
		printf("Input size of pizza(L or M): ");
		scanf(" %c", &size);
		
		printf("Input no of pizzas: ");
		scanf("%d", &noOfPizza);
		
		printf("\n");
		
		switch(type){
			case 1: if(size == 'L'){
						amount += 1720.00;
					}else if(size == 'M'){
						amount += 975.00;
					}
					amount = amount * noOfPizza;
				break;
				
			case 2: if(size == 'L'){
						amount += 1820.00;
					}else if(size == 'M'){
						amount += 1000.00;
					}
					amount = amount * noOfPizza;
				break;
		}
	}
	
	printf("\nAre you paying by credit card(Y/N)?: ");
	scanf(" %c", &creditCard);
	
	printf("Are you a loyalty customer(Y/N)?: ");
	scanf(" %c", &loyalty);
	
	printf("Is this an online order(Y/N)?: ");
	scanf(" %c", &onlineOrder);
	
	if( creditCard == 'Y'){
		discount = amount * 0.2;
	}else if(loyalty == 'Y' && onlineOrder == 'N'){
		discount = amount * 0.15;
	}else if(onlineOrder == 'Y' && loyalty == 'N'){
		discount == amount * 0.5;
	}
	
	printf("\nTotal bill is: %.2f\n", amount );
	printf("Discount is : %.2f\n", discount);
	printf("Net amount is: %.2f\n", amount - discount);
	
	return 0;
}
