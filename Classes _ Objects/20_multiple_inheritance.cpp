//
// Created by CHINTOO on 03-03-2021.
// This code is an example of multiple inheritance
//

#include "iostream"
#include "string"
using namespace std;

class Employee
{
protected:
    string name;
    int eid{};
    float salary{};
public:
    void get_details_emp(const string &str, int no, float  sal)
    {
        name = str;
        eid = no;
        salary = sal;
    }
};

class Assistant
{
protected:
    int aid{};
    string sub;
public:
    void get_details_ass(const string & str, int no)
    {
        aid = no;
        sub = str;
    }
};

class Programmer : public Employee, public Assistant
{
    string code;
    int pid{};
public:
    void get_details_pro(const string & str, int no)
    {
        code = str;
        pid = no;
    }
    void show_details()
    {
        cout << "All the details of the employee " << name << ": " << endl;
        cout << "Employee id: " << eid << endl;
        cout << "Assistant id: " << aid << endl;
        cout << "Programmer id: " << pid << endl;
        cout << "Assist Subject: " << sub << endl;
        cout << "Programming Language: " << code << endl;
    }
};

int main()
{
    Programmer shiva;
    shiva.get_details_emp("Shiva Kumar Agrawal", 45, 35421.988);
    shiva.get_details_ass("C Language", 55);
    shiva.get_details_pro("Python", 31);
    shiva.show_details();

    return 0;
}
