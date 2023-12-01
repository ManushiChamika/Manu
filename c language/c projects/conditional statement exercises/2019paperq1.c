#include<stdio.h>
int main(){
	
	int pizzaType, noOfPizzas;
	char size, creditCard, loyalty, onlineOrder;
	float amount, finalDiscount, total, discount= 0.0;	
	
	while (pizzaType >= 0 ){
		
		printf("Enter pizza type(1-classic pizza, 2-signature pizza), Enter a negative value to stop taking the pizza type: ");
		scanf("%d", &pizzaType);
		
		if(pizzaType < 0){
			break;
		}
			
		printf("Enter size of piza(L/M): ");
		scanf(" %c", &size);
		
		printf("Input the no of pizzas: ");
		scanf("%d", &noOfPizzas);
		
		switch(size){
			case 'L':if(pizzaType == 1){
							amount += 1720;
					}else if(pizzaType == 2){
							amount +=975;
					}break;
						
			case 'M':if(pizzaType == 1){
							amount += 1820;
					}else if(pizzaType == 2){
							amount +=1000;				
					}break;
			
		}
		
		printf("\n\n");
} 
				
	printf("Are you paying by credit card(Y/N)?: ");
	scanf(" %c", &creditCard);

	printf("Are you a loyalty customer(Y/N)?: ");	
	scanf(" %c", &loyalty);

	printf("Is this an online order(Y/N)?: ");
	scanf(" %c", &onlineOrder);
	
	if(creditCard == 'Y')
        discount += amount * 0.2;
    else if(creditCard == 'N' && loyalty == 'Y')
        discount += amount * 0.15;
    else if(loyalty == 'N' && onlineOrder == 'Y')
        discount += amount * 0.05; 

	
	finalDiscount = discount * amount * noOfPizzas;
	total = amount - finalDiscount;
	
	printf("The total bill amount is %.2f\n",amount );
	printf("The discount is %.2f\n",finalDiscount );
	printf("The net amount is %.2f\n",total );
	
	return 0;
}
