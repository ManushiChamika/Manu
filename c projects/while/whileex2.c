//Write a C program to find the sum of all natural numbers between 1 and N using a while loop.
#include <stdio.h>
int main(){
    int num = 1, sum = 0, N;

    printf("Enter a positive value of N: ");
    scanf("%d",&N);

    while (num <= N){
        sum += num;
        num++;
    }
    printf("%d", sum);

    return 0;
}