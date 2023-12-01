#include <stdio.h>

int main(){
	
	int i, j, OTHours[5] = {20, 22, 25, 19, 20};
	float OTrate[5];
	float payment = 0;
	float max = OTrate[0] * OTHours[0];
	
	for(i=0; i<5; i++){
		printf("OT rate of employee %d: ", i+1);
		scanf("%f", &OTrate[i]);
	}
	printf("\nOTHours array\n");
	
	for(i=0; i<5; i++){
		printf("%d, ", OTHours[i]);
	}
	printf("\n\nOTrate array\n");
	
	for(i=0; i<5; i++){
		printf("%.2f, ", OTrate[i]);
	}
	for(i=0; i<5; i++){
		payment = (float)OTHours[i] * OTrate[i];
		if ( max < payment){
			max = payment;
			j = i+1;
		}
	}
	printf("\n\nEmployee who earned highest payment : %d\n", j);
}