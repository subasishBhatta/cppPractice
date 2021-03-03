//
// Created by CHINTOO on 03-03-2021.
// This is a program to revisit the pointers basics
// Here we also see pointer arithmetics
// Here we see live demonstration of new and delete operator
//

#include "iostream"
using namespace std;

int main()
{
    int a {90};
    int *p = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << p << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *p << endl;

    // new operator
    int *b = new int(23);
    float *c = new float(23.34);
    // delete c;
    cout << "The value of b is " << *b << endl;
    cout << "The value of c is " << *c << endl;

    int *arr = new int[3];
    arr[0] = 7;
    *(arr+1) = 8;
    arr[2] = 9;
    // delete[] arr;

    cout << "The value of 1st element in array is " << *arr << endl;
    cout << "The value of 1st element in array is " << *(arr+1) << endl;
    cout << "The value of 1st element in array is " << arr[2] << endl;

    // delete operator
    delete c;
    delete[] arr;

    return 0;
}
