#include<stdio.h>
int main()
{
	int radius, diameter;
	float circumference, area;
	
	printf("Enter the radius:");
	scanf("%d",&radius);
	printf("%d is the radius of the circle\n",radius);
	
	diameter = 2 * radius;
	printf("%d is the diameter of the circle\n", diameter);
	
	circumference = 2 *22/7.0 * 3; 
	printf("%.2f is the circumference of the circle\n", circumference);
	
	area = 22/7.0 * radius * radius;
	printf("%.2f is the area of the circle\n", area);
	
	return 0;
		
}

