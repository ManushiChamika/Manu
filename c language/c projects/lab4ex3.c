#include <stdio.h>
int main()
{
	int noOfPeople, totalCost, packageType, costperperson_horse = 2000, costperperson_scuba = 5000, costperperson_water =  7000;
	
	printf("Enter the package number: ");
	scanf("%d", &packageType);
	
	switch(packageType)
	{
		case 3: printf("The title is Horse ride\n");
				printf("%d is the cost per person for a horse ride\n", costperperson_horse);
				printf("Enter the no of people: ");
				scanf("%d", &noOfPeople);
				totalCost = noOfPeople * costperperson_horse;
				
				printf("The total cost is %d\n", totalCost);
				break;
				
		case 2: printf("\nThe title is Scuba Diving\n");
				printf("%d is the cost per person for a Scuba dive\n", costperperson_scuba);
				printf("Enter the no of people: ");
				scanf("%d", &noOfPeople);
				totalCost = noOfPeople * costperperson_scuba;
				
				printf("The total cost is %d\n", totalCost);
				break;
				
		case 1: printf("\nThe title is water rafting\n");
				printf("%d is the cost per person for a water raft\n", costperperson_water);
				printf("Enter the no of people: ");
				scanf("%d", &noOfPeople);
				totalCost = noOfPeople * costperperson_water;
				
				printf("The total cost is %d\n", totalCost);
				break;
				
	}
	
	return 0;
}
