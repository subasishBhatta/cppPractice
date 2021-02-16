#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex(void);          // This is the constructor declaration
        void display(void);
};

Complex::Complex(void)
{
    a = 10;
    b = 20;
}

void Complex::display(void)
{
    cout << "The value of the complex variable is " << a << " + i" << b << endl;
}

int main()
{
    // Since the Constructor is a function and has the same name as the Class
    // Once the object is declared then the object is also auto initialised
    Complex obj;
    obj.display();

    return 0;
}