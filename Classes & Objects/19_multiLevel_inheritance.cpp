//
// Created by CHINTOO on 02-03-2021.
// This is a code to show the multi level Inheritance
//

#include "iostream"
#include "string"
using namespace std;

class Student
{
protected:
    string name;
    int roll_no{};
public:
//    Student() = default;
    void set_student_details(const string &str, int no)
    {
        name = str;
        roll_no = no;
    }
    void get_student_details() const
    {
        cout << "Student details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl;
    }
};

class Exam : public Student
{
protected:
    float physics{};
    float mathematics{};
public:
    void set_marks(float, float);
    void get_marks();
};

class Result : public Exam
{
    float percentage{};
public:
    void display();
};

void Exam::set_marks(float x, float y) {
    physics = x;
    mathematics = y;
}

void Exam::get_marks() {
    cout << "The marks obtained by " << this->name << " in physics is " << physics << endl;
    cout << "The marks obtained by " << this->name << " in mathematics is " << mathematics << endl;
}

void Result::display() {
    cout << "All the details of " << name << endl;
    cout << "Roll no: " << roll_no << endl;
    get_marks();
    cout << "Result is " << (physics+mathematics)/2 << "%" << endl;
}

int main()
{
    Result shiva;
    shiva.set_student_details("Shiva Kumar", 12);
    shiva.set_marks(94, 90);
    shiva.display();

    return 0;
}
