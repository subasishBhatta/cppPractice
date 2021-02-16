/*********************************
 * Here we are going to dynamically initialise the objects.
 * Means which constructor is going to run is decided after user gives the input.   
 *********************************/

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, year;
    float rate;
    float retValue;

public:
    BankDeposit() {}
    BankDeposit(int, int, float);
    BankDeposit(int, int, int);
    void show(void);
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r;
    retValue = principal;

    for (int i = 0; i < y; i++)
    {
        retValue = retValue * (1 + rate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float(r) / 100;
    retValue = principal;

    for (int i = 0; i < y; i++)
    {
        retValue = retValue * (1 + rate);
    }
}
void BankDeposit::show()
{
    cout << "The principal amount is " << principal
         << ". The return value after " << year << " years is "
         << retValue << "." << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the principal amount, year and interest rate: " << endl;
    cin >> p >> y >> r;

    if (r < 1)
    {
        bd1 = BankDeposit(p, y, r);
        bd1.show();
    }
    else
    {
        R = int(r);
        bd2 = BankDeposit(p, y, R);
        bd2.show();
    }

    return 0;
}