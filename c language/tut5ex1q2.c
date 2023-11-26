//Prompt the user to enter series of numbers from the keyboard and display the numbers.
//If user enters a negative number stop reading the numbers.
#include <stdio.h>
int main(){

    int num;

    printf("Enter a series of numbers and enter a negative number to exit the execution: ");
    
    while (1){
        scanf("%d", &num );
        
        if( num < 0){
            break;
        }

        printf("%d", num);
    }

    return 0;
}
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a series of numbers (enter a negative number to stop):\n");

//     while (1) {  // Infinite loop
//         scanf("%d", &num);

//         if (num < 0) {
//             break;  // Exit the loop if a negative number is entered
//         }

//         printf("You entered: %d\n", num);
//     }

//     return 0;
// }
