//
// Created by CHINTOO on 03-03-2021.
// This is a program to demonstrate the use of constructor in derived class
//

#include "iostream"
using namespace std;

class Base1
{
    int d1, d2;
public:
    Base1(int x, int y)
    {
        d1 = x;
        d2 = y;
        cout << "Constructor of Base 1 is called" << endl;
    }
    void display_base1() const;
};

class Base2
{
    int d3, d4;
public:
    Base2(int x, int y)
    {
        d3 = x;
        d4 = y;
        cout << "Constructor of Base 2 is called" << endl;
    }
    void display_base2() const;
};

class Derived : public Base2, public Base1
{
    int d5;
public:
    Derived(int a, int b, int c, int d, int e) : Base1(a, b), Base2(c, d)
    {
        d5 = e;
        cout << "Constructor of Derived class is called" << endl;
    }
    void display_derived() const
    {
        cout << "The data in the derived class is " << d5 << endl;
    }
};

void Base1 :: display_base1() const{
    cout << "The data in the derived class is " << d1 << " and " << d2 << endl;
}

void Base2 :: display_base2() const{
    cout << "The data in the derived class is " << d3 << " and " << d4 << endl;
}

int main()
{
    Derived d(1, 2, 3, 4, 5);
    d.display_base1();
    d.display_base2();
    d.display_derived();

    return 0;
}
