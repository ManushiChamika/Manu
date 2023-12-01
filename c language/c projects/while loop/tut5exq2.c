//Prompt the user to enter series of numbers from the keyboard and display the numbers.
//If user enters a negative number stop reading the numbers.
#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    printf("Enter a series of numbers (enter a negative number to stop):\n");

    while (1) { // Infinite loop
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum of positive numbers: %d\n", sum);
        printf("Average of positive numbers: %.2f\n", average);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
}

