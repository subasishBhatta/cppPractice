//
// Created by CHINTOO on 03-03-2021.
// This program shows the use of initialization list in constructor
//

#include "iostream"
using namespace std;

class Test
{
    int a{}, b{};
public:
//    Test(int i , int j) : a(i), b(j)
//    Test(int i , int j) : a(i), b(i+j)
//    Test(int i , int j) : a(i), b(2*j)
//    Test(int i , int j) : a(i), b(a+j)
//    Test(int i , int j) : b(j), a(i+b)  ----> Throws garbage value since a is initialised before b
    Test(int i , int j) : a(i)
    {
        b = j;
        cout << "The value of a = " << a << ", b = " << b << endl;
    }

};
int main()
{
    Test t(4, 6);

    return 0;
}

