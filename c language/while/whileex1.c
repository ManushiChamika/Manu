//Write a C program to find the sum of all natural numbers between 1 and 5 using a while loop.
#include <stdio.h>
int main(){
	int num = 1, sum = 0;

	while (num <= 5)
	{
		sum = num + sum;
		++num;
	}
		printf("%d", sum);

	return 0;
}