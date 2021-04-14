//
// Created by CHINTOO on 02-03-2021.
// This is a code to demonstrate the single inheritance
//

#include <utility>

#include "iostream"
#include "string"
using namespace std;

class Employee
{

public:
    string name;
    int id{};
    float salary{};
    int num{25};
    Employee()= default;
    Employee(string str, int no, float sal)
    {
        name = str;
        id = no;
        salary = sal;
    }
    void display()
    {
        cout << "Employee Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Employee id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Programmer : public Employee
{
public:
    string lang;
    Programmer(const string &code)
    {
        lang = code;
    }
    void show_lang()
    {
        cout << "The language known is " << lang << endl;
    }
};

int main()
{
    Employee Michael("Michael Sins", 1002, 12324.45);
    Michael.display();
    Programmer shiva("Python");
    shiva.show_lang();
    shiva.display();
    cout << "The number is " << shiva.num << endl;

    return 0;
}
