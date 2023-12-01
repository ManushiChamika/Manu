#include <stdio.h>
int main(){

    int primeNum = 1, num, divisor = 2, x;

    while(num == primeNum){
        printf(" Enter a number: ");
        getchar();
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

        printf("Enter value for x: ");
        scanf("%d", &x);

        if( x > 0  && x % 2 == 0){
            printf("It is an even number:");
                while (x <= 1){
                    if(x % num == 0){
                        x = x / num;
                        num *= num;
                    }
                }
                printf("%d", x);
                printf("%d", num);
        }else 
            printf("Invalid");

         num++;    
    }

    return 0;
                                                                                                                                                 
}
