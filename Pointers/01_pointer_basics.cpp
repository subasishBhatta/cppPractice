#include <iostream>
using namespace std;

int main()
{
    // Pointer
    int a {3};
    int *b;
    b = &a;

    // & - Address of Operater
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * - (Value at) - Dereference Operater
    cout << "The value at a is " << a << endl;
    cout << "The value at a is " << *b << endl;

    // Pointer to a pointer
    int **c;
    c = &b;

    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at a is " << a << endl;
    cout << "The value at a is " << *b << endl;
    cout << "The value at a is " << **c << endl;

    return 0;
}