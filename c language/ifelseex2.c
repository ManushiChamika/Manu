#include <stdio.h>
int main(){
    int type;
    float billAmount, discount, discountAmount, finalAmount;

    printf("Enter the type of customer(1-loyalty customer, 2-on-locally customer): ");
    scanf("%d", &type);

    printf("Enter bill amount:Rs. ");
    getchar();
    scanf("%f", &billAmount);

    switch(type){
        case 1: if(billAmount <= 2500){
                    discount = 5/100.00;
                
                }else{
                    discount = 10/100.00;
                }break;

        case 2: if(billAmount > 5000){
                    discount = 10/100.00;
                }break;
    }

    discountAmount = billAmount * discount;
    printf("The discount amount = Rs. %.2f\n", discountAmount);
    finalAmount = billAmount - discountAmount;
    printf("The final bill amount = Rs. %.2f\n", finalAmount);

    return 0;
}