#include <stdio.h>
#include <assert.h>

float calcInterest(int FDType, float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest , float taxAmount);

int main(){
	
	assert(calcInterest(1,1000) == 160);
	assert(calcInterest(3,4000) == 620);
	
	int fixedDepositType;
	float depositAmount;
	
	while(fixedDepositType != -1){
	
		printf("Fixed deposit Type: ");
		scanf("%d",&fixedDepositType);
		
		if(fixedDepositType == -1){
			break;
		}
		printf("Deposit Amount: ");
		scanf("%f",&depositAmount);
		
		float annualInterest = calcInterest(fixedDepositType,depositAmount );
		
		float taxAmount = calcTax(annualInterest);
		
		displayDetails(annualInterest ,taxAmount);
		
		printf("%.2f\t\t\t%.2f%\t\t\t%.2f\n", annualInterest, annualInterest- taxAmount, taxAmount );
		
		printf("\n");
	}
	
	return 0;
	
}

float calcInterest(int FDType, float depositAmount){
	
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
			
		default : printf("Invalid!\n");
			break;
	}
	
}

float calcTax(float annualInterest){
	
	float tax = annualInterest * 0.05;
	return annualInterest - tax;
	
}
void displayDetails(float annualInterest , float taxAmount){
	
	printf("Annual Interest\t\tTax Amount\t\tAmount Payable\n");
	
}

