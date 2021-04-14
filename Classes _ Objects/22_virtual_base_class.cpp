//
// Created by CHINTOO on 03-03-2021.
//

#include "iostream"
#include "string"
using namespace std;

class Student
{
protected:
    string name;
    int roll_no;
public:
    void set_number(string str, int no)
    {
        name = str;
        roll_no = no;
    }
    void display_student()
    {
        cout << "*********Student Details********" << endl;
        cout << "The name of the student is " << name << endl
        << "Roll no of " << name << " is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float physics{}, math{};
public:
    void set_test_marks(float x, float y)
    {
        physics = x;
        math = y;
    }
    void display_test_score()
    {
        cout << "Marks obtained by " << this->name << " in physics and math is "
        << physics << ", " << math << " respectively." << endl;
    }
};

class Sport : public virtual Student
{
protected:
    float pt{};
public:
    void set_pt_marks(float x)
    {
        pt = x;
    }
    void display_pt_score()
    {
        cout << "Marks obtained by " << name << " in PT is " << pt << endl;
    }
};

class Marks : public Test, public Sport
{
private:
    float total{}, percentage{};
public:
    void total_marks()
    {
        total = physics + math + (pt * 10);
        percentage = total/3;
        cout << "The total mark is " << total << " \"pt mark is out of 10\"" << endl;
        cout << "Percentage of mark is " << percentage << "%" << endl;
    }
    void display_marks()
    {
        display_student();
        display_test_score();
        display_pt_score();
        total_marks();
    }
};

int main()
{
    Marks shiva;
    shiva.set_number("Shiva Kumar", 55);
    shiva.set_test_marks(94, 90);
    shiva.set_pt_marks(8);
    shiva.display_marks();

    return 0;
}
