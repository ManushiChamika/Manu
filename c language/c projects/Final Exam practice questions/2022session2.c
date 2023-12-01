#include <stdio.h>
#include <assert.h>

float calRemainingFuel(int vehicleType, float usedFuelQuota);
float calFuelCost(int vehicleType, float udsedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(){
	
	assert(calRemainingFuel(1,3) == 2);
	assert(calRemainingFuel(3,19) == 1);
	
	// always used the same format specifiers
	int vType;
	float quota;
	float remainingQuota;
	float cost;
	
	while(vType != -1){
		printf("Enter vehicle type: ");
		scanf("%d", &vType);
	
	if(vType == -1){
		break;
	}
	
	printf("Enter used fuel quota: ");
	scanf("%f", &quota);
	
	calRemainingFuel(vType,quota);
	
	displayDetails(vType, quota, remainingQuota, cost);
	
	printf("\n");
	
	}
	return 0;
}

float calRemainingFuel(int vehicleType, float usedFuelQuota){
	
	switch(vehicleType){
		case 1: 
			return (5 - usedFuelQuota);
			break;
		
		case 2: 
			return (20 - usedFuelQuota);
			break;
			
		case 3: 
			return (20 - usedFuelQuota);
			break;
			
		case 4: 
			return (30 - usedFuelQuota);
			break;	
		
		default : printf("Invalid\n");
			break;
		
	}
}

float calFuelCost(int vehicleType, float usedFuelQuota){

	switch(vehicleType){
		case 1: 
			return usedFuelQuota * 370;
			break;
		
		case 2: 
			return usedFuelQuota * 370;
			break;
			
		case 3: 
			return usedFuelQuota * 510;
			break;
			
		case 4: 
			return usedFuelQuota * 370;
			break;	
		
		default : printf("Invalid\n");
			break;
		
	}
		
}

void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost){
	
	printf("Vehicle Type\t\tQuota used\t\tQuota Remaining\t\tFuel Cost\n");
	
	remainingQuota =  calRemainingFuel(vType , usedFuelQuota);
	cost= calFuelCost(vType , usedFuelQuota);
	
	printf("%d\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n", vType,  usedFuelQuota, remainingQuota, cost );

}


 

