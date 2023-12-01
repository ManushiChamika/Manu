#include <stdio.h>

int main(){
	
	int team1[3] = {8, 3, 7};
	int team2[3];
	int i, count1 = 0, count2 = 0;
	
	for(i=0; i<3; i++){
		printf("Score of round %d: ", i+1);
		scanf("%d", &team2[i]);
	}
	
	printf("\n\nteam1\n");
	
	for(i=0; i<3; i++){
		printf("%d, ", team1[i]);		
	}
	
	printf("\n\nteam2\n");
	
	for(i=0; i<3; i++){
		printf("%d, ", team2[i]);		
	}
	printf("\n\nWinners\n");
	
	for(i=0; i<3; i++){
		if(team1[i] > team2[i]){
			printf("round %d: team 1\n", i+1 );
			count1 += 1;
		}
		else{
			printf("round %d: team 2\n", i+1 );
			count2 += 1;
		}
		
	}
	
	if(count1 > count2){
		printf("\nOverall winner : team 1\n");
	}
	else{
		printf("\nOverall winner : team 2\n");
	}

	
	return 0;
}