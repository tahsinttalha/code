#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t)
    {
        long long x, n;
        cin >> x >> n;
        
        if (n % 100 == 0)
        {
            n /= 100;
        }
        else
        {
            n /= 100;
            n++;
        }

        if (n > x)
        {
            n -= x;
        }
        else
        {
            n = 0;
        }
        cout << n << endl;

        t--;
    }
}