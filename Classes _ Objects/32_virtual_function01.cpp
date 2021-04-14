//
// Created by CHINTOO on 04-03-2021.
//

#include "iostream"
using namespace std;

class Base
{
public:
    int var_base{};
    virtual void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived{};
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    Base obj_base;
    Derived obj_derived;
    Base * base_pointer;
    base_pointer = & obj_derived;

    base_pointer->var_base = 12;
    base_pointer->display();

    return 0;
}
