
#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to square an integer
int square(int a) {
    return a * a;
}

int main() {
    // Calculate (3*4 + 5*7) ^ 2
    int result = square(add(multiply(3, 4), multiply(5, 7)));

    printf("The result of (3*4 + 5*7) ^ 2 is: %d\n", result);

    return 0;
}
