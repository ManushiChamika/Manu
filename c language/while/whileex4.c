//Create a program to find the LCM of two numbers using a while loop.
/*To find the LCM of two numbers, you typically need to find their prime factors and then compute the LCM 
based on the highest power of each prime factor*/

#include <stdio.h>
int main(){

    int primeNum = 1, num = 2, divisor = 2, x, evenNum = 1, y;

    if( num > 1 ){

        primeNum = 1;

        printf("Enter a value for x: ");
        scanf("%d", &x );

            if ( x > 0 && x % 2 == 0){
                evenNum = 1;
                    while (x <= 1){
                        if ( num == 2 && x > 0 && y % 2 == 0 ){
                            x = x / num;
                        }else {
                            ++num;
                            while(divisor * divisor <= num){
                                if(num % divisor == 0){
                                    primeNum = 0;
                                }else{
                                    primeNum = 1;
                                    x = x / num;
                                } 
                            divisor++;
                            }
                        }  
                       
                    } printf("\n%d\n", num);
            }
    }else {
        primeNum = 0;
    }

    if(primeNum){
        printf("The number is a prime number");
    }
    else{
        printf("The number is not a prime number");
    }

    return 0;
                                                                                                                                                 
}