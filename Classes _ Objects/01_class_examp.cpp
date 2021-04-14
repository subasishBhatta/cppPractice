#include <iostream>
#include <string>
using namespace std;

class Account
{
    private:
        string str;
        long long acc_no{};
        float money{};
    public:
        void setData();
        void getData();
};

void Account :: setData ()
{
    cout << "Enter the name of the account holder: ";
    cin >> str;
    cout << "Enter the account No: ";
    cin >> acc_no;
    cout << "Enter the amount in the account: ";
    cin >> money;
}

void Account :: getData()
{
    cout << "\n\nThe account details are: " << endl;
    cout << "Name : " << str << endl;
    cout << "Account Number : " << acc_no << endl;
    cout << "Total amount : " << money << endl;
}

int main()
{
    Account chintu;
    chintu.setData();
    chintu.getData();

    return 0;
}