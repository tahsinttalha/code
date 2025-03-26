#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int aa, ab, ba, bb;
        cin >> aa >> ab >> ba >> bb;
        
        aa -= ab;
        ba -= bb;

        int total = aa + ba;

        if (total < 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }
}