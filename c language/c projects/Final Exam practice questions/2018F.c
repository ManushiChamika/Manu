#include <stdio.h>
#include <assert.h>

float calDiscount(int time, float totAmount);
void displayGift(float finalTot);

void testCalDiscount(){
	
    // Test case 1: Verify the discount calculation for time 17 and total amount 6000
	assert(calDiscount(17, 6000) == 600.0);

    // Test case 2: Verify the discount calculation for time 21 and total amount 3500
	assert (calDiscount(21, 3500) == 315.0);

}

int main(){
	
	int time;
	int totAmount;
	
	printf("Input time: ");
	scanf("%d", &time);
	
	if (time < 16 || time > 22){
		printf("Error!\n");
		return 1;
	}
	
	printf("Input total amount : ");
	scanf("%d", &totAmount);
	
	testCalDiscount();
	
	float discount = calDiscount(time, totAmount);
    float finalTot = totAmount - discount;
	
	printf("Final amount(after discount): %.2f\n", finalTot);
	
	displayGift(finalTot);
	
	return 0;
}


float calDiscount(int time, float totAmount){
	
	float discount = 0.0;
	
	if(time >= 16 && time <= 19 ){
		if(totAmount >= 5000){
			discount = totAmount * 0.1;
		}
		else if (totAmount < 5000 && totAmount >= 2500){
			discount = totAmount * 0.07;
		}
	}
	else if(time >= 20 && time <= 22){
		if(totAmount >= 5000){
			discount = totAmount * 0.12;
		}
		else if (totAmount < 5000 && totAmount >= 2500){
			discount = totAmount * 0.09;
		}
	}
	else {
		discount = 0.0;
	}
	
	return discount;
}

void displayGift(float finalTot){
	
	if(finalTot >= 7000){
		printf("Packet of Milk\n");
	}
	else if(finalTot >=5000 && finalTot <= 6999){
		printf("1kg of Sugar");
	}
	else if(finalTot >= 3000 && finalTot <= 4999){
		printf("Pack of 6 Eggs");
		
	}else{
		printf( "No gift" );
	}
	
}

