// Passing Objects as arguments in function

#include <iostream>
using namespace std;

class Complex
{
    float a;
    float b;

    public:
        void setComplex(float, float);
        void createComplex (Complex, Complex);
        void displayComplex(void)
        {
            cout << "The complex no is " << a << " + i " << b << endl;
        }

};

void Complex::setComplex(float x, float y)
{
    a = x;
    b = y;
}

void Complex::createComplex(Complex p, Complex q)
{
    a = p.a + q.a;
    b = p.b + q.b;
}

int main()
{
    Complex chintu;
    Complex vicky;
    Complex filu;

    chintu.setComplex(2.5, 4.5);
    vicky.setComplex(5, 7);

    chintu.displayComplex();
    vicky.displayComplex();

    filu.createComplex(chintu, vicky);
    filu.displayComplex();

    return 0;
}