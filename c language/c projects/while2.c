//Write a C program to calculate the factorial of a given integer using a while loop.


//#include <stdio.h>
//
//int main() {
//    int n, factorial = 1;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    
//    int i = 1;
//    while (i <= n) {
//        factorial *= i;
//        i++;
//    }
//    
//    printf("Factorial of %d is %d\n", n, factorial);
//    
//    return 0;
//}

//uderstood
#include <stdio.h>
int main(){
	
	int num, i=1;
	int factorial =1;
	
	printf("Enter a value for n: ");
	scanf("%d", &num);
	
	while (i<=num){
		
		factorial *= i;
		++i;
	}
	printf("%d", factorial);
	
	return 0;
}
