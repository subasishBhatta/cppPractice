#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
    public:
        int sumReal(Complex, Complex);
        int sumComp(Complex, Complex);
};

class Complex
{
    int a, b;
    friend int Calculator::sumReal(Complex, Complex);
    friend int Calculator::sumComp(Complex, Complex);
public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayNum(void)
    {
        cout << "The number is " << a << " + i " << b << endl;
    }
};


int Calculator::sumReal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumComp(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(4, 6);
    c2.setNumber(2, 4);

    c1.displayNum();
    c2.displayNum();

    Calculator c3;
    int res = c3.sumReal(c1, c2);
    int resc = c3.sumComp(c1, c2);

    cout << "The sum of the real part is " << res << endl;
    cout << "The sum of the complex part is " << resc << endl;

    return 0;
}