//
// Created by CHINTOO on 03-03-2021.
//


#include <utility>

#include "iostream"
#include "string"
using namespace std;

class Employee
{
protected:
    string name;
    int id{};
    float salary{};
    int num{25};
public:
//    Employee()= default;
    Employee(const string &str, int no, float sal)
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
    string lang;
public:
    Programmer(const string &code, const string &str, int no, float sal) : Employee(str, no, sal)
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
    Programmer shiva("Python", "Shiva Kumar Agrawal", 215, 54000.56);
    shiva.display();
    shiva.show_lang();

    return 0;
}
