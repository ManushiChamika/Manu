#include<stdio.h>
int main(void){

	int num1, num2, sum, average;
	
	printf("Enter first integer: ");
	scanf("%d",&num1);
	
	printf("Enter second integer: ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	average=sum/2;
	
	printf("The total is: %d\n",sum);
	printf("The average is: %d",average);
	
	return 0;
}