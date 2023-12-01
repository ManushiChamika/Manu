//#include<stdio.h>
//int main(){
//	int x=2, y=3;
//	float z=45.567;
//	
//	printf("*\n**\n***\n****\n*****\n");
//	printf("%d\n",x+x);
//	printf("x=\n");
//	printf("x=%d\n",x);
//	printf("%d=%d\n",x+y,y+x);
//	/*printf("%d,x+y\n");*/
//	printf("\n");
//	printf("value is %.2f\n",z);
//	
//	return 0;
//}

#include<stdio.h>
int main(){

	int num1, num2, sum;
	
	printf("Enter first integer: ");
	scanf("%d",num1);
	
	printf("Enter second integer: ");
	scanf("%d",num2);
	
	sum=num1+num2;
	
	printf("The total is:",sum);
	
	
	return 0;
	
	
}
