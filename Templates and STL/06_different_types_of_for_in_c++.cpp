//
// Created by CHINTOO on 09-03-2021.
// Here we demonstrate the range based for loop and for_each loop
// Range based for loop takes the integer to iterate and an iterator
// for_each takes 3 arguments (Starting position, ending position, a function whose operation is applied)
//

#include "iostream"
#include "algorithm"
using namespace std;

void printx1(int a)
{
    cout << a << endl;
}

void printx2(int a)
{
    cout << a * a << endl;
}

int main()
{
    // Array initialisation
    int arr[] {1, 2, 12, 23};
    cout << "Elements in the array are: " << endl;
    for (int i : arr) {
        cout << i << endl;
    }
    cout << "\n\n";
    for(int i : arr)
    {
        cout << i*i << endl;
    }
    cout << endl;
//    cout << arr << endl<< "\n";           This will print the starting address of the array
    for_each(arr, (arr+4), [](int i){cout << i << "\t";});
    cout << endl;
    for_each(arr, arr+4, printx1);
    cout << endl;
    for_each(arr, arr+4, printx2);
    cout << endl;

    return 0;
}

