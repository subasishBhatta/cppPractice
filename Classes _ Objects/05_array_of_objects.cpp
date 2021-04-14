#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;
    public:
        void setEmp(void)
        {
            cout << "Enter the name of the employee: ";
            cin >> name;
            cout << "Enter the id of " << name << " : ";
            cin >> id;
            cout << "Enter the salary of " << name << " : ";
            cin >> salary;
        }
        void getEmp(void)
        {
            cout << "The details of the employee " << name << " : " << endl;
            cout << "Id - " << id << endl;
            cout << "Salary - " << salary << endl;
        }
};

int main()
{
    Employee fb[3];
    for (int i = 0; i < 3; i++)
    {
        fb[i].setEmp();
    }
    
    for (int i = 0; i < 3; i++)
    {
        fb[i].getEmp();
    }

    return 0;
}