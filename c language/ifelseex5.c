#include <stdio.h>
int main(){

    int noOfYears, noOfUnitsSold;
    float commissionPerUnit, commission;

    printf("Enter the no of years: ");
    scanf("%d", &noOfYears);

    printf("Enter the no of units sold: ");
    scanf("%d", &noOfUnitsSold);

    if( noOfYears > 2 ){
        if(noOfUnitsSold > 100){
            commissionPerUnit = 3500;            
        }
        else if(noOfUnitsSold >= 30 && noOfUnitsSold <=100){
            commissionPerUnit = 2500;           
        }
        else{
            commissionPerUnit = 1000;
        }
    }
    else{
            commissionPerUnit = 0;
            
    }
    commission = commissionPerUnit * noOfUnitsSold;
    printf("The commission amount = Rs. %.2f", commission);

    return 0;
}