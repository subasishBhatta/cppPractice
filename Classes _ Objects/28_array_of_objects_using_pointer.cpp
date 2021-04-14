//
// Created by CHINTOO on 04-03-2021.
// This example helps you understand the use of new operator in creating array of objects
//

#include "iostream"
#include "string"
using namespace std;

class Shop
{
    string name;
    int id;
    float price;
public:
    void set_price(const string &str, int x, float y)
    {
        name = str;
        id = x;
        price = y;
    }
    void get_price()
    {
        cout << "Name of item: " << name << endl;
        cout << "Item id: " << id << endl;
        cout << "Price of item: " << price << endl;
    }
};

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    string s;
    int p;
    float q;

    for (int i = 0; i < size; ++i) {
        cout << "Enter the name of the item no " << i+1 << endl;
        cin >> s;
        cout << "Enter the id and price of item " << s << endl;
        cin >> p >> q;
        (ptr+i)->set_price(s, p, q);
    }

    cout << "\n\nThe item details in the shop is down below: " << endl;
    for (int i = 0; i < size; ++i) {
        (ptr+i)->get_price();
    }

    return 0;
}
