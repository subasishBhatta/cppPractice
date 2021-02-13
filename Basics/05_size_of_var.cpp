#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    cout << "==========================" << endl;
    cout << "Integer: " << sizeof(int) << endl;
    cout << "Unsigned Integer: " << sizeof(unsigned int) << endl;
    cout << "Short Integer: " << sizeof(short) << endl;
    cout << "Unsigned short Integer: " << sizeof(unsigned short) << endl;
    cout << "Long Integer: " << sizeof(long) << endl;
    cout << "Unsigned long Integer: " << sizeof(unsigned long) << endl;
    cout << "Long long Integer: " << sizeof(long long) << endl;
    cout << "Unsigned long long Integer: " << sizeof(unsigned long long) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Character: " << sizeof(char) << endl;
    cout << "Double: " << sizeof(double) << endl;
    cout << "Long Double: " << sizeof(long double) << endl;
    cout << "==========================" << endl;
    
    cout << "==========================" << endl;
    cout << "Minimum size of variables" << endl;

    cout << "Minimum integer variable: " << INT_MIN << endl;
    cout << "Minimum short integer variable: " << SHRT_MIN << endl;
    cout << "Minimum float variable: " << FLT_MIN << endl;
    cout << "Minimum long variable: " << LONG_MIN << endl;
    cout << "Minimum long long variable: " << LLONG_MIN << endl;
    cout << "==========================" << endl;

    cout << "==========================" << endl;
    cout << "Maximum size of variables" << endl;

    cout << "Maximum integer variable: " << INT_MAX << endl;
    cout << "Maximum short integer variable: " << SHRT_MAX << endl;
    cout << "Maximum float variable: " << FLT_MAX << endl;
    cout << "Maximum long variable: " << LONG_MAX << endl;
    cout << "Maximum long long variable: " << LLONG_MAX << endl;
    cout << "==========================" << endl;
    return 0;
}