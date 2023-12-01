#include <stdio.h>
#include <assert.h>

float calclnterest (int FDType,float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest, float taxAmount);

int main(){
	
	assert(calclnterest(1,10000) == 1600);
	assert(calclnterest(2,20000) == 3000);
	
	int type;
	float fixedDeposit;
	
	while(1){

		printf("Fixed deposit type: ");
		scanf("%d", &type);
		
		if(type == -1){
			break;
		}
		
		printf("Deposit type: ");
		scanf("%f", &fixedDeposit);
	
	
	float interest = calclnterest((float)type, fixedDeposit);
	float taxAmount = calcTax(interest);
	
	calclnterest (type, fixedDeposit);
	calcTax(interest);
	
	displayDetails(interest, taxAmount);
	
	printf("%.2f\t\t\t%.2f\t\t\t%.2f\n", interest, taxAmount, interest - taxAmount );
	printf("\n");
	}
	return 0;
}
float calclnterest (int FDType,float depositAmount){
	
	switch(FDType){
		case 1:
			return depositAmount * 0.16;
			break;
	
		case 2:
			return depositAmount * 0.15;
			break;
			
		case 3:
			return depositAmount * 0.155;
			break;
		
		case 4:
			return depositAmount * 0.175;
			break;
			
		default:
			break;
	}
}

float calcTax(float annualInterest){
	
	return annualInterest * 0.5;
	
}

void displayDetails(float interest, float taxAmount){
	printf("\nAnnual Interest\t\tTax amount\t\tAmount Payable\n");
	
}




