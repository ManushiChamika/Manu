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

// ========================================================================================================
    // Example - 2
    // ------------------------------------------My answer-------------------------------------------------
    /*
    ----Shipping cost calculator----
    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge
    */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int pack_dimension {};
//     int length{}, width{}, height{};
//     double base_cost{2.50};
//     double cost{};

//     cout << "Enter the length:";
//     cin >> length;
//     cout << "Enter the width:";
//     cin >> width;
//     cout << "Enter the height:";
//     cin >> height;

//     pack_dimension = (length * width * height);
//     cout << "The package dimension is " << pack_dimension << " cubic inches." << endl;

//     if(pack_dimension <= 1000)
//     {
//         cout << pack_dimension << " is less than or equal to 1000" << endl;
//         cout << "The package can be shipped " << endl;
    
//         if(pack_dimension > 100 && pack_dimension < 501)
//         {
//             cout << "There is a 10% surcharge if the package volume is > 100 cubic inches" << endl;
//             cost = base_cost + (base_cost * 0.10);
//             cout << pack_dimension << " cubic inches is greater than 100 cubic inches, Therefore the total charge is: " 
//             << cost <<  endl; 
//         }
//         else if(pack_dimension > 500)
//         {
//             cout << "There is a 25% surcharge if the package volume is > 500 cubic inches " << endl;
//             cost = base_cost + (base_cost * 0.25);
//             cout << pack_dimension << " cubic inches is greater than 500 cubic inches, Therefore the total charge is: "
//              << cost << endl;
//         }
//         else
//         {
//             cout << " No surcharge is added" << endl;
//             cost = base_cost;
//         }

//             cout << "\nThe total charge will be: " << cost << endl;

//     }  
//     else
//     {
//         cout <<"The package cannot be shipped." << endl;
//     }
      
//       cout << endl;
//       return 0;

// }


// ============================================================================================================
/*--------------------------------------------------sirs answer-----------------------------------------------*/

#include <iostream>
using namespace std;
int main()
{
    int length{}, width{}, height{};
    double base_cost{2.50};
    
    const int tier1_threshold{100};//volume
    const int tier2_threshold{500};//volume
    
    int max_dimension_length {10}; //inches

    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces:";
    cin >> length >> width >> height;

    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "Sorry, package rejected - dimension exceeded" <<endl;
    }
    else
    {
        double package_cost{};
        package_volume = length*width*height;
        package_cost = base_cost;

        if(package_volume > tier2_threshold)
            {
            package_cost += package_cost * tier2_surcharge;
            cout << " Adding tier 2 surcharge" << endl;
            }
            else if (package_volume > tier1_threshold)
            {
            package_cost += package_cost * tier1_surcharge;
            cout << " adding tier 1surcharge" << endl;
            }

            // cout << fixed << setprecision(2);
            cout << "The volume of your package is:" << package_volume << endl;
            cout << "Your package will cost $" << package_cost << " to ship" <<endl;
    }       

    cout << endl;
    return 0;
}