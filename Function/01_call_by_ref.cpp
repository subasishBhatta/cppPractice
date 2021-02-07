#include <iostream>
using namespace std;

// Call by reference using pointer reference
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Call by reference using C++ reference variable
void swapRefVar(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}

int main()
{
    int a {4}, b {5};
    cout << "Before swapping: " << endl;
    cout << "a: " << a << "\nb: " << b << endl;

    // Call by reference using pointer
    // swap(&a, &b);
    // cout << "After swapping using pointer: " << endl;
    // cout << "a: " << a << "\nb: " << b << endl;

    // Call by reference using C++ ref variable
    swapRefVar(a, b);
    cout << "After swapping using reference variable: " << endl;
    cout << "a: " << a << "\nb: " << b << endl;

    return 0;
}