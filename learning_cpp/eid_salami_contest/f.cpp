#include <iostream>

using namespace std;

int main()
{
    long long n;
    int count = 0;
    cin >> n;

    if (n < 3)
    {
        if (n == 1)
        {
            cout << 2 << endl;
        }
        else if (n == 2)
        {
            cout << 3 << endl;
        }
    }
    else
    {
        if (n % 2 != 0)
        {
            n += 2;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    n += 2;
                }
                else
                {
                    cout << n << endl;
                }
            }
        }
    }
}