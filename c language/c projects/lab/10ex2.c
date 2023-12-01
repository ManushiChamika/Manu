#include <stdio.h>

int main(){

	FILE * purchase;
	
	char itemID[100] = {0}, name[100] = {0};
	int quantity, price, i, totalPrice = 0, total =0;
	
	purchase = fopen("purchase.txt", "w");
	
	if(purchase == NULL){
		printf("The file does not exist!");
		return -1;
	}

	for(i=0; i<4; i++){
		printf("Item ID: ");
		scanf("%s", itemID);
		
		printf("Name(Flour, Dhal, Sugar, Rice): ");
		scanf("%s", name);
		
		printf("Quantity(kg): ");
		scanf("%d", &quantity);
		
		printf("Price: ");
		scanf("%d", &price);
		
		totalPrice = price * quantity;
		
		printf("\n");
	
		fprintf(purchase, "%s\t\t%d\t\t%d\t\t%d\n",name, quantity, price, totalPrice);
	}
	
	fclose(purchase);
	
	purchase = fopen("purchase.txt", "r");
	
	
	printf("%s\t\t%s\t\t%s\t\t%s\n", "Item", "Quantity" , "Unit Price", "Price(Rs.)");
	
	fscanf(purchase, "%s %d %d %d", name, &quantity, &price, &totalPrice);
	
	while(!feof(purchase)){
		
		totalPrice = price * quantity;
		total += totalPrice;
		
		printf("%s\t\t%d\t\t\t%d\t\t\t%d\n", name, quantity, price, totalPrice);
		fscanf(purchase, "%s %d %d %d", name, &quantity, &price, &totalPrice);
	}
	
	printf("Total\t\t\t\t\t\t\t\t%d", total);
	
	fclose(purchase);
	
	return 0;
}