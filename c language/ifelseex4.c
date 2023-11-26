#include <stdio.h>
int main(){

    int type, days;
    float rentalPricePerDay, rentalAmountPrice, fine;

    printf("Enter book type(computer related-1, others-2): ");
    scanf("%d", &type);

    printf("\nEnter the no of days the book is rented: ");
    scanf("%d", &days);
    
    if(days > 14){
        switch(type){
            case 1: rentalPricePerDay = 10;
                    fine = rentalPricePerDay * 1.1;
                    rentalAmountPrice = days * fine;
                    break;

            case 2: rentalPricePerDay = 8;
                    fine = rentalPricePerDay * 1.1;
                    rentalAmountPrice = days * fine;
                    break;
        }    
    }
    else{
        switch(type){
            case 1:rentalPricePerDay = 10;
                   rentalAmountPrice = rentalPricePerDay * days; 
                    break; 

            case 2:rentalPricePerDay = 8;
                   rentalAmountPrice = rentalPricePerDay * days; 
                   break;
            }
        
    }

    printf("\nThe rental price per day is Rs. %.2f\n", rentalPricePerDay );
    printf("\nThe rental amount price is Rs. %.2f\n", rentalAmountPrice);  
    
    return 0;
}