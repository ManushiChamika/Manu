// increment operator++
// decrement operator--
// can be used with integers,floating point types and pointers

// prefix ++num
// postfix num++

// counters
// A variable in a program that is used to keep track of anything that must be counted.
// Programmers define counters as integer variables in their programs.

#include<iostream>
using namespace std;
int main()
{
    int counter {10};
    int result {0};

// Example 1-simple increment
    cout << "counter :" << counter << endl;
    
    counter = counter + 1;
    cout << "counter :" << counter << endl;

    counter ++;
    cout << "counter :" << counter << endl;

    ++ counter;
    cout << " counter :" << counter << endl;


// Example 2-preincrement
    counter=10;
    result=0;

    cout << "counter:" <<counter << endl;

    result=++counter; // note the preincrement
    cout << "Counter :" << counter << endl;
    cout << "Result :" << result << endl;


// Example 3-post increment
    counter=10;
    result=0;

    cout << "counter: "<< counter << endl;

    result = counter ++; //Note the post increment
    cout << "counter:" << counter << endl;
    cout << "Result:" << result << endl;


// Example 4
    counter =10;
    result =0;
    
    result= ++ counter + 10; //Note the pre increment 

    cout << "counter:"<< counter << endl;
    cout << "Result" << result << endl;


// Example 5
    counter=10;
    result=0;

    cout << "counter:"<< counter << endl;

    result= counter++ +10; //Note the post increment
    cout << "counter :" << counter << endl;
    cout << "Result:" << result << endl;

    cout <<endl;
   
    return 0;

    }