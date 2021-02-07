#include <iostream>
using namespace std;

int main()
{
    int arr[5] {12, 23, 34, 45, 56};
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of element " << i+1 << " is " << arr[i] << endl;
    }
    
    int arr_2[4] {};
    cout << "Enter the elements into the array 2: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr_2[i];
    }
    cout << "Displaying the contents of array 2: "<< endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of element " << i+1 << " is " << arr_2[i] << endl;
    }
    
    // Using pointer arithmetics
    int *ptr = arr_2;
    cout << "Displaying the contents of array 2: "<< endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of element " << i+1 << " is " << (*ptr + i) << endl;
    }
    // cout << endl;
    // cout << endl;
    // cout << "The value of is " << ()
    

    return 0;
}