#include <stdio.h>
#define size 5

int main(){
	
	int rate[size] = {0, 0, 0, 0, 0};
	int count1=0, count2=0, count3=0, count4=0, count5=0, i;
	
	while(1){
		
		printf("Pls input the service rating(1-5): ");
		scanf("%d", &rate[i]);
		
		if(rate[i] == -1){
			break;
		}
		else if(rate[i] < 1 || rate[i] > 5){
			printf("Error. ");
			printf("Pls input the service rating(1-5): ");
			scanf("%d", &rate[i]);	
		}
		
		if(rate[i] == 1){
			count1 += 1;
		}
		else if(rate[i] == 2){
			count2 += 1;
		}
		else if(rate[i] == 3){
			count3 += 1;
		}
		else if(rate[i] == 4){
			count4 += 1;
		}
		else if(rate[i] == 5){
			count5 += 1;
		}
	
	}
	
	printf("\n\nRating\t\tNumber Of Response\n");
	printf("1\t\t\t%d\n", count1);
	printf("2\t\t\t%d\n", count2);
	printf("3\t\t\t%d\n", count3);
	printf("4\t\t\t%d\n", count4);
	printf("5\t\t\t%d\n", count5);

	
	return 0;
}