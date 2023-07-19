// converting kilograms to grams
#include<iostream>
using namespace std;
int main()
{
    const double kg_g{1000};

    cout <<" Hello this is the kilograms to grams converter"<< endl;
    cout <<" please enter a value in kilograms:";

    double grams{0.0};
    double kilograms{0.0};

    cin >> kilograms;
    grams = kilograms * kg_g;
    
    cout << kilograms << " kilograms is equivalent to " << grams << " grams." << endl;
  
    return 0;

    }
