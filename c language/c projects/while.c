//print numbers from 1 to N
#include <stdio.h>
int main()
{
	int num = 0, N;
	
	printf("Enter value for N: ");
	scanf("%d", &N);
	
	while(num<=N){
		printf("%d\n", num);
		++num;
	}
	return 0;
} 
