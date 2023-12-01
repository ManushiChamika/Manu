#include <stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main(){
	
	float salary;
	int grade;
	
	printf("Enter salary: ");
	scanf("%f", &salary);
	
	printf("Enter grade: ");
	scanf("%d,", &grade);
	
	float increment = calculateIncrement(grade, salary);
	float TotSalary = calcTotSalary(salary,increment);
	
	printf("Increment: %.2f\n", increment);
	printf("Total Salary: %.2f\n",TotSalary);
	
	return 0;
	
}

float calculateIncrement(int grade, float basicSalary){
	
	switch(grade){
		case 1: 
			return basicSalary * 0.1;
			break;
			
		case 2: 
			return basicSalary * 0.15;
			break;
			
		case 3:
			return basicSalary * 0.2;
			break;
		
		default : printf("Invalid\n");
		
	}	
}

float calcTotSalary(float salary, float increment){
	
	return salary + increment;
	
}

