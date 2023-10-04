// not my method
#include<stdio.h>
int main(void)
{
	int unit,type,a;
	float charge;
	
	printf("Domestic customer -----> no: 1\n");
	printf("Samurdhi customer -----> no: 2\n");
	
	printf("\nCustomer type is : ");
	scanf("%d", &type);
	
	switch(type)
	{
		case 1:
			{
				printf("Enter number of units : ");
				scanf("%d", &unit);
				
				if(unit >= 0 && unit <= 100)
				{
					charge = unit * 10.00;
					printf("Electricity bill monthly charge : Rs.%.2f", charge);
					break;
				}
				else if(unit > 100 )
				{
					a = unit - 100;
					charge = (100 * 10.00) + (a * 30.00);
					charge += (charge * 20) / 100.0;
					printf("Electricity bill monthly charge : Rs.%.2f", charge);
					break;
				}
				else
				{
					printf("Invalid enter");
					break;
				}
			}
		case 2:
			{
				printf("Enter number of units : ");
				scanf("%d", &unit);
				
				if(unit >= 0 && unit <= 100)
				{
					charge = unit * 10.00;
					printf("Electricity bill monthly charge : Rs.%.2f", charge);
					break;
				}
				else if(unit > 100 )
				{
					a = unit - 100;
					charge = (100 * 10.00) + (a * 30.00);
					printf("Electricity bill monthly charge : Rs.%.2f", charge);
					break;
				}
				else
				{
					printf("Invalid enter");
					break;
				}
			}
		default:
			printf("Invalid enter");
	}
}
