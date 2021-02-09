#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumNumber(Complex, Complex);

public:
    void setNumber(int, int);
    void displayNum(void)
    {
        cout << "The number is " << a << " + i" << b << endl;
    }
};

void Complex::setNumber(int x, int y)
{
    a = x;
    b = y;
}

Complex sumNumber(Complex o1, Complex o2)
{
    Complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

int main()
{
    Complex p, q, sum;

    p.setNumber(3, 5);
    p.displayNum();

    q.setNumber(4, 6);
    q.displayNum();

    sum = sumNumber(p, q);
    sum.displayNum();

    return 0;
}