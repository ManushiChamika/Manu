#include <stdio.h>

int main(){
	
	int i, N = 1, round1, round2, round3, round4, round5;
	char answer;
	float average;
	
	for(i=1 ; i<= N ; i++){
	
	printf("Enter the scores of player %d (between 0-8)", N);
	
	printf("\nRound  1- ");
	scanf("%d", &round1);
	
	printf("Round  2- ");
	scanf("%d", &round2);
	
	printf("Round  3- ");
	scanf("%d", &round3);
	
	printf("Round  4- ");
	scanf("%d", &round4);
	
	printf("Round  5- ");
	scanf("%d", &round5);
	
	average = (round1 + round2 + round3 + round4 + round5)/ 5.0;
	printf("\nAverage score- %.2f\n", average);
	
	printf("\nDo you want to enter the scores of another player(y or Y / n or N)?: ");
	scanf(" %c", &answer);
	
		if ( answer == 'Y' || answer == 'y'){
			N++;
		}
		else{
			break;
		}
		printf("\n");
	}
	return 0;
}