//
// Created by CHINTOO on 06-03-2021.
//

#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main()
{
    ofstream hout("sample3.txt");
    string st1;
    cout << "Enter your name: " << endl;
    cin >> st1;

    hout << "Your name is " + st1;

    hout.close();

    ifstream hin("sample3.txt");
    string st2;
//    hin >> st2;
    getline(hin, st2);
    cout << st2;
    hin.close();

    return 0;
}
