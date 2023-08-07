// #include <iostream>
// using namespace std;
// int main()
// {
//     // Example- 1
//     int score {};
//     cout << "Enter your score on the exam (0-100):";
//     cin >> score;
//     char letter_grade {};

//     if(score >= 0 && score <= 100)
//     {
//         if (score > 90)
//             letter_grade = 'A';
//         else if (score > 80)
//             letter_grade = 'B';
//         else if (score > 70)
//             letter_grade = 'c';
//         else if (score > 60)
//             letter_grade = 'D';
//         else
//             letter_grade = 'F';

//         cout << "Your grade is:" << letter_grade << endl;
//         if (letter_grade == 'F')
//             cout << "Sorry, you must repeat the class"<< endl;
//         else 
//         cout << "Congrats!" << endl;

//     }
//     else 
//     {
//         cout << "Sorry, " << score << " is not in range " << endl;
//     }
     
//     cout << endl;
//     return 0;

// }

// ==============================================================================================
    // Example - 2
    /*
    ----Shipping cost calculator----
    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge
    */

#include <iostream>
using namespace std;
int main()
{
    int pack_dimension {};
    int length{}, width{}, height{};
    double base_cost{2.50};
    double cost{};

    cout << "Enter the length:";
    cin >> length;
    cout << "Enter the width:";
    cin >> width;
    cout << "Enter the height:";
    cin >> height;

    pack_dimension = (length * width * height);
    cout << "The package dimension is " << pack_dimension << " cubic inches." << endl;

    if(pack_dimension <= 1000)
    {
        cout << pack_dimension << " is less than or equal to 1000" << endl;
        cout << "The package can be shipped " << endl;
    
        if (pack_dimension > 100 && pack_dimension < 501 )
        {
            cout << "There is a 10% surcharge if the package volume is > 100 cubic inches" << endl;
            cost = base_cost + (base_cost * 0.10);
            cout << pack_dimension << " cubic inches is greater than 100 cubic inches, Therefore the total charge is: " 
            << cost <<  endl; 
        }
        else if (pack_dimension > 500)
        {
            cout << "There is a 25% surcharge if the package volume is > 500 cubic inches " << endl;
            cost = base_cost + (base_cost * 0.25);
            cout << pack_dimension << " cubic inches is greater than 500 cubic inches, Therefore the total charge is: "
             << cost << endl;
        }
        else
        {
            cout << " No surcharge is added" << endl;
            cost = base_cost;
        }

            cout << "\nThe total charge will be: " << cost << endl;

    }  
    else
    {
        cout <<"The package cannot be shipped." << endl;
    }
      
      cout << endl;
      return 0;

}
