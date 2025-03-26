#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t)
    {
        double x, y, z;
        cin >> x >> y >> z;

        x *= y;
        x = z / x;

        if (x > 0.5)
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