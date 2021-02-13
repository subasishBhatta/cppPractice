#include<iostream>
using namespace std;

int main()
{
    int a = 12, b = 5;

    // Arithmatic Operators
    cout<<"This is the Arithmatic Operator:";
    cout<<"The output of a + b is: "<<a + b<<endl;
    cout<<"The output of a - b is: "<<a - b<<endl;
    cout<<"The output of a * b is: "<<a * b<<endl;
    cout<<"The output of a / b is: "<<a / b<<endl;
    cout<<"The output of a % b is: "<<a % b<<endl;
    cout<<"The output of a++ is: "<<a++<<endl;
    cout<<"The output of a-- is: "<<a--<<endl;
    cout<<"The output of ++a is: "<<++a<<endl;
    cout<<"The output of --a is: "<<--a<<endl<<endl;
    
    // Assignment Operators
    // a = 3, a += 4, a -= 3

    // Comparison Operator
    cout<<"This is the comparison Operator:";
    cout<<"The output of a == b is: "<<(a == b)<<endl;
    cout<<"The output of a != b is: "<<(a != b)<<endl;
    cout<<"The output of a > b is: "<<(a > b)<<endl;
    cout<<"The output of a < b is: "<<(a < b)<<endl;
    cout<<"The output of a >= b is: "<<(a >= b)<<endl;
    cout<<"The output of a <= b is: "<<(a <= b)<<endl<<endl;

    // Logical Operator
    cout<<"This is the Logical Operator:";
    cout<<"The output of ((a == b) && (a < b)) is: "<<((a == b) && (a < b))<<endl;
    cout<<"The output of ((a == b) || (a < b)) is: "<<((a == b) || (a < b))<<endl;
    cout<<"The output of !(a == b) is: "<<!(a == b)<<endl<<endl;
    
    // Bitwise Operator
    cout<<"This is the Bitwise Operator:";
    cout<<"The output of ((a == b) && (a < b)) is: "<<((a == b) && (a < b))<<endl;
    cout<<"The output of ((a == b) || (a < b)) is: "<<((a == b) || (a < b))<<endl;
    cout<<"The output of !(a == b) is: "<<!(a == b)<<endl;

    return 0;
}