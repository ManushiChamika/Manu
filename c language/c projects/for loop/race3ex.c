#include <stdio.h>
int main(){
	
	int i, N = 1, round1, round2, round3;
	float average;
	char answer;
	
	for(i=1 ; i <= N; i++){
	
	printf("\nEnter the scores of player %d (between 0-4) \n", N);
	
	printf("Round 1: ");
	scanf("%d",&round1);
			
	printf("Round 2: ");
	scanf("%d",&round2);
	
	printf("Round 3: ");
	scanf("%d", &round3);
	
	average = (round1 + round2 + round3 ) / 3.0;
	printf("\nAverage score: %.2f\n", average);
	
	printf("\nDo you want to enter the scores of another player(y or Y / n or N)?: ");
	scanf(" %c", &answer);
		
		if (answer == 'y' || answer == 'Y'){
			N++;
		}
		else {
			break;
		}
	}
	
	printf("\n");
	
return 0;	
}