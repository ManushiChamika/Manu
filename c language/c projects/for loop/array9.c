#include <stdio.h>
int main(){
	int boxes[4][3];
	int volume[4];// corresponding to 4 boxes
	int i, j;
	
	for(i=0; i<4; i++){
		printf("Box %d\n",i+1);
			
			for(j=0; j<3; j++){
				
				if(j==0){
					printf("Input length- ");		
					scanf("%d", &boxes[i][j]);	
				}
				else if(j==1){
					printf("Input width- ");	
					scanf("%d", &boxes[i][j]);	
				}
				else if(j==2){
					printf("Input heigth- ");	
					scanf("%d", &boxes[i][j]);	
				}		
			}
			
		printf("\n");
	}
	for(i=0; i<4; i++){
		volume[i] = boxes[i][0] * boxes[i][1] * boxes[i][2];
		printf("\nvolume of box %d is %d", i+1, volume[i]);
	}
	
	return 0;
}