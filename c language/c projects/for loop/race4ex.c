#include <stdio.h>
int main(){
	int i, N, round1, round2, round3, round4;
	float average;
	
	printf("How many players are there in the race : ");
	scanf("%d", &N);
	
	for(i=1 ; i <= N ; i++){
	
	printf("\nEnter the scores of player %d (between 0-5\n ", i );
	
	printf("\nRound 1- ");
	scanf("%d", &round1);
	
	printf("Round 2- ");
	scanf("%d", &round2);
	
	printf("Round 3- ");
	scanf("%d", &round3);
	
	printf("Round 4- ");
	scanf("%d", &round4);
	
	average = (round1 + round2 + round3 + round4) / 4.0;
	printf("Average score- %.1f", average );
	
	printf("\n");
	
	}
	
	return 0;
}