#include <stdio.h>
#include <assert.h>

float calcPayment (int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment, float tax);

int main(){
	
	assert(calcPayment(1, 1.5) == 120);
	assert(calcPayment(2, 10) == 10590);
	
	int type, n = 1;
	float dataUsage;
	
	while(n <= 3){

	printf("package type: ");
	scanf("%d", &type);
	
	printf("Total data usage: ");
	scanf("%f", &dataUsage);
	
	float payment = calcPayment (type, dataUsage);
	float tax = calcTax(payment);
	
	displayDetails(payment, tax);
	
	printf("%.2f%16.2f%25.2f\n", payment, tax, tax + payment);
	
	printf("\n");
	n++;
	}
	
	return 0;
}

float calcPayment (int pType, float totalData){
	
	switch(pType){
		case 1: 
			return (totalData - 1.5) * 2 * 1024 + 120;
			break;
		
		case 2: 
			return (totalData - 5) * 2 * 1024 + 350;
			break;
			
		case 3: 
			return (totalData - 10) * 2 * 1024 + 660;
			break;
			
		case 4: 
			return (totalData - 20) * 2 * 1024 + 1200;
			break;
	}
}

float calcTax(float payment){
	return payment * 0.5;
}

void displayDetails(float payment, float tax){
	printf("\nPayment\t\tTax amount\t\tMonthly bill payment\n");
}



