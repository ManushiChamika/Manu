#include <stdio.h>

int main(){
	int num, N=1, i, sum;
	float average;
	
	for(i=1; i<=5; i++){
	
	printf("Input the mark number %d: ",N );
	scanf("%d", &num);
	
	if(num >= 0 && num <= 100){
		N++;
	}
	else {
		printf("Invalid input!!\n");
		printf("Input the mark number %d: ", N);
		scanf("%d", &num);
		N++;
	}
	sum += num;
	average = sum / 5.0;
	
	}
	printf("\nAverage of the 5 marks is: %.2f\n", average);
	
}