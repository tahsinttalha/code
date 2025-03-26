#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int n, x, p = 5, d;
        cin >> n >> x >> d;

        x *= p;
        n /= x;

        d += n;

        cout << d << endl;

        t--;
    }
}   