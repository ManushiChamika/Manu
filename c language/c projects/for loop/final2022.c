#include <stdio.h>
int main(){
	char character1, character2;
	int i, j, N;
	
	printf("Enter first character: ");
	scanf("%c", &character1);
	
	printf("Enter second character: ");
	getchar();
	scanf("%c",&character2);
	
	printf("Enter the number of lines: ");
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
			for(j=1; j<=i; j++){
				if(j % 2 != 0){
					printf("%c",character1 );
			}else{
					printf("%c",character2 );
			}
		}
		printf("\n");
	}
	return 0;
}
