#include <stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(){
	
	int noOfGuests;
	float chargePerGuest;
	
	printf("Enter no of guests: ");
	scanf("%d",&noOfGuests);
	
	printf("Enter charge per guest: ");
	scanf("%f", &chargePerGuest);
	
	printf("Discount: %.2f\n",  getDiscountPrice(noOfGuests, chargePerGuest) );
	
	printf("Amount to be paid: %.2f\n",getAmount(noOfGuests, chargePerGuest, getDiscountPrice(noOfGuests, chargePerGuest) ) );
	
	return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest){
	
	if(noOfGuests > 200){
		return (float)noOfGuests * chargePerGuest * 0.1;
	}
	else{
		return 0;
	}
	
}

float getAmount(int noOfGuests, float chargePerGuest, float discount){
	return ((float)noOfGuests * chargePerGuest) - discount;
}