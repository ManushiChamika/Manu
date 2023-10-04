#include <stdio.h>
//function main begins program execution
int main(){

    int months;
    float basicSalary, bonus;

    //user input number of months
    printf("Enter the number of months: ");//prompt
    scanf("%d", &months);//read an integer

    //user input basic salary
    printf("Enter the basic salary: ");//prompt
    scanf("%f", &basicSalary);//read a float
    printf("The basic salary is: Rs. %.2f\n", basicSalary);//print basic salary

    if(months < 6){
        bonus = 0;
    }else{
        if(months == 12 && basicSalary <= 45000){
            bonus = 2 * basicSalary;
        }//end if
        else{
            bonus = months * basicSalary;
        }//end else
    }
    printf("The bonus is: Rs. %.2f", bonus);//print bonus

    return 0;

}//end of function main