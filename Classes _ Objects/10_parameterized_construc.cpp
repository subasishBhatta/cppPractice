#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex(int, int);      // Parameterized function definition
        void display(void)
        {
            cout << "The complex number is " << a << " + i" << b << endl;
        }
};
// This is the function declaration of parameterized function
// Since it takes arguments
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6);
    a.display();

    // Explicit call
    Complex b = Complex(8, 10);
    b.display();
    
    return 0;
}