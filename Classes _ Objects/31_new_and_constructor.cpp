//
// Created by CHINTOO on 04-03-2021.
// Here we use new operator and constructor
//

#include "iostream"
using namespace std;

class A
{
    int a, b, c;
public:
    A() = default;
    A(int x, int y, int z = 0)
    {
        a = x;
        b = y;
        c = z;
    }
    void display() const
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    // A *ptr = new A(1, 2, 3);
    A *ptr = new A(1, 2);
    ptr->display();

    // For below line to execute with out error there must be a default constructor
    A *p = new A[3];
    for (int i = 0; i < 3; ++i) {
        p[i] = A(i, i+2, i+3);
    }
    for (int i = 0; i < 3; ++i) {
        p[i].display();
    }
    return 0;
}
