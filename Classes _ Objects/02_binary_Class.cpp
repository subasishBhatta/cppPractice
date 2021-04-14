#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;
    void check_bin(void);       // This is a private method

public:
    void read(void);
    void ones_comp(void);
    void display(void);
};

void Binary::read()
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
    check_bin();                // Nesting of member function inside another method
}

void Binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary::ones_comp()
{
    cout << "Doing 1's compliment: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display()
{
    cout << "The binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    b.display();
    b.ones_comp();
    b.display();

    return 0;
}