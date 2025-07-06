#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        long long x, y, n, maximum = 0;
        cin >> x >> y >> n;

        long long remainder = n % x;

        // concept: n = multiple of x + remainder - (remainder - y)
        if (remainder > y)
        {
            n = ((n / x) * x) + y;
        }

        // concept: n = (n - remainder) - x + y;
        else if (remainder < y)
        {
            n = n - remainder - x + y;
        }

        cout << n << endl;
        
    }
}