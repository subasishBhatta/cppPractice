//
// Created by CHINTOO on 07-03-2021.
//

#include "iostream"
using namespace std;

template<class T>
class Vector
{
    T *data;
    int size;
public:
    Vector(int n)
    {
        size = n;
        data = new T[size];
    }
    void setData()
    {
        T x;
        cout << "Enter the " << size << " value for this vector:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> x;
            this->data[i] = x;
        }
    }
    void display()
    {
        for (int i = 0; i < size; ++i) {
            cout << this->data[i] << " ";
        }
        cout << endl;
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; ++i) {
            d += this->data[i] * v.data[i];
        }
        return d;
    }
};

int main()
{
    Vector<int> v1(3);
    Vector<int> v2(3);
    v1.setData();
    v2.setData();
    v1.display();
    v2.display();

    int res = v1.dotProduct(v2);
    cout << "The dot product is " << res << endl;

    return 0;
}
