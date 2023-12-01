#include <stdio.h>

int main(){
	
	int fib[10] = {0,1};
	int i;
	
	for(i=0; i < 10; i++){
		fib[i + 2] = fib[i] + fib[i + 1];
	}
	
	for(i=0; i < 10 ; i++){
		printf("%d ", fib[i]);
	}
	
	return 0;
}