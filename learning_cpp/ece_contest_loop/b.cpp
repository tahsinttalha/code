#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t)
    {
        long long n, m;
        cin >> n >> m;

        n -= m;
        if (n < 0)
        {
            n = 0;
        }
        cout << n << endl;

        t--;
    }
}