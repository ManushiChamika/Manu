// Mixed type expression
/*
 Ask the user to enter 3 integers
 calculate the sum of the integers then
 calculate the average of the 3 integers.

 Display the 3 integers entered
 the sum of the 3 integers and 
 the average of the 3 integers
*/

#include <iostream>
using namespace std;
int main()
{
    int num_1{0};
    int num_2{0};
    int num_3{0};
    int sum{0};
    double average{0.0};

    cout << "Enter the first digit:";
    cin >> num_1;

    cout << "Enter the second digit:";
    cin >> num_2;

    cout << "Enter the third digit:";
    cin >> num_3;

    sum = num_1 + num_2 + num_3;
    cout << "The sum of the three integers= " << sum << endl;

    average = ( num_1 + num_2 + num_3) / 3.0;
    cout << "The average= " << average << endl;

    return 0;
}
