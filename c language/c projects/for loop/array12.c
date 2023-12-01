#include <stdio.h>
int main(){
	
	struct Product{
		
		char productID[20];
		char name[20];
		float unitPrice, amount;
		int quantitySold;
		
	}Product[4];
	
	int i;
	float amount, total=0;
		
		for(i=0; i<4; i++){
			printf("Product %d\n", i+1);
			printf("Product ID- ");
			scanf("%s", Product[i].productID);
	
			printf("Product name- ");
			scanf("%s", Product[i].name);
	
			printf("Unit price- ");
			scanf("%f", &Product[i].unitPrice);	
		
			printf("Quantity sold- ");
			scanf("%d", &Product[i].quantitySold);
			
			printf("\n");
	}
	
	printf("Product ID\t\tName\t\tAmount\n................................\n");
	
	for(i=0; i<4; i++){
		Product[i].amount = Product[i].unitPrice * (float)Product[i].quantitySold;
		printf("%s\t\t\t%s \t\t%.2f\n",Product[i].productID, Product[i].name, Product[i].amount);
		total = total + Product[i].amount;
	}
	
	printf("\n\t\t\t\tTotal: %.2f", total);
	
	return 0;
}