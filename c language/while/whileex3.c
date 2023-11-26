// Write a C program to check if a number is prime or not using a while loop.
// #include <stdio.h>

// int main() {
//     int num;
//     int isPrime = 1;  // Assume the number is prime by default

//     printf("Enter a value: ");
//     scanf("%d", &num);

//     if (num <= 1) {
//         isPrime = 0;  // Numbers less than or equal to 1 are not prime
//     } else {
//         int divisor = 2;

//         while (divisor * divisor <= num) {
//             if (num % divisor == 0) {
//                 isPrime = 0;  // It's not prime if it's divisible by the current divisor
//                 break;
//             }
//             divisor++;
//         }
//     }

//     if (isPrime) {
//         printf("%d is a prime number\n", num);
//     } else {
//         printf("%d is not a prime number\n", num);
//     }

//     return 0;
// }

//----------------------------------------my method------------------------------------------------------
// use sqrt to make it even simpler
#include <stdio.h>
int main(){

    int primeNum = 1, num, divisor = 2;

    printf(" Enter a number: ");
    scanf("%d", &num);

    if( num > 1 ){
        primeNum = 1;
            while (divisor * divisor <= num){
                if (num % divisor == 0){
                    primeNum = 0;
                }else{
                    primeNum = 1;
                }
            divisor++;
            }
    }else {
        primeNum = 0;
    }

    if(primeNum)
        printf("The number is a prime number");
    else
        printf("The number is not a prime number");

    return 0;
                                                                                                                                                 
}