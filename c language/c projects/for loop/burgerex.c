#include <stdio.h>

int main(){
	int i, burgerType, quantity;
	float pricePerBurger, totalPrice;
	
	while (burgerType >= 0){
		
	printf("Input burger type(1-regular, 2-Cheese Burger, 3-Double Layer): ");
	scanf("%d", &burgerType);
	
	if(burgerType == -1){
		break;
	}
	
	printf("Enter quantity: ");
	scanf("%d", &quantity);
	
	pricePerBurger = 500;
	
	switch(burgerType){
		case 1: totalPrice = pricePerBurger * quantity;
				break;
				
		case 2: totalPrice = (pricePerBurger + 50) * quantity;
				break;
		
		case 3: totalPrice = (pricePerBurger + 100 )* quantity;
				break;
	}
	
	printf("\nTotal price: %.2f\n",totalPrice );
	
	printf("\n");
	
	}
	
	return 0;
}