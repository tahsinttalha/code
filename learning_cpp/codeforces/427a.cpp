#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, crime_count = 0, store = 0;
    cin >> n;

    vector <int> crimes (n);
    for (int i = 0; i < n; i++)
    {
        cin >> crimes[i];
    }

    if (crimes[0] > 0)
    {
        if (crimes[0] > 10)
        {
            store += 10;
        }
        else
        {
            store += crimes[0];
        }
    }
    else
    {
        ++crime_count;
    }

    for (int i = 1; i < n; i++)
    {
        if (crimes[i] > 0)
        {
            if (crimes[i] > 10)
            {
                store += 10;
            }
            else
            {
                store += crimes[i];
            }
        }
        else
        {
            if (store > 0)
            {
                store += crimes[i];
            }
            else
            {
                ++crime_count;
            }
        }

    }

    cout << crime_count << endl;
}