#include <stdio.h>
int main(){
	int score , round, total, player = 1;
	char answer;
	float averageScore;
	
	while ( answer <= 'Y' || answer <= 'y'){
		
		printf("Enter the scores of player %d(between 0-4)\n", player);
		
		for (round =1; round <= 3; round ++){
			
			printf("Round %d - ", round );
			scanf("%d", &score);
			
			while(score < 0 || score > 4) {
				
				printf("Round %d - ", round );
				scanf("%d", &score);
				
			}
			
			total += score;	
			
		}
				
		averageScore = total / 3;
		
		printf("Average score - %.2f\n", averageScore);
		printf("\nDo you want to enter the scores of another player(y or y/ n or N): ");
		scanf(" %c", &answer);
		
		if ( answer == 'Y' || answer == 'y'){
			player++;
			printf("\n");
			
		}
		else {
			break;
		}
	}
	
	return 0;
	
}