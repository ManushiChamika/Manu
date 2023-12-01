# include <stdio.h>

float circleArea( float radius);

int main(){
	
	float radius;
	
	printf("Enter the radius of circle: ");
	scanf("%f", &radius);
	
	float result = circleArea(radius);
	
	return 0;
	
}
	float circleArea( float radius)
	
	{
		float area;
		
		area = 22 / 7.0 * radius;
		printf("\nThe area of the circle is %.2f", area);
		
		return area;
		
	}
