//
// Created by CHINTOO on 02-03-2021.
// Here this is same as single_inherit_2.cpp but the only difference is,
// that the derived class is private
//

#include "iostream"
using namespace std;

class Base
{
    int data1;
public:
    int data2;
    void setData(int x, int y)
    {
        data1 = x;
        data2 = y;
    }
    int getData1() const;
    int getData2();
};

class Derived : private Base
{
    int data3;
public:
    void process();
    void display();
};

int Base::getData1() const {
    return data1;
}

int Base::getData2() {
    return data2;
}

void Derived::process() {
    setData(13, 20);
    data3 = data2 * getData1();
}

void Derived::display() {
    cout << "The value of data1 is " << getData1() << endl;
    cout << "The value of data1 is " << data2 << endl;
    cout << "The value of data1 is " << data3 << endl;
}
int main()
{
    Derived der{};
//    der.setData(20, 12);
    der.process();
    der.display();

    return 0;
}