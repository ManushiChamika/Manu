#include <stdio.h>

int main(){
	int n, num = 1, i=1, m, j;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while( n < 0 ){
		printf("Invalid number.Enter a number: ");	
		scanf("%d", &n);
		
		if (n > 0){
			while(i<=n){
				m=(i*i)/i;
				for (i=1; i<=m; i++){
					for (j=1; j<=m; j++){
						printf("%d ",j);						
					}				
				printf("\n");
				}
				i++;
			}
		}
	}
	
	
	
	return 0;
}
	

	

