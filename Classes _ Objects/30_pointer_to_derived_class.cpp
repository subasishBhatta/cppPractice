//
// Created by CHINTOO on 04-03-2021.
// This is an example of run time polymorphism
//

#include "iostream"
using namespace std;

class Base
{
public:
    int var_base{};
    void display()
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

    base_pointer->var_base = 34;
    base_pointer->display();

    Derived * derived_pointer;
    derived_pointer = & obj_derived;

    derived_pointer->var_derived = 98;
    derived_pointer->var_base = 45;
    derived_pointer->display();


    return 0;
}
