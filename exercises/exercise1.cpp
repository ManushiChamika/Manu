#include <iostream>
using namespace std;
int main()
{
    int room_width (0);
    int room_length (0);

    cout << "enter a value for width";
    cin >> room_width;

    cout << "enter a value for length ";
    cin >> room_length;

    cout << "The area of the room is " << room_length * room_width << " square feet."<< endl;
    return 0;
}
