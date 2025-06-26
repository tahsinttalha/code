#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, store = 0, diff;
    cin >> n;

    vector <long long> weights (n);

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    store = abs(weights[0] - weights[1]);
    
    for (int i = 2; i < n - 1; i++)
    {
        diff = abs(weights[i] - weights[i + 1]);
        if (diff < store)
        {
            store = diff;
        }
    }

    cout << store << endl;
}

// 1 2 3 4 7 

// 3 8 9 10 14 20