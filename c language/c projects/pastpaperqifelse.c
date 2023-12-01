#include <stdio.h>

int main(){
	
	int typeOfRoom, noOfDays;
	char accomodationBasis, cardType;
	float amount, amountWithoutDiscount, newAmount,amountForFullBoard, amountForHalfBoard ;
	
	printf( "Enter the no of days: ");
	scanf("%d", &noOfDays );
	
	printf( "Enter the type of room(1, 2, 3): ");
	scanf("%d", &typeOfRoom );
	
	if( typeOfRoom == 1 ){
		
		printf("The selected room type is 1\n");
		amountForFullBoard = 25555.00;
		printf("Full Board per day = %.2f\n", amountForFullBoard);
		amountForHalfBoard = 17250.00;	
		printf("Half Board per day = %.2f\n", amountForHalfBoard);
		
	}else if(typeOfRoom == 2){
		printf("The selected room type is 2\n");
		amountForFullBoard = 17500.00;	
		printf("Full Board per day = %.2f\n", amountForFullBoard);
		amountForHalfBoard = 12250.00;
		printf("Half Board per day = %.2f\n", amountForHalfBoard);
		
    }else if( typeOfRoom == 3){
		printf("The selected room type is 3\n");
		amountForFullBoard = 9000.00;
		printf("Full Board per day = %.2f", amountForFullBoard);
		amountForHalfBoard = 7250.00;	
		printf("Half Board per day = %.2f", amountForHalfBoard);
		
	}else
		printf("Invalid Type of room");
		
		
		amountWithoutDiscount = amountForFullBoard * noOfDays;
		amountWithoutDiscount = amountForHalfBoard * noOfDays;
		
		
		const float discountForGold = 0.875, discountForSilver = 0.885, discountForBronze = 0.905;
		
		printf( "Enter the accomodation type( Full-F, Half board-H): " );
		getchar();
		scanf( "%c", &accomodationBasis );
		
		printf( "Enter the card type(Gold-G, Silver-S, Bronze-B): ");
		getchar();
		scanf( "%c", &cardType );
		
		if( cardType == 'G' && accomodationBasis == 'F'){
			
			amountWithoutDiscount = amountForFullBoard * noOfDays;
			newAmount = amountWithoutDiscount * discountForGold;
			
			printf("\nThe amount without any discount is %.2f\n",amountWithoutDiscount);
			printf("The amount with discount = %.2f\n", newAmount);	
		}
		else if ( cardType == 'G' && accomodationBasis == 'H'){
		
			amountWithoutDiscount = amountForFullBoard * noOfDays;
			newAmount = amountWithoutDiscount * discountForGold;
			
			printf("\nThe amount without any discount is %.2f\n",amountWithoutDiscount);
			printf("The amount with discount = %.2f\n", newAmount);	
		
		}
		else if( cardType == 'S' && accomodationBasis == 'F'){
			amountWithoutDiscount = amountForFullBoard * noOfDays;
			newAmount = amountWithoutDiscount * discountForSilver;
			
			printf("The amount without any discount is %.2f\n",amountWithoutDiscount);
			printf("The amount with discount = %.2f\n", newAmount);	
		}
		else if( cardType == 'S' && accomodationBasis == 'H'){
			amountWithoutDiscount = amountForFullBoard * noOfDays;
			newAmount = amountWithoutDiscount * discountForSilver;
			
			printf("The amount without any discount is %.2f\n",amountWithoutDiscount);
			printf("The amount with discount = %.2f\n", newAmount);	
			
		}
		else if ( cardType == 'B' && accomodationBasis == 'F' ){
			amountWithoutDiscount = amountForFullBoard * noOfDays;
			newAmount = amountWithoutDiscount * discountForBronze;
			
			printf("The amount without any discount is %.2f\n",amountWithoutDiscount);
			printf("The amount with discount = %.2f\n", newAmount);	
		}
		else if( cardType == 'B' && accomodationBasis == 'H'){
			amountWithoutDiscount = amountForFullBoard * noOfDays;
			newAmount = amountWithoutDiscount * discountForBronze;
			
			printf("The amount without any discount is %.2f\n",amountWithoutDiscount);
			printf("The amount with discount = %.2f\n", newAmount);	
		}
		else{
			printf("Invalid card type or/and accomodation basis");
		}
	
	return 0;			
}
