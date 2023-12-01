# include <stdio.h>

int main(){
	
	int i, j, lines;
	char char1, char2;
	
	printf("Enter 1st character: ");
	scanf(" %c", &char1);
	
	printf("Enter 2nd character: ");
	scanf(" %c", &char2);
	
	printf("Enter the number of lines: ");
	scanf("%d", &lines);
	
	for(i=1; i<=lines ; i++){
		for(j=1; j<=i; j++){
			if(j % 2 != 0){
			printf("%c", char1);
			}else if(j %2 == 0){
				printf("%c", char2);
			}
		}
		printf("\n");
	}
	return 0;
}