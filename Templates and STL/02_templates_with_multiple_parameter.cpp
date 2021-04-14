//
// Created by CHINTOO on 07-03-2021.
// This is an example of templates with multiple parameters(COMMA SEPARATED)
//

#include "iostream"
using namespace std;

template <class T1, class T2>
class myClass
{
    T1 data1;
    T2 data2;
public:
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << " " << data2 << endl;
    }
};

int main()
{
    myClass<int, float> obj(3, 3.56);
    obj.display();

    myClass<float, char> obj2(0.98, 'D');
    obj2.display();

    return 0;
}
