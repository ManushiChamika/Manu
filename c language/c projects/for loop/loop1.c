#include <stdio.h>
int main(){
	
	int i, j, player, round, total;
	float averageScore;
	
	printf("How many players are in the race: ");
	scanf("%d", &player);
	
	for (j=1; j<= player ; j++){
	
		printf("\nEnter the scores of player %d(between 0-5)\n", j );
		
			for (i=1; i<=4; i++){	
				printf("Round %d -", i);
				scanf("%d", &round);
				
				while (round < 0 || round > 5){		
					printf("Round %d -", i);
					scanf("%d", &round);
				}
				
				total += round;
						
			}
						
			averageScore = total / 4.0 ;
			printf("Average score - %.2f\n", averageScore);
			
			total = 0;
			i=1;
	}
	
	return 0;
}










 
//
//int main() {
//    int i, j, player, round, total;
//    float averageScore;
//
//    printf("How many players are in the race: ");
//    scanf("%d", &player);
//
//    for (j = 1; j <= player; j++) {
//        total = 0;  // Reset total for each player
//
//        printf("\nEnter the scores of player %d (between 0-5)\n", j);
//
//        for (i = 1; i <= 4; i++) {
//            printf("Round %d - ", i);
//            scanf("%d", &round);
//
//            while (round < 0 || round > 5) {
//                printf("Invalid input. Round %d - ", i);
//                scanf("%d", &round);
//            }
//
//            total += round;
//        }
//
//        averageScore = (float)total / 4; // Calculate the average
//        printf("Average score - %.2f\n", averageScore);
//    }
//
//    return 0;
//}
