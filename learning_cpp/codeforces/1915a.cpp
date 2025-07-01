#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        vector <int> digits (3);
        for (int i = 0; i < 3; i++)
        {
            cin >> digits[i];
        }

        sort(digits.begin(), digits.end());

        if (digits[0] == digits[1])
        {
            cout << digits[2] << endl;
        }
        else
        {
            cout << digits[0] << endl;
        }
    }
}