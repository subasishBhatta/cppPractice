#include <iostream>
#include <string>
using namespace std;

class Shop
{
    string itemName;
    int itemId[100];
    int itemPrice[100];
    int counter {0};

    public:
        void setName();
        void setPrice();
        void displayPrice();
};

void Shop::setName()
{
    cout << "Enter the shop name: "<< endl;
    cin >> itemName;

}

void Shop::setPrice()
{
    cout << "Enter the item id: "<< endl;
    cin >> itemId[counter];
    cout << "Enter the item price: "<< endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice()
{
    cout << "Details of shop " << itemName << " : " << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "Item Id: " << itemId[i] << endl;
        cout << "Item Price: " << itemPrice[i] << endl;
    }
    cout << endl;
    
}

int main()
{
    Shop dookan1;
    dookan1.setName();
    dookan1.setPrice();
    dookan1.setPrice();
    dookan1.setPrice();
    dookan1.displayPrice();

    return 0;
}