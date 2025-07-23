#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x / 10 == 0)
        {
            cout << x << endl;
        }
        else
        {
            vector <int> numbers;
            while (x)
            {
                numbers.push_back(x % 10);
                x /= 10;
            }

            sort (numbers.begin(), numbers.end());

            cout << numbers[0] << endl;
        }
    }
}