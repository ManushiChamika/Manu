#include <stdio.h>

int main(){
	
	int N, j=1;
	
	printf("Input Number : ");
	scanf("%d", &N);
	
	do{
			printf("Invalid Number.\n");
			printf("Input Number : ");
			scanf("%d", &N);
		
	}while (N < 0);

			while(j<=12){
				printf("%d x %d = %d\n", N , j, N*j);
				j++;
			}
		
	return 0;
}

//------------------------------answer given----------------------------------
//#include <stdio.h>
//
//int main (void)
//{
//	int num,i;
//	
//	printf("Enter Number : ");
//	scanf("%d", &num);
//	
//	while(num<0)
//	{
//		printf("Invalid Number. \nEnter Number : ");
//		scanf("%d", &num);
//	}
//	
//	for(i=1; i<=12; i++)
//	{
//		printf("%d * %d = %d\n", num, i, num*i);
//	}
//	
//	
//	
//	return 0;
//}