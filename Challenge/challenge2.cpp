#include <iostream>
using namespace std;
int main()
{
    cout << "Manus carpet cleaning service" << endl;
    cout << "\ncharges"<< endl;
    cout << "charge per small room : $"<< 25 << endl;
    cout << "charge per large room : $"<< 35 << endl;
    cout << "\nEstimate for carpet cleaning service" <<endl;

    int number_of_small_rooms (0); 
    cout << "Number of small rooms :";
    cin >> number_of_small_rooms;
    
    int number_of_large_rooms (0); 
    cout << "Number of large rooms :"; 
    cin >> number_of_large_rooms;

    cout << "price for small room/s: $" << (25* number_of_small_rooms ) << endl;
    cout << "price for large room/s: $" <<(35 * number_of_large_rooms) << endl;
    cout << "cost : $"<<(25* number_of_small_rooms )+(35 * number_of_large_rooms) << endl;
    cout << "Sales tax rate : $" << ((25* number_of_small_rooms )+(35 * number_of_large_rooms))* 0.06 << endl;
    cout << "============================================"<< endl;
    cout << "Total estimate: $"<< ((25* number_of_small_rooms )+(35 * number_of_large_rooms))+((25* number_of_small_rooms )+(35 * number_of_large_rooms)) * 0.06 << endl;
    cout << "This estimate is valid for 30 days.";
    
    return 0;
   
//  yay i did the challenge!
}