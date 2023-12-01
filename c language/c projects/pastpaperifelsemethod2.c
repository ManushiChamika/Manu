#include <stdio.h>

int main(){
	
	int room, days, stop;
	char accom, cardType;
	float amount, newAmount;
do{
	
	printf("Enter the type of room(1,2,3): ");
	scanf("%d", &room);
	
	if (room == 1 || room == 2 || room == 3 ){
		
		printf("Enter accomodation Basis(F/H): ");
		scanf("%c", &accom);
		
		printf("Enter the no of days: ");
		scanf("%d", &days);
		
		switch(accom){
			
			case 'F':
				switch(room){
					case 1:		amount = (float)days * 25555.00;break;
				  	case 2: 	amount = (float)days * 17500.00;break;
				  	case 3:		amount = (float)days * 9000.00;break;
		}break;
			case 'H': 	
				switch (room){
					case 1:		amount = (float)days * 17250.00;break;
				  	case 2: 	amount = (float)days * 12250.00;break;
				  	case 3:		amount = (float)days * 7250.00;break;
				}
		}
	
    
		printf("Enter the card type(G, S, B): ");
		getchar();
		scanf("%c", &cardType);
		
			switch(cardType){
				case 'G': 	newAmount = amount * 0.875; break;
				
				case 'S':	newAmount = amount * 0.885; break;
				
				case 'B':	newAmount = amount * 0.905; break;
				
			}
			
		printf("The amount is: Rs. %.2f\n ", newAmount);
		printf("\n\n\n");
	}
	else 
		printf("\nInvalid type of room\n");
		
		stop = (int)room;
		
}while(stop!=-1);
	
	return 0;
	
}
