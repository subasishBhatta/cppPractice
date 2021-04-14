//
// Created by CHINTOO on 04-03-2021.
// Here the example show us the use of this operator
//

#include "iostream"
using namespace std;

class A
{
    int a;
public:
    // void setData(int a)
//    A * setData(int a)
//    {
//        this->a = a;
//        return this;
//    }
    A & setData(int a)
    {
        this->a = a;
        return * this;
    }
    void getData() const
    {
        cout << a << endl;
    }
};

int main()
{
    A a{};
//    a.setData(4)->getData();
    a.setData(4).getData();
//    a.getData();

    return 0;
}