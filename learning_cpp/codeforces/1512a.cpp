#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, diff;
        cin >> n;

        vector <int> numbers (n), sorted (n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        sorted = numbers;
        sort(sorted.begin(), sorted.end());

        if (sorted[0] == sorted[1])
        {
            diff = sorted[n - 1];
        }
        else
        {
            diff = sorted[0];
        }

        for (int i = 0; i < n; i++)
        {
            if (numbers[i] == diff)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}