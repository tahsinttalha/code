#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector <data_type> variable_name; ----> without allocation
    // vector <data_type> variable_name (size); ----> with allocation
    // vector <data_type> variable_name {elements} ----> initialised
    // vector <data_type> variable_name (size, common_value_for_all_spaces) ----> allocation + initialisation

    vector <char> vowels {'a', 'b', 'c', 'd', 'e'};
    vector <int> numbers (5, 0);

    // accessing vector elements:
    // vector_name.at(index)

    cout << vowels.at(3) << endl; // does bound checking
    cout << vowels[3] << endl; // doesn't do bound checking
    cout << numbers.at(0) << endl;

    cout << "There are " << vowels.size() << " vowels in the vector." << endl;

    // dynamic vector:
    // vector_name.push_back(element)

    cout << "Write a number: ";
    int num {0};
    cin >> num;

    numbers.push_back(num);

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << endl;
    }

    // for (int i = 0; i < 10; i++) // checks for bound
    // {
    //     cout << numbers.at(i) << endl;
    // }

    // Example of a 2D vector

    vector <vector <int>> movie_ratings
    {
        {1, 2, 3},
        {5, 7, 9},
        {10, 11, 12}
    };

    cout << "\nHere are the reviews of reviewers using array syntax: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << movie_ratings[i][j] << endl;
        }
    }

    cout << "\nHere are the reviews of reviewers using vector syntax: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << movie_ratings.at(i).at(j) << endl;
        }
    }
}