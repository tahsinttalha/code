#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t != 0)
    {
        int n, x;
        cin >> n >> x;

        n -= x;
        cout << n << endl;
        
        t--;
    }
}