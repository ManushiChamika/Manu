// #include <iostream>
// using namespace std;
// int main ()
// // wrong solution by me. correct one is down the page
// {
//     int cent{0};
//     int dollar{0}, quarter{0}, dime{0}, nickel{0}, penny{0};
//     const int lower{0};

//     cout  << boolalpha;
//     cout << "Enter an integer representing the no.of cents(>=)" << lower << ":";
//     cin >> cent;
//     cout << cent << " >= " << lower << " is " << ( cent >= lower ) << endl;

//     dollar = 100/cent;
//     quarter = 25/cent;
//     dime = 10/cent;
//     nickel = 5/cent;
//     penny = 1/cent;

//     cout << " one dollar is " << dollar << " cents." << endl;
//     cout << " one quarter is " << quarter << " cents." << endl;
//     cout << " one dime is " << dime << " cents." << endl;
//     cout << " one nickel is " << nickel << " cents." << endl;
//     cout << " one penny is " << penny << " cents." << endl;

//     cout << endl;
//     return 0;
// }

 #include <iostream>
 using namespace std;
 int main()
 {
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int change_amount{};

    // solution 1-not using the modulo operator

    cout << "Enter an amount in cents:";
    cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    // dollars = change_amount/dollar_value;
    // balance = change_amount - (dollars * dollar_value);

    // quarters = balance/quarter_value;
    // balance -= quarters * quarter_value;

    // dimes = balance/dime_value;
    // balance -= dimes * dime_value;

    // nickels = balance/nickel_value;
    // balance -= nickels * nickel_value;

    // pennies = balance;


    // Solution 2-using modulo operator

    balance = dollars = quarters = dimes = nickels = pennies =0;

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= dime_value;

    dimes = balance / dime_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nYou can provide this change as follows:" << endl;
    cout << "dollars:" << dollars << endl;
    cout << "quarters:" << quarters << endl;
    cout << "dimes:" << dimes << endl;
    cout << "nickels:" << nickels << endl;
    cout << "pennies:" << pennies << endl;

    cout << endl;
    return 0;

 }
