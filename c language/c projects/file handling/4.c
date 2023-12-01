#include <stdio.h>
int main(){
	
	int itemCode;
	float itemPrice;
	char itemName[30];
	int i = 0;
	
	FILE * item;
	
	item = fopen("item.dat", "a");//"w" - write empties the file and write our input
	
		//to
		if(item == NULL){
			printf("error");
			//to terminate we should add return, but its more applicable to use -1
			//because to check identify the error properly
			
			return -1;
		}
	
		printf("Enter item code: ");
		scanf("%d", &itemCode);
		
		printf("Enter name: ");
		scanf("%s", itemName);
		
		printf("enter item price: ");
		scanf("%f", &itemPrice);
		
		fprintf(item, "\n%d %s %.2f\n ",itemCode, itemName,  itemPrice);
		
		fclose(item);
		
		//to read 
		
		item = fopen("item.dat", "r");
		
		//file end of is used to check the whole note pad if we dont know the 
		//size properly
		
		while(!feof(item)){
		//to get something from folder
		fscanf(item, "%d %s %f", &itemCode, itemName, &itemPrice );//use a star if we dont want that data line to be printed
	
		//use the %d %s %f signs according to the notepad
		printf("%d %s %f\n",itemCode, itemName, itemPrice);
	
		}
		fclose(item);
		
	return 0;
}