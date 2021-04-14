//
// Created by CHINTOO on 07-03-2021.
// We can also use template concepts in functions. Here is the example.
//

#include "iostream"
using namespace std;

template<class T>
void exchange(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = float (a+b) / 2;
    return avg;
}


int main()
{
    cout << "Enter two numbers: " << endl;
    int a, b;
    cin >> a >> b;
    float c = average(a, b);
    cout << "Average of " << a << " and " << b << " is " << c << endl;

    // Program to swap numbers
    cout << "Enter two numbers to swap:";
    float e, d;
    cin >> e >> d;
    exchange(e, d);
    cout << "e = " << e << endl << "d = " << d << endl;

    return 0;
}
