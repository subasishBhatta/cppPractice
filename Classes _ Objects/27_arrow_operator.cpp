//
// Created by CHINTOO on 04-03-2021.
// This is an example to demonstrate the arrow operator
//

#include "iostream"
using namespace std;

class Complex
{
    int real, complex;
public:
    void setData(int x, int y)
    {
        real = x;
        complex = y;
    }
    void getData() const
    {
        cout << "The real part is " << real << endl;
        cout << "The complex part is " << complex << endl;
    }
};

int main()
{
    Complex c1{};
    Complex *ptr = &c1;

    c1.setData(4, 5);
    ptr->getData();

    Complex *p = new Complex;
    (*p).setData(6, 7);
    p->getData();

    auto *arr = new Complex[3];
    arr->setData(7, 8);
    (arr + 1)->setData(9, 10);
    (arr + 2)->setData(19, 10);

    arr->getData();
    (arr+1)->getData();
    (arr+2)->getData();

    return 0;
}
