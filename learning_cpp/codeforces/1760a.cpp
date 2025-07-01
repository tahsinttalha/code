#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        vector <int> num (3);

        for (int i = 0; i < 3; i++)
        {
            cin >> num[i];
        }

        sort(num.begin(), num.end());

        cout << num[1] << endl;
    }
}