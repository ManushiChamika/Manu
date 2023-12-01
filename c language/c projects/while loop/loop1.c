#include <stdio.h>
int main(){

	int item, quantity;
	float unitPrice, totalPrice, total;
	
	while (item != -99){
		
		printf("Enter item: ");
		scanf("%d", &item);
		
		if(item == -99){
		break;
		}
		
		printf("Enter quantity: ");
		scanf("%d", &quantity);
		
		switch(item){
			case 1: unitPrice = 30;
					break;
			
			case 2: unitPrice = 45;
					break;
					
			case 3: unitPrice = 55.50;
					break;
					
			default : break;
		}
		totalPrice = unitPrice * quantity;
		total += totalPrice;
		
		printf("\n");
		
	}
	 printf("\nTotal price to pay Rs: %.2f\n", total);
	 
	
	return 0;
}