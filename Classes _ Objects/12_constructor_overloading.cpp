/***********************************
    1. Constructor overloading is almost similar to function overloading
    2. Here we have morethan one constructor inside a class 
    3. But the  number of arguments in each constructor is different
    4. While declaring the object the no of argumnerts we pass that depends on which constructor is invoked.
************************************/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex()
        {
            a = 0;
            b = 0;
        }
        Complex(int x)
        {
            a = x;
            b = 0;
        }
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        void display(void)
        {
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }
};

int main()
{
    Complex a;
    a.display();
    
    Complex b(3);
    b.display();
    
    Complex c(5, 7);
    c.display();

    return 0;
}