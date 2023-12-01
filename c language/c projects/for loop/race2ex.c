#include <stdio.h>

int main(){
	int N, i, round1, round2;
	float averageScore;
	
	printf("Enter the number of players in the race: ");
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		
		printf("\nEnter the scores of player %d (between 0-7)\n", i);
		printf("Round 1- ");
		scanf("%d",&round1);

		printf("Round 2- ");
		scanf("%d",&round2);
		
		averageScore = (round1 + round2)/(float)N;
		printf("\nAverage score- %.1f", averageScore);
		
		printf("\n");
	}
		
	return 0;
	
}