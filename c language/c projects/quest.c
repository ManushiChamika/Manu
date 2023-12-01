#include<stdio.h>

int main(){
	
	int i, j, item[5];
	
	char name[5][20];// 20 means the length of the name need to be store
					 // 5 means no of times to repeat
					 
	for (i=0; i<5 ; i++){
		printf("Enter the item code: ");
		scanf("%d",&item[i] );
		
		printf("Enter the item name: ");
		scanf("%s", name[i]);
		
		printf("\n");	
	}
	
	for(i=0; i<5 ; i++){
		printf("\n %d %s\n", item[i], name[i]);
	}
	
	
	
	return 0;
}