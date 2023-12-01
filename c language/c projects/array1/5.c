#include <stdio.h>
	
	struct Employee{
		
		char employeeID[20], name[20];
		int experience;
		float salary;
		
	};
	
int main(){	

		struct Employee Employee[3] ;
		int i ;
		float increment = 0 ;
	
	for(i=0; i<3; i++){
		printf("Employee %d\n", i+1);
		printf("Employee ID- ");
		scanf(" %s", Employee[i].employeeID);
		
		printf("Name- ");
		scanf(" %s", Employee[i].name);
		
		printf("Experience(in years)- ");
		scanf("%d", &Employee[i].experience);
		
		printf("Salary- ");
		scanf("%f", &Employee[i].salary);
		
		printf("\n");
		
	}
	printf("\nEmployee ID\t\tName\t\tIncrement\n");
	
	for(i=0; i<3; i++){
		
		if (Employee[i].experience > 2){
			Employee[i].salary = (float)Employee[i].experience * Employee[i].salary;
			increment = Employee[i].salary * 0.1;
			printf("%s\t\t\t%s\t\t%.2f\n",Employee[i].employeeID, Employee[i].name, increment);
		}
		else{
			printf("%s\t\t\t%s\t\tNull\n",Employee[i].employeeID, Employee[i].name);
		}
			
	}
	
	
	return 0;
}