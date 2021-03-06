//
// Created by CHINTOO on 04-03-2021.
//

#include "iostream"
#include "string"
using namespace std;

class CWH
{
protected:
    string name;
    int no;
    float rating;
public:
    CWH(string str, int x, float r)
    {
        name = str;
        no = x;
        rating = r;
    }
    virtual void display()=0;       // This is the pure virtual function
};

class CWHVideo : public CWH
{
    float time;
public:
    CWHVideo(string str, int x, float r, float t) : CWH(str, x, r)
    {
        time = t;
    }
    void display() override
    {
        cout << "The name of the tutorial is: " << name << endl;
        cout << "The no of the tutorial is: " << no << endl;
        cout << "The rating of the tutorial is: " << rating << endl;
        cout << "The total time for the tutorial is: " << time << endl;
    }
};

class CWHText : public CWH
{
    int words;
public:
    CWHText(string str, int x, float r, int w) : CWH(str, x, r)
    {
        words = w;
    }
    void display() final
    {
        cout << "The name of the tutorial is: " << name << endl;
        cout << "The no of the tutorial is: " << no << endl;
        cout << "The rating of the tutorial is: " << rating << endl;
        cout << "The total text words for the tutorial is: " << words << endl;
    }
};
int main()
{
    CWHVideo python("Python series", 1, 4.23, 125.32);
//    python.display();
    CWHText python_t("Python series", 1, 4.23, 325);
//    python_t.display();

    CWH *tuts[2];
    tuts[0] = &python;
    tuts[1] = &python_t;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}
