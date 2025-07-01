#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector <int> times (n);
    for (int i = 0; i < n; i++)
    {
        cin >> times[i];
    }

    for (int i = 0; i < n; i++)
    {
        times[i] += k;
    }

    sort (times.begin(), times.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (times[i] > 5)
        {
            times.erase(times.end());
        }
    }
    
    int len = times.size(), count = 0;

    if (len >= 3)
    {
        if (len % 3 == 0)
        {
            count = len / 3;
        }
        else
        {
            len -= (len % 3);
            count = len / 3;
        }
    }

    cout << count << endl;
}
