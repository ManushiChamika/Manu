#include <stdio.h>
int main(){
	
	int type, units;
	float price, monthlyCharge, pricePerUnit, totalAmount, surcharge;
	
	printf("Enter type of customer: ");
	scanf("%d", &type);
	
	printf("Enter the number of electricity units used for a month: ");
	scanf("%d", &units);
	
	switch(type){
	
	case 1:	if(units <= 100 ){
				pricePerUnit = 10;
				totalAmount = units * pricePerUnit;	
			}else{
				pricePerUnit = 30;
				surcharge = 120/100.00;
				totalAmount = ((units - 100) * pricePerUnit + (100 * 10.00) ) * surcharge; 
			}
			break;
			
	case 2:	if(units <= 100 ){
				pricePerUnit = 10;
				totalAmount = units * pricePerUnit;	
			}else{
				pricePerUnit = 30;
				totalAmount = (units - 100) * pricePerUnit + 100 * 10.00; 
			}
			break;		
	}
	
	printf("The total amount is %.2f", totalAmount );
	
	return 0;

}
