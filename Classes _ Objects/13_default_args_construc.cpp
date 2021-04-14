/*********************************
 * Here we are demonstarating a constructor with default arguments.
 * Like in normal functions in constructor also we can declare a default argument
 * If we don't pass any value for that argument then it will take the default the argument
 * Other wise if we pass arguments while calling then it will over write the default argument.
 ********************************/

#include <iostream>
using namespace std;

class Simple
{
    int a, b;
    public:
        Simple(int x, int y = 10)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout << "The value of a and b is " << a << ", " << b << endl;
        }
};

int main()
{
    Simple p(3);
    p.display();

    Simple q(5, 8);
    q.display();
    
    return 0;
}