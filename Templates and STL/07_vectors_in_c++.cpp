//
// Created by CHINTOO on 09-03-2021.
// Here is an example to demonstrate the different methods of vector
//

#include "iostream"
#include "vector"
using namespace std;

template<class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); ++i) {            // This will return the size of the vector
        cout << v.at(i) << " ";                     // This will return each element at a particular index
    }
    cout << endl;
}

int main()
{
    // Different types of initialization of vectors
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};       // Direct Initialisation
    vector<int> num1(4);           // This will create a vector with 4 elements and initialise them with 0
    vector<int> num2;                // This will create a zero length vector
//    vector<char> num3(vowels);      // This will create a copy of vector vowels in num3
    vector<char>& num3(vowels);
    vector<int> num4(4, 12);    // This will create a vector with 4 repeated values of 12

    display(vowels);
    display(num1);
    cout << "The size of vector num2 is " << num1.size() << endl;
    cout << "The size of vector num2 is " << num2.size() << endl;
    display(num3);
    display(num4);
    cout << endl;
    // This method will add the values at the end of the vector
    int ele, size = 3;
    for (int i = 0; i < size; ++i) {
        cout << "Enter an element: \n";
        cin >> ele;
        num2.push_back(ele);
    }
    display(num2);
    num2.pop_back();
    display(num2);

    // This method will insert an element at a specified position
    // For this we need to give an iterator to the position where we want to insert
    vector<int> :: iterator it;
    it = num2.begin();              // This will assign it with initial value of the vector num2
    num2.insert(it, 1000);
    display(num2);
    num2.insert(it+1, 3, 2000);
    display(num2);

    // Creating a 2-D vector
    vector<vector<int>> num5
            {
                    {2, 3, 4},
                    {5, 6, 7},
                    {8, 9, 0}
            };
    cout << "The element at (0, 0) position is " << num5[0][0] << endl;
    cout << "The element at (0, 1) position is " << num5.at(0).at(1) << endl;
    cout << "The element at (2, 1) position is " << num5.at(2).at(1) << endl;

    return 0;
}

