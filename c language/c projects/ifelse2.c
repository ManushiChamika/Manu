//Write a C program to find maximum between three numbers using nested if-else.
#include <stdio.h>

int main()
{
	float num1, num2, num3;
	
	printf("Enter first number: ");
	scanf("%f", &num1);
			
	printf("Enter second number: ");
	scanf("%f", &num2);
	
	printf("Enter third number: ");
	scanf("%f", &num3);
	
	if ( num1 > num2 && num1 > num3 ){
		printf("%.2f number is the maximum of the three numbers", num1);	
	}
	else if( num2 > num1 && num2 > num3){
		printf("%.2f number is the maximum of the three numbers", num2);
	}
	else if( num3 > num1 && num3 > num2){
		printf("%.2f number is the maximum of the three numbers", num3);
	}
	else if( num1 == num2 && num1 > num3){
		printf("%.2f number is the maximum of the three numbers", num1);
	}
	else if( num2 == num3 && num2 > num1){
		printf("%.2f number is the maximum of the three numbers", num2);
	}	
	else if( num1 == num3 && num1 > num2){
		printf("%.2f number is the maximum of the three numbers", num1);
	}
	else {
		printf("All are equal");
	}
	
	return 0;
}
