#include <stdio.h>

float calcPayment(int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment , float tax);

int main(){
	
	int packageType, i;
	float dataUsage;
	float payment;
	float tax;
	
	for(i=1; i<=3; i++){
		printf("Package type: ");
		scanf("%d", &packageType);
		
		printf("Total data usage: ");
		scanf("%f", &dataUsage);
	
	
	payment = calcPayment(packageType, dataUsage);
	tax = calcTax(payment);
	
	displayDetails(payment, tax);
	
	}
	
	printf("\n");
	
	return 0;
}

float calcPayment(int pType, float totalData){
	
	switch(pType){
		case 1:
				return (((totalData - 1.5)* 2 * 1024.00)  + (120));
				break;
		
		case 2: 
				return (((totalData - 5)* 1.5 * 1024.00)  + (350));
				break;
				
		case 3: 
				return (((10 - 1.5)* 1 * 1024.00)  + (660));
				break;
				
		case 4:
				return (((totalData - 20)* 0.5 * 1024.00)  + (1200));
				break;
		
		default: printf("Invalid!");
				 return 0;
				 break;
	}	

}

float calcTax(float payment){
	
	return  payment * 0.05;
	
}

void displayDetails(float payment , float tax){
	
	printf("\nPayment\t\t\tTax Amount\t\tMonthly bill payment\n");
	printf("%.2f\t\t\t%.2f\t\t\t%.2f\n",payment, tax, payment + tax);
	printf("\n\n");
}






