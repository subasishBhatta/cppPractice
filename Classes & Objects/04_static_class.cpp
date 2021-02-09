#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;
    int id;
    static int count;

    public:
        void setData(void)
        {
            cout << "Enter the name of the employee: ";
            cin >> name;
            cout << "Enter the id of " << name << " : ";
            cin >> id;
            count++;
        }
        void display(void)
        {
            cout << "Employee details of " << name << " : " << endl;
            cout << "Id number: " << id << endl;
            cout << "Count no: " << count << endl;
        }
        static void getCount(void)
        {
            cout << "count: " << count << endl;
        }
}chintu, vicky, filu;

int Employee::count;

int main()
{
        chintu.setData();
        chintu.display();
        chintu.getCount();  

        vicky.setData();
        vicky.display();    
        vicky.getCount();  

        filu.setData();
        filu.display();    
        filu.getCount();  

    return 0;
}