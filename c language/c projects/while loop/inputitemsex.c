#include <stdio.h>

int main(){
	
	int item, quantity;
	float unitPrice, price, total = 0.0;
	
	while (item >= 0){
		
		printf("Enter item(Enter -1 to stop): ");
		scanf("%d", &item);
		
			if (item == -1){
				break;
			}
		
		printf("Enter quantity: ");
		scanf("%d", &quantity);
		
			switch(item){
				case 1: unitPrice = 300.25;
						break;
						
				case 2: unitPrice = 145.50;
						
						break;
				
				case 3: unitPrice = 525.00;
						break;
			}
			price = unitPrice * quantity;
			total = total + price;
			printf("\n\n");
	}
	printf("\nTotal price to pay Rs: %.2f\n", total);
	
	return 0;
}