#include <iostream>

using namespace std;

int main()
{
    int t;
    long long a, b, count = 0;
    cin >> t;

    while (t)
    {
        cin >> a >> b;

        if (a < b)
        {
            count = b - a;
        }
        else
        {
            long long r = a % b, d = a / b;

            if (r != 0)
            {
                b *= (d + 1);
                count = b - a;
            }
        }

        cout << count << endl;

        t--;
        count = 0;
    }

}