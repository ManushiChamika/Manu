#include<stdio.h>
int main()
{
	int no1, no2, no3, no4, no5;
	
	printf("Enter number 1: ");
	scanf("%d", &no1);
	
	printf("Enter number 2: ");
	scanf("%d", &no2);
	
	printf("Enter number 3: ");
	scanf("%d", &no3);
	
	printf("Enter number 4: ");
	scanf("%d", &no4);
	
	printf("Enter number 5: ");
	scanf("%d", &no5);
	
	printf("The numbers are: %d%d%d%d%d\n", no1, no2, no3, no4, no5);
	printf("The numbers printed seperated from one another: %d%2d%2d%2d%2d", no1, no2, no3, no4, no5);
	
	return 0;
	
}
