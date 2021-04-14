//
// Created by CHINTOO on 07-03-2021.
// This is an example of function overloading
//

#include "iostream"
using namespace std;

template <class T>
class Show
{
    T data;
public:
    // Show(T x) : data(x) {}
    explicit Show(T x) : data(x) {}
    void display();
};

template <class T>
void Show<T> :: display()
{
    cout << "The data is " << data << endl;
}

void func(int a)
{
    cout << "This is func " << a << endl;
}

template < class T>
void func(T a)
{
    cout << "This is a template based func " << a << endl;
}

template < class T>
void func1(T a)
{
    cout << "This is a template based func1 " << a << endl;
}

int main()
{
    Show <float> a(21.23);
    a.display();

    func(5);            // Exact match always takes the higher priority
    func(10.5);         // The normal func takes int but here we provide float not an exact match
    func1(10);

    // This will happen if we don't call the constructor explicitly
//    float b = 12.00;
//    a = b;                  // Implicit declaration of the constructor
//    a.display();

    return 0;
}
