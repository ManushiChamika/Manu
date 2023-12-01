#include <stdio.h>
int main(){

	int pizzaType, quantity;
	float prizePerPizza, discount, pizzaPrice, price, totalPrice;

while (pizzaType != -1){

	printf("Input pizza type(1-Vegetables, 2-Chicken, 3-Fish): ");
	scanf("%d", &pizzaType);
	
	if(pizzaType == -1){
		break;
	}

	
	switch(pizzaType){
		case 1: prizePerPizza = 1000 ;
				discount = 0.1;
				break;
				
		case 2: prizePerPizza = 1600;
				discount = 0.12;				
				break;
				
		case 3: prizePerPizza = 1400;
				discount = 0.15;				
				break;
				
	}
		
	printf("Enter Quantity: ");
	scanf("%d", &quantity);
	
	if ( quantity > 3){
		pizzaPrice = prizePerPizza * quantity;
		price = pizzaPrice * discount;
		totalPrice = pizzaPrice - price; 
	}
	else{	
	totalPrice = prizePerPizza * quantity; 
	}
	
	printf("\nTotal price Rs: %.2f\n", totalPrice);
	printf("\n");
	
	
}
	
	return 0;
}