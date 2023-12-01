#include <stdio.h>
#define size 3

int main(){
	float item[size] = {90.00, 20.00, 55.00};
	int qtySold[size], i, j;
	float min = item[0] * qtySold[0]; // Initialize min with the income of the first item
	int low_income = 0;//Initialize with the first item number
	
	for(i=0; i< size; i++){
		printf("Input quantity sold for item %d: ", i+1);
		scanf("%d", &qtySold[i]);
	}
	printf("\nInput array\n");
	
	for(i=0; i < size; i++){
		printf("%.2f, ", item[i]);
	}
	printf("\nqtySold array\n");
	
	for(i=0; i < size; i++){
		printf("%d, ", qtySold[i]);
	}
	 
	for(i=0; i< size ; i++){
		low_income = (float)qtySold[i] * item[i];
		if(min > low_income){
			min = low_income; // update the minimu income
			j = i+1;// update the item with the lowest income
		}
	}
	printf("\nItem which generated least income: %d\n", j);
	
	return 0;
}

/*why should we initialize the min first
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
Initializing the min variable is important because it establishes an initial reference point for comparison.
When you're searching for the minimum income among items, you need a starting value for min so that you have
something to compare against in the loop.

If you don't initialize min and directly start comparing with it in the loop, you don't have a valid initial 
value to compare with. The uninitialized variable could contain any random value, and comparisons would not be
meaningful. Initializing min with a known value, such as the income of the first item, ensures that the 
comparison process starts with a sensible reference point.

In the corrected code:
	float min = item[0] * qtySold[0]; // Initialize min with the income of the first item

min is initialized with the income of the first item, and then the loop iterates over the other items, 
comparing their incomes with this initial value. This ensures that the initial value of min is relevant and 
that the comparison process yields meaningful results in finding the item with the lowest income.*/