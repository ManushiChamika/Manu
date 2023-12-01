#include <stdio.h>
#include<assert.h>

float calcAnnualInterest(float interestRate , float amount);
float findTotalAmount(float interestRate , float amount);

void testTotalAmount(){
	assert(findTotalAmount(10,10000) == 11000);
	assert(findTotalAmount(20,20000) == 24000);
}

int main(){
	
	float amount;
	int interestRate;
	int year;
	int years;
	
	
	printf("Enter initial amount: ");
	scanf("%f",&amount);
	
	printf("Enter Annual interest Rate(in percentage): ");
	scanf("%d",&interestRate);
	
	printf("Enter the no.of years for total amount has to be calculated: ");
	scanf("%d", &years);
	
	testTotalAmount();
	
	for(year = 1; year <= years; year++) {
        float totalAmount = findTotalAmount(interestRate, amount);
        printf("Total amount after year %d: %.2f\n", year, totalAmount);
        
        // Update the amount for the next year
        amount = totalAmount;
    }
	
	return 0;
}


float calcAnnualInterest(float interestRate , float amount){
	
	float interest;
	
	if (amount > 1000000) {
        interestRate += 0.5;
	}
	interest = amount * (interestRate)/100.00;
	
	return interest;
}

float findTotalAmount(float interestRate , float amount){
	
	float interest = calcAnnualInterest(interestRate, amount);
	
	return interest + amount;
}

	