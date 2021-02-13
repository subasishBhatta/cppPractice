#include <iostream>

using namespace std;
int main()
{
    int length {0};
    int breadth {0};

    cout << "Enter the length and breadth of the room: \n";
    cin >> length >> breadth;

    cout << "The area of the room is " << length * breadth << "." << endl;

    return 0;
}