#include <iostream>
using namespace std;

int c = 45;
int main()
{
    // ************** Built in Datatypes *****************
    // int a, b, c;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;

    // c = a + b;
    // cout << "The value of c is " << c << endl;
    // cout << "The value of global c is " << ::c << endl;

    // ************** Float, double literals *****************
    // float num = 34.4;         // Can be 34.4f or 34.4F
    // long double n = 34.4;     // Can be 34.4l or 34.4L
    // cout << "The size of 34.4 is: " << sizeof(34.4) << endl;        // Bydefault 34.4 is a double
    // cout << "The size of 34.4f is: " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is: " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is: " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is: " << sizeof(34.4L) << endl;

    // ************** Reference Variable *****************
    // int x = 12;
    // int &y = x;
    // cout << "x: " << x << endl;
    // cout << "y: " << y << endl;

    // ************** Typecasting *****************
    int p = 34;
    float q = 23.34;

    cout << "The value of p is " << float(p) << endl;
    cout << "The value of p is " << (float)p << endl;

    cout << "The value of q is " << (float)q << endl;
    cout << "The value of q is " << float(q) << endl;

    int d = int(q);
    cout << "The value of d is " << d << endl;
    cout << "The value of expression p+q is " << p+q << endl;
    cout << "The value of expression p+int(q) is " << p+int(q) << endl;
    cout << "The value of expression p+(int)q is " << p+(int)q << endl;

    return 0;
}