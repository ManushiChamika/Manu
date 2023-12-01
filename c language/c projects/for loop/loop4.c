#include <stdio.h>
int main(){
	int N = 1, players, player, total= 0, score=1, playerNum, max=0, j;
	
	printf("Input numbers of players: ");
	scanf("%d", &players);		
	
	for(player=1; player<= players; player++){
					
		printf("Input player number: ");
		scanf("%d",&playerNum);
		
		 for(N=1; N <= 3 ; N++){
		 
			printf("Input score %d: ", N);
			scanf("%d", &score);
			total += score;
			
		}
	
	printf("\nTotal Score : %d\n", total );
	printf("\n");

		if (max < total){
			max = total;
			j=playerNum;
		}
		
	total = 0;
	}

	
	printf("The winner is player %d", j);
	
	return 0;
}