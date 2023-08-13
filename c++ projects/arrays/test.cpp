// arrays
#include <iostream>
using namespace std;
int main()
{
// a=0
// e=1
// i=2
// 0=3
// u=4
    char vowels []{'a','e','i','o','u'};  //This is a string so declaration is important 
    cout << "\nThe first vowel is:"<<vowels [0]<<endl;
    cout << "The last vowel is:"<< vowels [4]<<endl;
    
    double high_temps [] {90.1,89.8,77.5,81.6};
    cout << "\nThe first high temperature is:" << high_temps[0]<<endl;

    high_temps[0]=100.7;
    cout<< "The first high temperature is now :"<< high_temps [0]<<endl;

    int test_scores []{100,90,80,70,60};
    cout << "\nFirst score at index 0:" << test_scores[0]<<endl;
    cout << "Second score at index 1:"<< test_scores[1]<< endl;
    cout << "Third score at index 2:" << test_scores[2]<<endl;
    cout << "Fourth score at index 3:" << test_scores[3]<<endl;
    cout << "Fifth score at index 4:" << test_scores[4]<<endl;

    cout << "\nEnter 5 test scores:";
    cin >>test_scores[0];
    cin >>test_scores[1];
    cin >>test_scores[2];
    cin >>test_scores[3];
    cin >>test_scores[4];

    cout<< "\nThe updated array is:"<< endl;
    cout <<"First score at index 0:"<< test_scores[0]<< endl;
    cout <<"Second score at index 1:"<< test_scores[1]<<endl;
    cout <<"Third score at index 2:"<< test_scores[2]<<endl;
    cout <<"Fourth score at index 3:"<< test_scores[3]<<endl;
    cout <<"Fifth score at index 4:"<< test_scores[4]<<endl;

    cout << "\nNotice what the value of the array name is :"<<test_scores<<endl;

    cout <<endl;
    return 0;

}












    
