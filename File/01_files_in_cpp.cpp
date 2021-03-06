//
// Created by CHINTOO on 06-03-2021.
//

#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main()
{
    string str1 = "Hello World";
    string str2;
    // Writing data into a file using ofstream class
//    ofstream out("sample.txt");
//    out << str1;

    ifstream in("sample2.txt");
    // in >> str2;              // -> This will read only one word
    getline(in, str2);
    cout << str2;


    return 0;
}
