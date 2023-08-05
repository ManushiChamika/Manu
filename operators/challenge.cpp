#include <iostream>
using namespace std;
int main ()
{
    int cent{0};
    int dollar{0}, quarter{0}, dime{0}, nickel{0}, penny{0};
    const int lower{0};

    cout  << boolalpha;
    cout << "Enter an integer representing the no.of cents(>=)" << lower << ":";
    cin >> cent;
    cout << cent << " >= " << lower << " is " << ( cent >= lower ) << endl;

    dollar = 100/cent;
    quarter = 25/cent;
    dime = 10/cent;
    nickel = 5/cent;
    penny = 1/cent;

    cout << " one dollar is " << dollar << " cents." << endl;
    cout << " one quarter is " << quarter << " cents." << endl;
    cout << " one dime is " << dime << " cents." << endl;
    cout << " one nickel is " << nickel << " cents." << endl;
    cout << " one penny is " << penny << " cents." << endl;

    cout << endl;
    return 0;
}