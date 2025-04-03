#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, ways;
        cin >> n;

        if (n < 3)
        {
            ways = 0;
        }
        else
        {
            if (n % 2 == 0)
            {
                ways = n / 2;
                ways --;
            }
            else
            {
                n --;
                ways = n / 2;
            }
        }

        cout << ways << endl;
        ways = 0;
    }
}