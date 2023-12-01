#include <stdio.h>


float calcNewPrice(int percentage , float price);
float calDiscountPercent(int category);

int main(void){
	
	float price;
	int category;
	
	printf("Enter price: ");
	scanf("%f", &price);
	
	printf("Enter product code: ");
	scanf("%d", &category);
	
	printf("New Price: %.2f", calcNewPrice((int)calDiscountPercent(category), price));
                        
	return 0;
	                         
}

float calDiscountPercent(int category)
{

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
	}

}

float calcNewPrice(int percentage , float price){
	
	return	price - (price * (float)percentage / 100.00);
}                                               