// convert meters to centimeters
#include<iostream>
using namespace std;
int main()
{
    const double m_cm {100};
    cout << "welcome to conversion of meters to centimeters calculator"<<endl;
    cout << "enter a value in meters: ";

   double meters {0.0};
   double centimeters {0.0};

   cin >> meters;
   centimeters = meters*m_cm;


   cout << meters << " meters is equivalent to "<< centimeters << " centimeters" << endl;
   cout << endl;

   return 0;


}