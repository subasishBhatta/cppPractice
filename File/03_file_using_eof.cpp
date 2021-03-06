//
// Created by CHINTOO on 06-03-2021.
//

#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
    ofstream out;
    out.open("new_file.txt");

    string st3 = "My name is chintoo.\nAlso called as Subasish.\nHi all to cpp world.";
    out << st3;
    out.close();

    ifstream in;
    in.open("new_file.txt");
    string st4;

    while (in.eof() == 0)
    {
        getline(in, st4);
        cout << st4<< endl;
    }
    in.close();

    return 0;
}
