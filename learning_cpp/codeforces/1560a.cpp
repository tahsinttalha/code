#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        vector <int> integers;

        for (int i = 1; integers.size() != k; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                integers.push_back(i);
            }
            else
            {
                continue;
            }
        }
        
        cout << integers[k - 1] << endl;
    }
}