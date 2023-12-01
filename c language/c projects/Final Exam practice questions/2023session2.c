#include <stdio.h>
#include <assert.h>

float calcPayment(int age , float size);
float calcSubsidy(float payment);
void displayDetails(float payment , float subsidy);


int main(){
	
	assert (calcPayment(0, 1) == 2100);
	assert (calcPayment(2, 1) == 2040);
	
	int age, i;
	float size;
	float subsidy;
	float payment;
	
	for(i=1; i<=3 ; i++){
	
	printf("The age of the paddy crops in week(0, 2, 4, 6, 7): ");
	scanf("%d", &age);
	
	printf("The paddy field size in Hectare: ");
	scanf("%f", &size);
	
	calcPayment(age,size);
	
	payment = calcPayment(age, size) + calcSubsidy(payment);
	
	subsidy = calcSubsidy(payment);
	
	displayDetails(payment , subsidy);
	
	}
	
	return 0;
	
}

float calcPayment(int age , float size){
	switch (age){
		case 0: 
		return size * (0 * 68 + 35 * 60  + 0 * 75);
		break;
		
		case 2:
		return size * (30 * 68 + 0 * 60 + 0 * 75);
		break;
		
		case 4: 
		return size* (65 * 68 + 0 * 60 + 25 * 75);
		break;
		
		case 6: 
		return size * (50 * 68 + 0 * 60+ 25 * 75);
		break;
		
		case 7: 
		return size * (30 * 0 + 35 * 60 + 0 * 75);
		break;
		
		default: printf("\nInvalid!\n");
		break;
	}
	
}

float calcSubsidy(float payment){
	 return payment * 0.15;
}

void displayDetails(float payment , float subsidy){
	
	printf("\nPayable Amount\t\tSubsidy amount\n");
	printf("%.2f\t\t\t%.2f\n", payment - subsidy, subsidy);
	
	printf("\n");
}




