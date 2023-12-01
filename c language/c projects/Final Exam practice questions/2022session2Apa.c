#include <stdio.h>

int main(){
	
	int i, j, userRating[5];
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	
	while(1){
		printf("Input rating(1-5): ");
		scanf("%d", &userRating[i]);
		
		if(userRating[i] == -99){
			break;
		}
		
		if(userRating[i] < 1 || userRating[i] > 5){
			userRating[i] = 0;
		}
		
		if (userRating[i] == 1){
			count1++;
		}
		else if (userRating[i] == 2){
			count2++;
		}
		else if (userRating[i] == 3){
			count3++;
		}
		else if (userRating[i] == 4){
			count4++;
		}
		else if (userRating[i] == 5){
			count5++;
		}
	
	}
		
		printf("\n\n1\t");
		
		for(j=0 ; j < count1; j++){
			printf("* ");
		}
		
		printf("\n2\t");
		
		for(j=0 ; j < count2; j++){
			printf("* ");
		}
		printf("\n3\t");
		
		for(j=0 ; j < count3; j++){
			printf("* ");
		}
		printf("\n4\t");
		
		for(j=0 ; j < count4; j++){
			printf("* ");
		}
		printf("\n5\t");
		
		for(j=0 ; j < count5; j++){
			printf("* ");
		}
		
		printf("\n");
	
	return 0;
}