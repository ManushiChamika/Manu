#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age >= 18)?( printf("eligible for voting")):(printf("not eligible for voting"));

    return 0;

}