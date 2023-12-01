#include <stdio.h>

int findBonusTimes(char emptCategory);
float findBonus(float salary , int noOfTimes);

int main(void){


	float salary;
	char category;
	
	printf("Enter salary: ");
	scanf("%f", &salary);
	
	printf("Enter employee number: ");
	scanf(" %c", &category);
	
	printf("Bonus: %.2f",findBonus(salary,findBonusTimes(category)) );
	
	//because we use void we dont have to use return o, void means returning zero
	return 0;
}


	int findBonusTimes(char emptCategory)
{
	switch(emptCategory){
		case 'A': 
	//  case 'a':
			return 1;
			break;
		
		case 'B':
			return 2;
			break;
			
		case 'C':
		case 'D':
		case 'E':
			return 3;
			break;
	}
}

float findBonus(float salary , int noOfTimes)
{
	/*float bonus;
	  bonus = salary * (float) noOfTimes;
	  return bonus;*/
	  
	//to take bonus out
	return salary * (float)noOfTimes;
}