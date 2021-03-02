//
// Created by CHINTOO on 02-03-2021.
// Use of Destructor
//

#include <iostream>
using namespace std;

int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "Creating an object with number: " << count << endl;
    }
    ~Num()
    {
        cout << "Destructing the object with number: " << count << endl;
        count--;
    }
};

int main()
{
    cout << "Creating the object n1.\n We are in the main function" << endl;
    Num n1;
    {
        cout << "We are inside the custom made scope" << endl;
        Num n2, n3;
        cout << "Exiting the custom made scope" << endl;
    }
    cout << "Re-entering the main function" << endl;
    cout << "Exiting the main function" << endl;
    return 0;
}