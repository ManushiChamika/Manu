#include <stdio.h>

int main(){
	
	int testMarks[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int i;

	for(i=0; i<10; i++){
	
		printf("Input mark %d: ", i+1);
		scanf("%d",&testMarks[i]);
			
			while (testMarks[i] < 0 || testMarks[i] > 100 ){
				printf("Invalid mark.Re-enter\n");
				printf("Input mark %d: ", i+1);
				scanf("%d",&testMarks[i]);
			}
	}
	printf("Passed marks : ");
	
	for(i=0; i<10 ; i++){
	
		if(testMarks[i] > 50){
			printf("%d ",testMarks[i]);
		}
	}
	
	return 0;
}