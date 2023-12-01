#include <stdio.h>
int main(){
	
	int pizzaType, quantity;
	float pricePerPizza, discount, totalPrice;
	
	do{
		
		printf("Enter pizza type(1-vegetable, 2-chicken, 3-fish): ");
		scanf("%d", &pizzaType);
		
		if ( pizzaType < 0){
			break;
		}
		
		printf("Enter Quantity: ");
		scanf("%d", &quantity);
		
		if ( quantity > 3 ){
			
			switch(pizzaType){
					case 1: pricePerPizza = 1000 * quantity;
							discount = pricePerPizza * 0.1;
							totalPrice = pricePerPizza - discount;
							break;
					
					case 2: pricePerPizza = 1600 * quantity;
							discount = pricePerPizza * 0.12;
							totalPrice = pricePerPizza - discount;
							break;
							
					case 3: pricePerPizza = 1400 * quantity;
							discount = pricePerPizza * 0.15;
							totalPrice = pricePerPizza - discount;
							break;
			}
		}
		else {
			switch(pizzaType){
					case 1: pricePerPizza = 1000 * quantity;
							totalPrice = pricePerPizza;
							break;
					
					case 2: pricePerPizza = 1600 * quantity;
							totalPrice = pricePerPizza;
							break;
							
					case 3: pricePerPizza = 1400 * quantity;
							totalPrice = pricePerPizza;
							break;
			}
		}
		
		printf("Total price Rs: %.2f\n ", totalPrice);
		
		printf("\n");
	}while(pizzaType > 0);
	
	return 0;
}