#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t)
    {
        int x, y, z;
        cin >> x >> y >> z;

        x *= y;
        z *= 1440;

        if (x <= z)
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