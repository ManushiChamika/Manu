#include <stdio.h>
int main(){
	int players,i , j, score, total;
	float averageScore;
	
	printf("How many players are in the race: ");
	scanf("%d", &players);
	
	for ( i = 1; i <= players; i++){
	
	printf("\nEnter the scores of player %d(between 0-5)\n", i);
	
	for (j = 1; j <= 4 ; j++){
	
	printf("Round %d: ", j);
	scanf("%d", &score);
	
		while ( score < 0 || score > 5 ){
			printf("Round %d ", j);
			scanf("%d", &score);
	}
	
	total += score;
	
	}
	
	averageScore = total / 4.0;
	printf("\nAverage Score - %.1f\n",averageScore );
	printf("\n");
	
	total = 0;
	}
	
	
	return 0;
}