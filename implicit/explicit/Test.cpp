// implicit
// #include<iostream>
// using namespace std;
// int main ()
// {
//     short x=20;
//     int y=x;

//     cout << "The value of x:" << x << endl;
//     cout << "The value of y:" << y << endl;

//     return 0;

//  }


    // explicit
//     #include<iostream>
//     using namespace std;
//     int main ()
// {
//     double x=1.2;
//     int y=(int)x;

//     cout <<"The value of y:" << y;

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int tot_amount {100};
    int tot_number {8};
    double average {0.0};

    average =tot_amount/tot_number;
    cout << average <<endl;


    average =static_cast<double> (tot_amount)/tot_number;

    cout << average << endl;

    return 0;

}