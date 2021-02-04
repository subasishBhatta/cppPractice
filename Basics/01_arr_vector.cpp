#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr [5] {12, 34};
    cout << "The first value: " << arr[0] << endl;
    cout << "The second value: " << arr[1] << endl;
    cout << "The third value: " << arr[2] << endl;
    cout << "The fourth value: " << arr[3] << endl;
    cout << "The fifth value: " << arr[4] << endl;

// Vector initialisation and its use
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel: " << vowels[0] << endl;
    cout << "The last vowel: " << vowels[4] << endl;

// Use of push back method to add a character at the end of the array
    // vowels.push_back('z');
    // cout << "The last vowel: " << vowels[5] << endl;

// Initialising all the values of the vectors to 0 by using parenthesis
    // vector <int> scores(3);
    // cout << scores[0] << endl;
    // cout << scores[1] << endl;
    // cout << scores[2] << endl;

// Initialising all the values of the vectors to a fixed value
    // vector <int> scores(3, 100);
    // cout << scores[0] << endl;
    // cout << scores[1] << endl;
    // cout << scores[2] << endl;

    vector <double> scores {100, 98.23, 34.65};
// Getting the values using array syntax
    // cout << scores[0] << endl;
    // cout << scores[1] << endl;
    // cout << scores[2] << endl;
// Getting the values using vector syntax
    // cout << scores.at(0) << endl;
    // cout << scores.at(1) << endl;
    // cout << scores.at(2) << endl;
    // // It will check the bound and give a specific message
    // cout << scores.at(3) << endl;
// To get the size of the vector using vector method
    // cout << "\nThere are " << scores.size() << " values in the vector." << endl;
// Reinitialise the vector values using vector method
    // cout << "Enter the new values into the vectors: " << endl;
    // cin >> scores.at(0);
    // cin >> scores.at(1);
    // cin >> scores.at(2);
    // cout << "The updated values in the vector: \n";
    // cout << scores.at(0) << endl;
    // cout << scores.at(1) << endl;
    // cout << scores.at(2) << endl;

// 2-D Vector
    vector <vector <int>> movie_ratings
    {
        {3, 4, 7, 8},
        {1, 2, 3, 4},
        {5, 9, 10, 4}
    };

    // Movie rating using array syntax
    // cout << "Movie rating of the first reviewer using the array syntax: " << endl;
    // cout << movie_ratings[0][0] << endl;
    // cout << movie_ratings[0][1] << endl;
    // cout << movie_ratings[0][2] << endl;
    // cout << movie_ratings[0][3] << endl;

    // // Movie rating using vector syntax
    // cout << "Movie rating of the first reviewer using the vector syntax: " << endl;
    // cout << movie_ratings.at(0).at(0) << endl;
    // cout << movie_ratings.at(0).at(1) << endl;
    // cout << movie_ratings.at(0).at(2) << endl;
    // cout << movie_ratings.at(0).at(3) << endl;
    return 0;
}

