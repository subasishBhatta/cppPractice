//
// Created by CHINTOO on 03-03-2021.
// This is an example of multiple Inheritance
// Here we are implementing a Calculator
// Which performs both regular and scientific operations
//

#include "iostream"
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    float a, b;
public:
    void get_value_sim(float x, float y)
    {
        a = x;
        b = y;
    }
    void simple_operations()
    {
        cout << "The summation of " << a << " and " << b << " is " << a+b << endl;
        cout << "The subtraction of " << a << " and " << b << " is " << a-b << endl;
        cout << "The multiplication of " << a << " and " << b << " is " << a*b << endl;
        cout << "The division of " << a << " and " << b << " is " << a/b << endl;
    }
};

class ScientificCalculator
{
protected:
    float c, d;
public:
    void get_value_sci(float x, float y)
    {
        c = x;
        d = y;
    }
    void sci_operation() const
    {
        cout << "The " << d << " power of " << c << " is " << pow(c, d) << endl;
        cout << "Modulus when " << c << " divides by " << d << " is " << fmod(c, d) << endl;
        cout << "The hypotenuse of " << c << " and " << d << " is " << hypot(c, d) << endl;
    }

};

class hybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void get_value(float x, float y)
    {
        get_value_sim(x, y);
        get_value_sci(x, y);
    }
    void display_normal()
    {
        simple_operations();
    }
    void display_sci()
    {
        sci_operation();
    }
};

int main()
{
    float p, q;
    cout << "Enter the values for mathematical operations: " << endl;
    cin >> p >> q;

    hybridCalculator math;
    math.get_value(p, q);
    math.display_normal();
    math.display_sci();

    return 0;
}

