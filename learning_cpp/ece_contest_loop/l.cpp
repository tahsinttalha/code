#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int n, k;
        cin >> n >> k;

        int m = n / (k + 1);
        m = n - (m * k);
        
        cout << m << endl;
        
        t--; 
    }
}