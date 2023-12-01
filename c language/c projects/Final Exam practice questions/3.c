#include <stdio.h>

float findincreasePercent(int category);
float findNewPrice(int percentage , float price);

int main(void){
	
	float price;
	int category;
	
	printf("Enter price: ");
	scanf("%f", &price);
	
	printf("Enter product code: ");
	scanf("%d", &category);
	
	printf("New price: %.2f ", findNewPrice(findincreasePercent(category), price ));
	
	return 0;
}

float findincreasePercent(int category){
	switch(category){
		case 1:
			return 10;
			break;
			
		case 2:
			return 15;
			break;
			
		case 3:
			return 20;
			break;
			
		default :printf("\nInvalid\n");
			break;
	}
}

float findNewPrice(int percentage , float price){
	
	return price + (price* (float)percentage/100.00);
	
}