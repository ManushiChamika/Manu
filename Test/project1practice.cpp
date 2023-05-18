#include <iostream>
using namespace std;
int main ()
{
    int f_num;
    cout << "enter your favorite digit betwwen 1 and 100:";
    cin >> f_num;
    if (f_num >=1 && f_num <=100)
    {
    cout <<" That's my fav num too !!!!:" << f_num << endl;
    }
    else
    {
    cout << " please enter you favorite digit between 1 and 100!" << endl;
    }

    return 0;
}