#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector <int> array (n);

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        sort(array.begin(), array.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(array[i] - array[i + 1]) == 1 || array[i] == array[i + 1])
            {
                array[i] = -1;
            }
            else
            {
                continue;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (array[i] == -1)
            {
                array.erase(array.begin() + i);
                i--;
            }
        }

        if (array.size() > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}