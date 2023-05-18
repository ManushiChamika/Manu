#include <iostream>
using namespace std;
int main()
{
cout << " Hello, Welcome to Manus Carpet cleaning service"<< endl;
cout <<"\nHow many rooms would you like cleaned?";

     int number_of_rooms(0);
     cin >> number_of_rooms;

cout << endl;
cout << " Estimate for Carpet Cleaning "<< endl;
cout << "  Number of rooms:" << number_of_rooms << endl;
cout << "  Price per room : $ " << 30 << endl;
cout << "  Cost : $" << 30*number_of_rooms << endl;
cout << "  Tax : $" << 30* number_of_rooms* 0.05 << endl;
cout <<" ======================================="<< endl;
cout << "  Total estimate : $ " << (30*number_of_rooms) +  (30*number_of_rooms*0.05) << endl;
cout << " This estimate is valid for 30 days." ;
return 0;
}