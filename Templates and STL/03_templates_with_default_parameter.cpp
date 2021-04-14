//
// Created by CHINTOO on 07-03-2021.
// Here we see templates with default parameters
//

#include "iostream"
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char >
class Default
{
    T1 a;
    T2 b;
    T3 c;
public:
    Default(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    // Verify Default parameters
    Default<> obj1(2, 0.556, 90);
    obj1.display();

    Default<> obj2(5, 5.56, 65);
    obj2.display();

    // Giving data types to template
    Default<char, int, float> obj3(97, 23, 98.0065);
    obj3.display();

    return 0;
}
