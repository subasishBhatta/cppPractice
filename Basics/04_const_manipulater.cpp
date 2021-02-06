#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 5;
    // cout << "The value of a was " << a << endl;
    // a = 10;
    // cout << "The value of a was " << a << endl;

    // *********** Constants in C++ ************
    // const int c = 10;
    // cout << "The value of c was " << c << endl;
    // c = 20;      // The value of c can't be changed since it was a constant
    // cout << "The value of c was " << c << endl;

    // *********** Manipulaters in c++ ***********
    // There are two types are manipulaters in C++
    // 1. endl - To add a new line
    // 2. setw() - To format the numbers
    int a = 2, b = 30, c = 2344;
    cout << "The value of a without setw is " << a << endl;
    cout << "The value of b without setw is " << b << endl;
    cout << "The value of c without setw is " << c << endl;

    cout << "The value of a is " << setw(4) << a << endl;
    cout << "The value of b is " << setw(4) << b << endl;
    cout << "The value of c is " << setw(4) << c << endl;
    
    return 0;
}