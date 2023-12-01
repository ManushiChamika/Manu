#include <stdio.h>

int main(){
	int j, N, num, score1, score2, score3, totalScore = 0 , max = 0 ;
	
	printf("Input number of players: ");
	scanf("%d", &N);
	
	while(num < N){
		
		printf("\n\nInput player number:");
		scanf("%d", &num);
		
		printf("Input score 1: ");
		scanf("%d", &score1);
		
		printf("Input score 2: ");
		scanf("%d", &score2);
		
		printf("Input score 3: ");
		scanf("%d", &score3);
		
		totalScore = score1 + score2 + score3;
		printf("\nTotal score: %d\n", totalScore );
		
		if ( max < totalScore ){
			max = totalScore;
			j = num;	
		}
		totalScore = 0;
		
		printf("\n");
	}
	printf("\nThe winner is player number : %d", j);
	
	
	return 0;
}