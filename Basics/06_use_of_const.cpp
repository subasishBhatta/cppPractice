#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to carpet cleaning Service" << endl;
    cout << "-----------------------------------\n";

    int small_room;
    int large_room;
    cout << "Enter the number of small rooms: ";
    cin >> small_room;
    cout << "Enter the number of large rooms: ";
    cin >> large_room;

    const double cost_small_room {25.0};
    const double cost_large_room {35.0};
    const double tax {0.06};
    const int month_expiry {30};

    cout << "No of small rooms to be cleaned: " << small_room << endl;
    cout << "No of large rooms to be cleaned: " << large_room << endl;

    cout << "Charges of small room: " << cost_small_room * small_room << endl;
    cout << "Charges of large room: " << cost_large_room * large_room << endl;
    cout << "Total charges of the room: " << (cost_small_room * small_room) + (cost_large_room * large_room) << endl;
    cout << "Tax: " << ((cost_small_room * small_room) + (cost_large_room * large_room)) * tax << endl;

    cout << "=====================================\n";
    cout << "Total estimate" << endl;
    cout << "=====================================\n";
    cout << "Toatal estimate: " << ((cost_small_room * small_room) + (cost_large_room * large_room)) + (((cost_small_room * small_room) + (cost_large_room * large_room)) * tax) << endl;
    cout << "This estimate is valid for " << month_expiry << " days.";



    return 0;
}