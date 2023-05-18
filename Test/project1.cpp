#include <iostream>
using namespace std;
int main()
{
    int fav_num;
    cout << "enter your favorite number between 1 and 100:";
    cin >> fav_num;
    if (fav_num >=1 && fav_num <=100)
    {
        cout <<"That's my favorite number too!!!:" << fav_num << endl;
    } 
    else
    {
        cout << "please enter a number between 1 and 100!" << endl;
    }
    
    return 0;
}